#pragma once
#include <string>
#include <random>
#include <fstream>
#include <sstream>
#include <regex>
#include <iomanip>
#include "bazapodataka.h"
#include <map>
using namespace std;
/*
-----------------------------------------------------------------
|	---------------------------------------------------------	|
|   |   -------------------------------------------------   |   |
|   |   |                                				|	|   |
|	|   |					VARIJABLE   				|	|	|
|	|   |												|	|   |
|	|   -------------------------------------------------   |	|
|	---------------------------------------------------------	|
-----------------------------------------------------------------
*/
static map<pair<string, string>, double> kursnaLista = {
		{make_pair("EUR", "RSD"), 117.2803},
		{make_pair("USD", "RSD"), 108.3821},
		{make_pair("AUD", "RSD"), 72.0705},
		{make_pair("CAD", "RSD"), 80.3015},
		{make_pair("CNY", "RSD"), 15.4334},
		{make_pair("CZK", "RSD"), 4.9323},
		{make_pair("DKK", "RSD"), 15.7425},
		{make_pair("HUF", "RSD"), 31.2140},
		{make_pair("INR", "RSD"), 1.3089},
		{make_pair("JPY", "RSD"), 78.6588},
		{make_pair("KWD", "RSD"), 352.9350},
		{make_pair("NOK", "RSD"), 9.9631},
		{make_pair("RUB", "RSD"), 1.3565},
		{make_pair("SEK", "RSD"), 10.3101},
		{make_pair("CHF", "RSD"), 120.6836},
		{make_pair("AED", "RSD"), 29.5178},
		{make_pair("MKD", "RSD"), 1.8947},
		{make_pair("GBP", "RSD"), 134.9911},
		{make_pair("BYN", "RSD"), 42.8484},
		{make_pair("RON", "RSD"), 23.5144},
		{make_pair("TRY", "RSD"), 5.4688},
		{make_pair("BGN", "RSD"), 59.9645},
		{make_pair("BAM", "RSD"), 59.9645},
		{make_pair("PLN", "RSD"), 25.8156},
		{make_pair("ATS", "RSD"), 8.5231},
		{make_pair("BEF", "RSD"), 290.7303},
		{make_pair("FIM", "RSD"), 19.7251},
		{make_pair("FRF", "RSD"), 17.8793},
		{make_pair("DEM", "RSD"), 59.9645},
		{make_pair("GRD", "RSD"), 34.4183},
		{make_pair("IEP", "RSD"), 148.9153},
		{make_pair("ITL", "RSD"), 6.0570},
		{make_pair("LUF", "RSD"), 290.7303},
		{make_pair("PTE", "RSD"), 58.4992},
		{make_pair("ESP", "RSD"), 70.4869},
		{make_pair("RSD", "RSD"), 1},
};
static vector<string> valute = { "EUR","USD","RSD","AUD","CAD","CNY","CZK","DKK","HUF","INR","JPY","KWD","NOK","RUB","SEK","CHF",
		"AED","MKD","GBP","BYN","RON","TRY","BGN","BAM","PLN","ATS","BEF","FIM","FRF","DEM","GRD","IEP","ITL","LUF","PTE","ESP",
};
static User user;
static vector<Transkacije> sve_transakcije;
static vector<User> data = nalozi.FetchUsers("*");
static bool pozadina_otvorena = false;
/*
-----------------------------------------------------------------
|	---------------------------------------------------------	|
|   |   -------------------------------------------------   |   |
|   |   |                                				|	|   |
|	|   |					FUNKCIJE   					|	|	|
|	|   |												|	|   |
|	|   -------------------------------------------------   |	|
|	---------------------------------------------------------	|
-----------------------------------------------------------------
*/

/*
-----------------------------------------------------------------
|																|
|                          STRINGOVI   					        |
|                                     						    |
-----------------------------------------------------------------
*/
class StringTools
{
public:
	static string trim(const string& s) {
		regex pattern(R"(^\s+|\s+$)");
		return regex_replace(s, pattern, "");
	}
	static string capitalize(const string& s) {
		regex pattern("^[a-z]");
		smatch match;
		string result = s;
		if (regex_search(s, match, pattern))
			result[match.position()] = toupper(result[match.position()]);
		return result;
	}
	static string upper(const string& s) {
		regex pattern("[a-z]");
		smatch match;
		string result = s;
		while (regex_search(s, match, pattern))
			result[match.position()] = toupper(result[match.position()]);
		return result;
	}
	static string lower(const string& s) {
		/*regex pattern("[A-Z]");
		smatch match;
		string result = s;
		while (regex_search(s, match, pattern))
			result[match.position()] = tolower(result[match.position()]);
		return result;*/
		string result = s;
		int i;
		for (i = 0; i < s.size(); i++)
			result[i] = (result[i] >= 'A' && result[i] <= 'Z') ? result[i] + 32 : result[i];
		return result;
	}
	static string swapcase(const string& s) {
		/*regex pattern1("[A-Z]");
		regex pattern2("[a-z]");
		smatch match1;
		smatch match2;
		string result = s;

		while (regex_search(result, match1, pattern1)) {
			result[match1.position()] = tolower(result[match1.position()]);
			result = match1.suffix().str();
		}

		while (regex_search(result, match2, pattern2)) {
			result[match2.position()] = toupper(result[match2.position()]);
			result = match2.suffix().str();
		}

		return result;*/
		string result = s;

		for (char& c : result) {
			if (islower(c))c = toupper(c);
			else if (isupper(c))c = tolower(c);
			
		}
		return result;
	}
	static int count(const string& s, const string& value) {
		int br = 0;
		int pos = 0;

		while ((pos = s.find(value, pos)) != string::npos) {
			br++;
			pos += value.length();
		}

		return br;
	}
	static int count(const string& s, const string& value, int start_pos, int end_pos) {
		int br = 0;
		int pos = start_pos;

		while (pos < end_pos && (pos = s.find(value, pos)) != string::npos) {
			br++;
			pos += value.length();
		}

		return br;
	}

	static vector<string> split(const string& str, const string& delimiter = " ") {
		vector<string> v;
		int pos = 0, found;
		while ((found = str.find(delimiter, pos)) != string::npos) {
			if (found != pos) v.push_back(str.substr(pos, found - pos));
			pos = found + delimiter.size();
		}
		if (pos < str.length()) {
			v.push_back(str.substr(pos));
		}
		return v;
	}
	static vector<string> split(const string& str, char delimiter = ' ') {
		vector<string> v;
		int pos = 0, found;
		while ((found = str.find(delimiter, pos)) != string::npos) {
			if (found != pos) v.push_back(str.substr(pos, found - pos));
			pos = found + 1;
		}
		if (pos < str.length()) {
			v.push_back(str.substr(pos));
		}
		return v;
	}
};


inline string zaokruziBrojString(double broj, int n = 2) {
	stringstream stream;
	stream << fixed << setprecision(n) << broj;
	return stream.str();
}
inline double zaokruziBroj(double broj, int n = 2) {
	stringstream stream;
	stream << fixed << setprecision(n) << broj;
	double zaokruzen_broj;
	stream >> zaokruzen_broj;
	return zaokruzen_broj;
}
//inline double zaokruziBroj(double broj, double n = 2.0) {
//	stringstream stream;
//	stream << fixed << setprecision(n) << broj;
//	double zaokruzen_broj;
//	stream >> zaokruzen_broj;
//	return zaokruzen_broj;
//}
inline string format_novac(double broj, int n = 2) {
	string rez = zaokruziBrojString(broj, n);
	int dec = rez.find('.');
	if (dec != string::npos) rez[dec] = ',';

	int pocetak = rez.length() - 6;
	while (pocetak > 0) {
		rez.insert(pocetak, ".");
		pocetak -= 3;
	}
	return rez;
}
inline double parse_novac(const string& novac) {
	stringstream ss(novac);
	regex regex(R"(([0-9]{1,3}(?:\.[0-9]{3})*),([0-9]{2}))");
	smatch match;

	if (regex_match(novac, match, regex)) {
		string cijeliDio = match.str(1);
		string decimalniDio = match.str(2);

		string broj = cijeliDio + "." + decimalniDio;
		return stod(broj);
	}

	return 0.0;
}
inline string format_novac(int broj) {
	string rez = to_string(broj);
	int pocetak = rez.length() - 3;
	while (pocetak > 0) {
		rez.insert(pocetak, ".");
		pocetak -= 3;
	}
	return rez;
}
inline string racun_format() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distrib1(100, 999);
	uniform_int_distribution<> distrib2(1000000000, 9999999999);
	uniform_int_distribution<> distrib3(10, 99);

	string rez = to_string(distrib1(gen)) + "-" +
		to_string(distrib2(gen)) + "-" +
		to_string(distrib3(gen));
	return rez;
}
inline string generatePassword(int length) {
	string password;
	srand(time(0));

	const string mala_slova = "abcdefghijklmnopqrstuvwxyz";
	const string velika_slova = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const string brojevi = "1234567890";
	const string specijalni_karakteri = "!@#$%^&*()_+-=[]{}|;:,.<>?";

	for (int i = 0; i < length; i++)
	{
		int randomIndex = rand() % 4;

		switch (randomIndex)
		{
		case 0:
			password += mala_slova[rand() % mala_slova.length()];
			break;
		case 1:
			password += velika_slova[rand() % velika_slova.length()];
			break;
		case 2:
			password += brojevi[rand() % brojevi.length()];
			break;
		case 3:
			password += specijalni_karakteri[rand() % specijalni_karakteri.length()];
			break;
		}
	}

	return password;
}
inline bool karakterPostoji(char* str, char c)
{
	for (int i = 0; str[i] != '\0'; i++) if (str[i] == c) return true;
	return false;
}
inline vector<string> split(const string& str, const string& delimiter = " ") {
	vector<string> v;
	int pos = 0, found;
	while ((found = str.find(delimiter, pos)) != string::npos) {
		if (found != pos) v.push_back(str.substr(pos, found - pos));
		pos = found + delimiter.size();
	}
	if (pos < str.length()) {
		v.push_back(str.substr(pos));
	}
	return v;
}
inline vector<char*> split(char* str, char* del = " ") {
	char* ptr;
	vector<char*>v;
	ptr = strtok(str, del);
	while (ptr != NULL)
	{
		v.push_back(ptr);
		ptr = strtok(NULL, del);
	}
	return v;
}
template <typename strukt>
inline int brojUdatoteci(char* imedatoteke, strukt& a) {
	fstream dat;
	dat.open(imedatoteke);
	int count = 0;
	while (dat.read(a, sizeof(strukt)))
		count++;
	dat.close();
	return count;
}
inline int rdn(int d, int m, int y) {
	if (m < 3)
		y--, m += 12;
	return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
}
inline int datum(int d, int m, int y) {
	time_t now = time(0);
	tm* ltm = localtime(&now);
	return rdn(d, m, y) - rdn(ltm->tm_mday, 1 + ltm->tm_mon, 1900 + ltm->tm_year);
}
template<typename T>
inline void brisanjeVektora(vector<T>& vec) {
	vec.clear();
}
inline void brisanjeDatoteke(char* datoteka) {
	fstream dat;
	dat.open(datoteka, ios::out);
	dat.close();
}
template<typename T>
inline bool unetUvektor(vector<T> v, fstream& dat, char* poruka) {
	T konf;
	if ((v.size() == 0 || brojacUnetih != 0) || (v.size() != 0 && brojacUnetih != 0)) {
		v.clear();
		if (dat.peek() != EOF) {
			while (dat.read((char*)&konf, sizeof(T))) v.push_back(konf);
			dat.close();
			return true;
		}
		else if (poruka != "") {
			MessageBox::Show(gcnew String(poruka), "Greska", MessageBoxButtons::OK, MessageBoxIcon::Error);
			dat.close();
			return false;
		}
	}
	dat.close();
	return true;
}
template <typename T, typename Compare>
inline int binarnaPretraga(const T& vec, typename T::value_type value, Compare cmp) {
	int i, j;
	int levi = 0;
	int desni = vec.size() - 1;
	while (levi <= desni) {
		int srednji = (levi + desni) / 2;
		if (cmp(vec[srednji], value) == 0) {
			return srednji;
		}
		else if (cmp(vec[srednji], value) < 0) {
			levi = srednji + 1;
		}
		else {
			desni = srednji - 1;
		}
	}
	return -1;
}
inline string account_username(const string& ime, const string& prezime, const string& jmbg) {
	return ime + "_" + prezime + "_" + jmbg[5] + jmbg[6];
}

/*
-----------------------------------------------------------------
|																|
|                          FUNKCIJE   					        |
|                                     						    |
-----------------------------------------------------------------
*/

inline Date stringToDate(const string& datum) {
	istringstream iss(datum);
	int dan, mesec, godina;
	char separator;
	iss >> dan >> separator >> mesec >> separator >> godina;
	return { dan, mesec, godina };
}
inline Date stringToDate(const string& str, const string& format) {
	tm time = {};
	istringstream ss(str);
	ss >> get_time(&time, format.c_str());

	Date result;
	result.dan = time.tm_mday;
	result.mesec = time.tm_mon + 1;
	result.godina = time.tm_year + 1900;

	return result;
}
inline Time stringToTime(const string& str) {
	istringstream iss(str);
	int sat, minut, sekunda;
	char separator;
	iss >> sat >> separator >> minut >> separator >> sekunda;
	return { sat, minut, sekunda };
}
inline Time stringToTime(const string& vreme, const string& format) {
	tm time = {};
	istringstream ss(vreme);
	ss >> get_time(&time, format.c_str());

	Time result;
	result.sat = time.tm_hour;
	result.minut = time.tm_min;
	result.sekunda = time.tm_sec;

	return result;
}
inline Datetime stringToDatetime(const string& str) {
	istringstream iss(str);
	int dan, mesec, godina, sat, minut, sekunda;
	char separator;
	iss >> dan >> separator >> mesec >> separator >> godina >> sat >> separator >> minut >> separator >> sekunda;
	Datetime datetime;
	datetime.date.dan = dan;
	datetime.date.mesec = mesec;
	datetime.date.godina = godina;
	datetime.time.sat = sat;
	datetime.time.minut = minut;
	datetime.time.sekunda = sekunda;
	return datetime;
}
inline Datetime stringToDatetime(const string& datum, const string& format) {
	tm time = {};
	istringstream ss(datum);
	ss >> get_time(&time, format.c_str());

	Datetime result;
	result.date.dan = time.tm_mday;
	result.date.mesec = time.tm_mon + 1;
	result.date.godina = time.tm_year + 1900; 

	result.time.sat = time.tm_hour;
	result.time.minut = time.tm_min;
	result.time.sekunda = time.tm_sec;

	return result;
}

inline string dateToString(const Datetime& datetime) {
	stringstream ss;
	ss << datetime.date.dan << "/" 
	   << datetime.date.mesec << "/" 
	   << datetime.date.godina << " " 
	   << datetime.time.sat << ":" 
	   << datetime.time.minut << ":" 
	   << datetime.time.sekunda;
	return ss.str();
}
inline string dateToString(const Datetime& datetime, const string& format) {
	tm timeinfo = {};
	timeinfo.tm_year = datetime.date.godina - 1900;
	timeinfo.tm_mon = datetime.date.mesec - 1;
	timeinfo.tm_mday = datetime.date.dan;
	timeinfo.tm_hour = datetime.time.sat;
	timeinfo.tm_min = datetime.time.minut;
	timeinfo.tm_sec = datetime.time.sekunda;
	stringstream ss;
	ss << put_time(&timeinfo, format.c_str());
	return ss.str();
}
inline string dateToString(const Time& time) {
	stringstream ss;
	ss << time.sat << ":" << time.minut << ":" << time.sekunda;
	return ss.str();
}
inline string dateToString(const Time& time, const string& format) {
	tm timeinfo = {};
	timeinfo.tm_hour = time.sat;
	timeinfo.tm_min = time.minut;
	timeinfo.tm_sec = time.sekunda;
	stringstream ss;
	ss << put_time(&timeinfo, format.c_str());
	return ss.str();
}
inline string dateToString(const Date& date) {
	stringstream ss;
	ss << date.dan << "/" << date.mesec << "/" << date.godina;
	return ss.str();
}
inline string dateToString(const Date& date, const string& format) {
	tm timeinfo = {};
	timeinfo.tm_year = date.godina - 1900;
	timeinfo.tm_mon = date.mesec - 1;
	timeinfo.tm_mday = date.dan;
	stringstream ss;
	ss << put_time(&timeinfo, format.c_str());
	return ss.str();
	
}

inline int monthToInt(const string& mesec) {
	string lowercaseMesec;
	for (char c : mesec) {
		lowercaseMesec += tolower(c);
	}

	if (lowercaseMesec == "januar") {
		return 1;
	}
	else if (lowercaseMesec == "februar") {
		return 2;
	}
	else if (lowercaseMesec == "mart") {
		return 3;
	}
	else if (lowercaseMesec == "april") {
		return 4;
	}
	else if (lowercaseMesec == "maj") {
		return 5;
	}
	else if (lowercaseMesec == "jun") {
		return 6;
	}
	else if (lowercaseMesec == "jul") {
		return 7;
	}
	else if (lowercaseMesec == "avgust") {
		return 8;
	}
	else if (lowercaseMesec == "septembar") {
		return 9;
	}
	else if (lowercaseMesec == "oktobar") {
		return 10;
	}
	else if (lowercaseMesec == "novembar") {
		return 11;
	}
	else if (lowercaseMesec == "decembar") {
		return 12;
	}
	else {
		return -1;
	}
}
inline string kosaCrta(const string& input) {
	regex regex(R"(\\)");
	string result = regex_replace(input, regex, "\\\\");
	return result;
}
inline string currentDateTimeToString() {
	System::DateTime date = System::DateTime::Now;
	// 22:15:02
	// 22:15:02
	ostringstream oss;
	oss << setfill('0') << setw(2) << date.Day << "/"
		<< setw(2) << date.Month << "/"
		<< setw(4) << date.Year << " "
		<< setw(2) << date.Hour << ":"
		<< setw(2) << date.Minute << ":"
		<< setw(2) << date.Second;

	return oss.str();
}
inline string currentDateTimeToString(const string& format) {
	System::DateTime date = System::DateTime::Now;
	wstring formatW(format.begin(), format.end());
	return msclr::interop::marshal_as<string>(date.ToString(gcnew System::String(formatW.c_str())));
}

/*
-----------------------------------------------------------------
|																|
|                        Izracunavanja   					    |
|                                     						    |
-----------------------------------------------------------------
*/

inline double konverterValuta(double kolicina, const string& izValute, const string& uValutu)
{
	pair<string, string> uDinarimaIZ = make_pair(izValute, "RSD");
	pair<string, string> uDinarimaU = make_pair(uValutu, "RSD");
	if (kursnaLista.find(uDinarimaIZ) != kursnaLista.end() && kursnaLista.find(uDinarimaU) != kursnaLista.end())
		return kolicina * kursnaLista[uDinarimaIZ] / kursnaLista[uDinarimaU];
	if (izValute == uValutu) return kolicina;
	return -1;
}
inline double rata(double trazeni_iznos, double broj_meseci, double kamatna_stopa) {
	return trazeni_iznos * kamatna_stopa / (1200 * (1 - pow((1 + kamatna_stopa / 1200), -broj_meseci)));
}
inline double kamataZaMesec(double preostali_dug, double kamatna_stopa) {
	return preostali_dug * kamatna_stopa / 1200;
}
inline double ukupnaKamata(double iznosKredita, double godisnjaKamatnaStopa, int brojMeseci) {
	double ukupnaKamata = 0;
	double preostaliDug = iznosKredita;
	for (int mesec = 0; mesec < brojMeseci; mesec++) {
		double kamata = kamataZaMesec(preostaliDug, godisnjaKamatnaStopa);
		ukupnaKamata += kamata;
		preostaliDug -= rata(iznosKredita, brojMeseci, godisnjaKamatnaStopa) - kamata;
	}
	return ukupnaKamata;
}
inline vector<double> kamataZaSvakiMesec(double iznosKredita, double godisnjaKamatnaStopa, int brojMeseci) {
	double ukupnaKamata = 0;
	double preostaliDug = iznosKredita;
	vector<double> kamate;
	for (int mesec = 0; mesec < brojMeseci; mesec++) {
		double kamata = kamataZaMesec(preostaliDug, godisnjaKamatnaStopa);
		kamate.push_back(kamata);
		preostaliDug -= rata(iznosKredita, brojMeseci, godisnjaKamatnaStopa) - kamata;
	}
	return kamate;
}
inline vector<double> glavnicaZaSvakiMesec(double iznosKredita, double godisnjaKamatnaStopa, int brojMeseci) {
	double preostaliDug = iznosKredita;
	vector<double>glavnice;
	for (int mesec = 0; mesec < brojMeseci; mesec++) {
		double glavnicaZaMesec = rata(iznosKredita, brojMeseci, godisnjaKamatnaStopa) - kamataZaMesec(preostaliDug, godisnjaKamatnaStopa);
		preostaliDug -= glavnicaZaMesec;
		glavnice.push_back(glavnicaZaMesec);
	}
	return glavnice;
}
inline double maksimalanIznosKredita(int loanTerm, double monthlyPayment, double annualInterestRate) {
	double monthlyInterestRate = annualInterestRate / 12.0 / 100.0;
	double loanAmount = (monthlyPayment / monthlyInterestRate) * (1 - pow(1 + monthlyInterestRate, -loanTerm));

	return loanAmount;
}
inline double calculateInterest(double savingsAmount, int depositTerm, double annualInterestRate) {
	double monthlyInterestRate = annualInterestRate / 12.0 / 100.0;
	double interest = savingsAmount * pow(1 + monthlyInterestRate, depositTerm) - savingsAmount;

	return interest;
}
