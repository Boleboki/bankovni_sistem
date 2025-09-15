#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <mysql.h>
#include <vector>
#include "Konverzije.h"
#include "Funkcije - Varijable.h"
using namespace std;
struct Date
{
    int dan;
    int mesec;
    int godina;
    string toString(char sep = '/') {
        stringstream ss;
        ss << setfill('0');
        ss << setw(2) << dan << sep << setw(2) << mesec << sep << setw(4) << godina;
        return ss.str();
    }
    string toString(const string& format) {
        tm timeinfo = {};
        timeinfo.tm_year = godina - 1900;
        timeinfo.tm_mon = mesec - 1;
        timeinfo.tm_mday = dan;
        stringstream ss;
        ss << put_time(&timeinfo, format.c_str());
        return ss.str();
    }
};
struct Time
{
    int sat;
    int minut;
    int sekunda;
    string toString(char sep = ':') {
        stringstream ss;
        ss << setfill('0');
        ss << setw(2) << sat << sep << setw(2) << minut << sep << setw(2) << sekunda;
        return ss.str();
    }
    string toString(const string& format) {
        tm timeinfo = {};
        timeinfo.tm_hour = sat;
        timeinfo.tm_min = minut;
        timeinfo.tm_sec = sekunda;
        stringstream ss;
        ss << put_time(&timeinfo, format.c_str());
        return ss.str();
    }
};
struct Datetime
{
    Time time;
    Date date;
    string toString(char sep1 = '/', char sep2 = ':') {
        stringstream ss;
        ss << setfill('0');
        ss << setw(2) << date.dan << sep1 << setw(2) << date.mesec
           << sep1 << setw(4) << date.godina << " " << setw(2) << time.sat 
           << sep2 << setw(2) << time.minut << sep2 << setw(2) << time.sekunda;
        return ss.str();
    }
    string toString(const string& format) {
        tm timeinfo = {};
        timeinfo.tm_year = date.godina - 1900;
        timeinfo.tm_mon = date.mesec - 1;
        timeinfo.tm_mday = date.dan;
        timeinfo.tm_hour = time.sat;
        timeinfo.tm_min = time.minut;
        timeinfo.tm_sec = time.sekunda;
        stringstream ss;
        ss << put_time(&timeinfo, format.c_str());
        return ss.str();
    }
};
struct Prebivaliste
{
    string adresa;
    string grad;
    int postanski_broj;
    string drzava;
};
struct Userinfo {
    string pol;
    string ime;
    string prezime;
    string korisnicko_ime;
    string telefon;
    string jmbg;
    Date datum_rodjenja;
    Prebivaliste prebivaliste;
    string napomena;
};
struct User
{
    int id;
    Userinfo user;
    string email;
    string password;
    string racun;
    string vrsta_naloga;
    string valuta;
    double novac;
    Datetime datum_otvaranja_naloga;
    User() : inicijalizovan(false) {}

    void inicijalizuj() {
        inicijalizovan = true;
    }

    bool postoji() {
        return inicijalizovan;
    }
private: bool inicijalizovan;
};
struct Transkacije {
    int idTranskacije;
    int idNaloga;
    string tipTranskacije;
    double kolicina;
    Datetime datum;
    string deskripcija;
    int idPrimalac;
    double medjustanjeNaloga;
    double medjustanjePrimalaca;
    
};
inline Date stringToDate(const string& str);
inline Time stringToTime(const string& str);
inline Datetime stringToDatetime(const string& str);
inline string dateToString(const Datetime& datetime);
inline string dateToString(const Time& time);
inline string dateToString(const Date& date);

class Database {
private:
    string fields, values, schema, name;
    string to_string_with_quotes(const string& arg) {
        string rez = "'" + arg + "'";
        return rez;
    }
    MYSQL* conn;
    template<typename T>
    vector<T> ConvertRowsToStructs(MYSQL_RES* res) {
        vector<T> result;
        MYSQL_ROW row;
        while ((row = mysql_fetch_row(res))) {
            T data;
            int col_index = 0;
            for_each_tuple_field(data, [&](auto& field) {
                using field_type = decltype(field);
                if constexpr (is_same_v<field_type, int>) {
                    field = stoi(row[col_index]);
                }
                else if constexpr (is_same_v<field_type, double>) {
                    field = stod(row[col_index]);
                }
                else if constexpr (is_same_v<field_type, string>) {
                    field = row[col_index];
                }
                col_index++;
                });
            result.push_back(data);
        }
        return result;
    }
public:
    Database(const string& hostname, const string& username, const string& password, const string& database, const string& db_name) 
        : schema(database), name(db_name) {
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, hostname.c_str(), username.c_str(), password.c_str(), database.c_str(), 3306, NULL, 0);
    }

    ~Database() {
        mysql_close(conn);
    }

    
    template<typename ... Strings>
    string addFields(const string& arg, const Strings&... rest) {
        string fields1 = arg;
        if constexpr (sizeof...(rest) > 0) fields1 += ", " + addFields(rest...);
        fields = fields1;
        return fields1;
    }
    template<typename T>
    string addValues(const T& arg) {
        values = to_string_with_quotes(arg);
        return values;
    }
    template<typename T, typename ... Args>
    string addValues(const T& arg, const Args&... args) {
        values = to_string_with_quotes(arg) + ", " + addValues(args...);
        return values;
    }
    bool AddUser() {
        /*string getMaxIdQuery = "SELECT MAX(id) FROM " + schema + "." + name;
        int qstate = mysql_query(conn, getMaxIdQuery.c_str());
        if (qstate) return false;
        MYSQL_RES* res = mysql_store_result(conn);
        if (!res) return false;
        MYSQL_ROW row = mysql_fetch_row(res);
        int maxId = row ? stoi(row[0]) : 0;*/

        string query = "INSERT INTO " + schema + "." + name + "(" + fields + ") VALUES(" + values + ")";
        int qstate = mysql_query(conn, query.c_str());
        if (qstate) return false;
        return true;
    }

    bool DeleteAll() {
        string query = "DELETE FROM " + schema + "." + name;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) return true;
        return false;
    }
    bool DeleteUser(const string& field, const string& value) {
        string query = "DELETE FROM " + schema + "." + name + " WHERE " + field + " = " + value;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) return true;
        return false;
    }
    bool auto_increment(int value) {
        string query = "ALTER TABLE " + schema + "." + name + " AUTO_INCREMENT = " + to_string(value);
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) return true;
        return false;
        //if (qstate) return "ERROR";
        //return "Auto increment je postavljen na " + to_string(value);
    }

    
    bool updateField(const string& field, const string& condition, const string& value) {
        string query = "UPDATE " + schema + "." + name + " SET " + field + " = '" + value + "' WHERE " + condition;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) return true;
        return false;
    }
    vector<vector<string>> FetchData(const string& fields, const string& condition = "") {
        vector<vector<string>> result;
        string query = "SELECT " + fields + " FROM " + schema + "." + name;
        if (!condition.empty()) query += " WHERE " + condition;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) {
            MYSQL_RES* res = mysql_store_result(conn);
            MYSQL_ROW row;
            while ((row = mysql_fetch_row(res))) {
                vector<string> row_values;
                for (unsigned int i = 0; i < mysql_num_fields(res); i++) {
                    row_values.push_back(row[i]);
                }
                result.push_back(row_values);
            }
            mysql_free_result(res);
        }
        return result;
    }
    vector<User> FetchUsers(const string& fields, const string& condition = "") {
        vector<User> result;
        string query = "SELECT " + fields + " FROM " + schema + "." + name;
        if (!condition.empty()) query += " WHERE " + condition;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) {
            MYSQL_RES* res = mysql_store_result(conn);
            MYSQL_ROW row;
            User data;
            while ((row = mysql_fetch_row(res))) {
                vector<string> row_values;
                data.id = stoi(row[0]);
                data.user.korisnicko_ime = row[1];
                data.user.ime = row[2];
                data.user.prezime = row[3];
                data.user.pol = row[4];
                data.email = row[5];
                data.password = row[6];
                data.user.telefon = row[7];
                data.user.jmbg = row[8];
                string datum = row[9];
                Date date = stringToDate(datum);
                data.user.datum_rodjenja = date;
                data.novac = stod(row[10]);
                data.racun = row[11];
                datum = row[12];
                data.datum_otvaranja_naloga = stringToDatetime(datum);
                data.valuta = row[13];
                data.user.prebivaliste.adresa = row[14];
                data.user.prebivaliste.grad = row[15];
                data.user.prebivaliste.postanski_broj = stoi(row[16]);
                data.user.prebivaliste.drzava = row[17];
                data.user.napomena = row[18];
                data.vrsta_naloga = row[19];
                result.push_back(data);
            }
            mysql_free_result(res);
        }
        return result;
    }
    vector<Transkacije> FetchTranskacije(const string& fields, const string& condition = "") {
        vector<Transkacije> result;
        string query = "SELECT " + fields + " FROM " + schema + "." + name;
        if (!condition.empty()) query += " WHERE " + condition;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) {
            MYSQL_RES* res = mysql_store_result(conn);
            MYSQL_ROW row;
            Transkacije data;
            while ((row = mysql_fetch_row(res))) {
                data.idTranskacije = stoi(row[0]);
                data.idNaloga = stoi(row[1]);
                data.tipTranskacije = row[2];
                data.kolicina = stod(row[3]);
                data.datum = stringToDatetime(row[4]);
                data.deskripcija = row[5];
                data.idPrimalac = stoi(row[6]);
                data.medjustanjeNaloga = stod(row[7]);
                data.medjustanjePrimalaca = stod(row[8]);
                result.push_back(data);
            }
            mysql_free_result(res);
        }
        return result;
    }
    User FetchUser(const string& fields, const string& condition = "") {
        User data;
        string query = "SELECT " + fields + " FROM " + schema + "." + name;
        if (!condition.empty()) query += " WHERE " + condition;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) {
            MYSQL_RES* res = mysql_store_result(conn);
            MYSQL_ROW row;
            while (row = mysql_fetch_row(res)) {
                data.inicijalizuj();
                data.id = stoi(row[0]);
                data.user.korisnicko_ime = row[1];
                data.user.ime = row[2];
                data.user.prezime = row[3];
                data.user.pol = row[4];
                data.email = row[5];
                data.password = row[6];
                data.user.telefon = row[7];
                data.user.jmbg = row[8];
                string datum = row[9];
                data.user.datum_rodjenja = stringToDate(datum);
                data.novac = stod(row[10]);
                data.racun = row[11];
                datum = row[12];
                data.datum_otvaranja_naloga = stringToDatetime(datum);
                data.valuta = row[13];
                data.user.prebivaliste.adresa = row[14];
                data.user.prebivaliste.grad = row[15];
                data.user.prebivaliste.postanski_broj = stoi(row[16]);
                data.user.prebivaliste.drzava = row[17];
                data.user.napomena = row[18];
                data.vrsta_naloga = row[19];
            }
            mysql_free_result(res);
        }
        return data;
    }
    /*template<typename T>
    vector<vector<T>> FetchData(const string& fields, const string& condition = "") {
        vector<vector<T>> result;
        string query = "SELECT " + fields + " FROM " + schema + "." + name;
        if (!condition.empty()) query += " WHERE " + condition;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) {
            MYSQL_RES* res = mysql_store_result(conn);
            MYSQL_ROW row;
            while ((row = mysql_fetch_row(res))) {
                vector<T> row_values;
                for (unsigned int i = 0; i < mysql_num_fields(res); i++) {
                    row_values.push_back(from_string<T>(row[i]));
                }
                result.push_back(row_values);
            }
            mysql_free_result(res);
        }
        return result;
    }*/
    /*template<typename T>
    vector<T> FetchData(const string& fields, const string& condition = "") {
        vector<T> result;
        string query = "SELECT " + fields + " FROM " + schema + "." + name;
        if (!condition.empty()) query += " WHERE " + condition;
        int qstate = mysql_query(conn, query.c_str());
        if (!qstate) {
            MYSQL_RES* res = mysql_store_result(conn);
            result = ConvertRowsToStructs<T>(res);
            mysql_free_result(res);
        }
        return result;
    }*/


};
static Database nalozi("localhost", "root", "B0z@123.", "users", "nalozi");
static Database pozadine("localhost", "root", "B0z@123.", "users", "pozadine");
static Database transakcije("localhost", "root", "B0z@123.", "users", "transakcije");