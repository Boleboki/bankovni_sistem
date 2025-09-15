#pragma once
#include <iostream>
#include <string>
#include <regex>
#include <map>
#include <vector>
#include <vcclr.h>
#include "Funkcije - Varijable.h"
#include "Konverzije.h"

using namespace std;
class Validator
{
public:
	static bool min_max_length(const string& polje, const int& min = 0, const int& max = 100) {
		return polje.size() >= min && polje.size() <= max;
	}
	static bool min_length(const string& polje, const int& min = 0) {
		return polje.size() >= min;
	}
	static bool max_length(const string& polje, const int& max = 100) {
		return polje.size() <= max;
	}
	static bool has_space(const string& polje) {
		regex whitespace("\\s");
		return regex_search(polje, whitespace);
	}
	static bool has_number(const string& polje) {
		regex digit("[0-9]");
		return regex_search(polje, digit);
		
	}
	static bool has_special_char(const string& polje) {
		regex special("[\\[@#\\$%\\^&\\+=\\.,/'\\[\\]\\{\\}\\-~!;:><\\?/\\|\\]`\\*\\(\\)_]");
		return regex_search(polje, special);
	}
	static bool is_int(const string& polje) {
		regex number("^[0-9]+$");
		return regex_search(polje, number);
	}
	static bool is_decimal(const string& polje) {
		regex decimal("^[0-9]+\.[0-9]+$");
		return regex_search(polje, decimal);
		/*bool hasDecimalPoint = false;
		bool hasDigits = false;

		for (const char& c : polje) {
			if (!isdigit(c)) {
				if (c == '.' && !hasDecimalPoint && hasDigits) {
					hasDecimalPoint = true;
				}
				else {
					return false;
				}
			}
			else {
				hasDigits = true;
			}
		}

		if (hasDigits) {
			if (hasDecimalPoint && polje.back() == '.') {
				return false;
			}
			return true;
		}

		return false;*/
	}
	static bool is_number(const string& polje) {
		regex number("^(?:(?=[0-9]+\\.[0-9]+$)|(?=[0-9]+$))");
		return regex_search(polje, number);
		/*bool hasDecimalPoint = false;
		bool hasDigits = false;
		for (const char& c : polje) {
			if (!isdigit(c)) {
				if (c == '.' && !hasDecimalPoint && hasDigits) {
					hasDecimalPoint = true;
				}
				else {
					return false;
				}
			}
			else {
				hasDigits = true;
			}
		}
		if (hasDigits) {
			if (hasDecimalPoint && polje.back() == '.') {
				return false;
			}
			return true;
		}

		return false;*/
	}
	static bool is_letter_only(const string& polje) {
		regex regex("^[a-zA-Z]+$");
		return regex_search(polje, regex);
	}
	static bool first_capital_letter(const string& polje) {
		regex regex("^([A-Z])([a-z]+)$");
		return regex_search(polje, regex);
	}
	static bool required(const string& polje) {
		return polje.size() != 0 && polje.find_first_not_of(" ") != string::npos;
	}
	static bool is_email(const string& polje) {
		regex email_regex("^([a-z0-9.]+)@([a-z0-9.]+)\\.([a-z]{2,})$");
		if (!regex_match(polje, email_regex)) return false;
		return true;
	}
	static bool is_password(const string& polje) {
		regex pattern("(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[@#$%^&+=])(?=\\S+$).{8,}");
		if (regex_match(polje, pattern))return true;
		return false;
	}
	class Login
	{
		public:
			Login(map<pair<string, string>, map<string, string>> m) {
				validate(m);
			};
			Login(vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> m) {
				validateLabels(m);
			};
			void emptyFields() {
				for (auto el : errorsLabels) el.first->Text = L"";
			}
			void putErrorsInFields() {
				for (auto el : errorsLabels)
					for (auto el1 : el.second)el.first->Text += toField(el1) + System::Environment::NewLine;
			}
			map<string, vector<string>> validatonErrors() {
				return errors;
			}
			bool validationPassed() {
				return errors.size() == 0 && errorsLabels.size() == 0;
			}
		private:
			vector<pair<gcroot<System::Windows::Forms::Label^>, vector<string>>> getValidationErrorsLabels() {
				return errorsLabels;
			}
			void validate(map<pair<string, string>, map<string, string>> m) {
				for (auto& field : m) {
					string fieldValue = field.first.second;
					string fieldName = field.first.first;
					map<string, string> fieldProperties = field.second;
					if (fieldProperties["required"] == "true") {
						if (!Validator::required(fieldValue)) {
							errors[fieldName].push_back("Polje ne sme biti prazno");
						}
					}
					if (fieldValue != "") {
						if (fieldProperties["email"] == "true") {
							if (!Validator::is_email(fieldValue)) {
								errors[fieldName].push_back("Neispravna email adresa");
							}
						}
						if (fieldProperties["password"] == "true") {
							if (password_tester(fieldValue).size() != 0) {
								for (auto& el : password_tester(fieldValue))errors[fieldName].push_back(el);
							}
						}
						regex whitespace("\\s");
						if (fieldProperties["space"] == "false") {
							if (regex_search(fieldValue, whitespace)) {
								errors[fieldName].push_back("Polje ne sme sadrzati razmak");
							}
						}
						if (fieldProperties["int"] == "true")
							if (!Validator::is_int(fieldValue)) {
								errors[fieldName].push_back("Polje mora biti broj");
							}
						if (fieldProperties["decimal"] == "true")
							if (!Validator::is_decimal(fieldValue)) {
								errors[fieldName].push_back("Polje mora biti decimalan broj");
							}
						if (fieldProperties["number"] == "true")
							if (!Validator::is_number(fieldValue)) {
								errors[fieldName].push_back("Polje mora biti broj");
							}
						if (fieldProperties["number"] == "false")
							if (Validator::is_number(fieldValue)) {
								errors[fieldName].push_back("Polje ne sme biti broj");
							}
						if (fieldProperties.count("regex") > 0) {
							regex regex(fieldProperties["regex"]);
							if (!regex_search(fieldValue, regex))errors[fieldName].push_back("Neispravan format");
						}
						if (fieldProperties["minlength"] != "" && !Validator::min_length(fieldValue, stoi(fieldProperties["minlength"]))) {
							string error = "Polje mora da ima minimalno " + fieldProperties["minlength"] + " karaktera";
							errors[fieldName].push_back(error);
						}
						if (fieldProperties["maxlength"] != "" && !Validator::max_length(fieldValue, stoi(fieldProperties["maxlength"]))) {
							string error = "Polje mora da ima maksimalno " + fieldProperties["maxlength"] + " karaktera";
							errors[fieldName].push_back(error);
						}
					}

				}
			}
			void validateLabels(vector<pair<pair<gcroot<System::Windows::Forms::Label^>, string>, map<string, string>>> m) {
				for (auto& field : m) {
					string fieldValue = field.first.second;
					auto fieldName = field.first.first;
					map<string, string> fieldProperties = field.second;
					vector<string>errs;
					if (fieldProperties["required"] == "true") {
						if (!Validator::required(fieldValue)) {
							errs.push_back("Polje ne sme biti prazno");
						}
					}
					if (fieldValue != "") {
						if (fieldProperties["email"] == "true") {
							if (!Validator::is_email(fieldValue)) {
								errs.push_back("Neispravna email adresa");
							}
						}
						if (fieldProperties["password"] == "true") {
							if (password_tester(fieldValue).size() != 0) {
								for (auto& el : password_tester(fieldValue))errs.push_back(el);
							}
						}
						if (fieldProperties["space"] == "false") {
							if (Validator::has_space(fieldValue)) {
								errs.push_back("Polje ne sme sadrzati razmak");
							}
						}
						if (fieldProperties["int"] == "true")
							if (!Validator::is_int(fieldValue)) {
								errs.push_back("Polje mora biti broj");
							}
						if (fieldProperties["decimal"] == "true")
							if (!Validator::is_decimal(fieldValue)) {
								errs.push_back("Polje mora biti decimalan broj");
							}
						if (fieldProperties["number"] == "true")
							if (!Validator::is_number(fieldValue)) {
								errs.push_back("Polje mora biti broj");
							}
						if (fieldProperties["number"] == "false")
							if (Validator::has_number(fieldValue)) {
								errs.push_back("Polje ne sme imati broj");
							}
						if (fieldProperties["special"] == "false")
							if (Validator::has_special_char(fieldValue)) {
								errs.push_back("Polje ne sme imati specijalni karakter");
							}
						if (fieldProperties.count("matching") > 0) {
							if (fieldValue != fieldProperties["matching"])
								errs.push_back("Polja se ne poklapaju");
						}
						if (fieldProperties.count("not-matching") > 0) {
							if (fieldValue == fieldProperties["not-matching"])
								errs.push_back("Polja ne smeju biti ista");
						}
						if (fieldProperties.count("regex") > 0) {
							regex regex(fieldProperties["regex"]);
							if (!regex_search(fieldValue, regex))errs.push_back("Neispravan format");
						}
						if (fieldProperties["minlength"] != "" && !Validator::min_length(fieldValue, stoi(fieldProperties["minlength"]))) {
							string error = "Polje mora da ima minimalno " + fieldProperties["minlength"] + " karaktera";
							errs.push_back(error);
						}
						if (fieldProperties["maxlength"] != "" && !Validator::max_length(fieldValue, stoi(fieldProperties["maxlength"]))) {
							string error = "Polje mora da ima maksimalno " + fieldProperties["maxlength"] + " karaktera";
							errs.push_back(error);
						}
					}
					if(errs.size() != 0)errorsLabels.push_back(make_pair(fieldName, errs));

				}
			}
			map<string, vector<string>>errors;
			vector<pair<gcroot<System::Windows::Forms::Label^>, vector<string>>>errorsLabels;
			vector<string> password_tester(const string& password) {
				vector<string> error_list;
				regex lower("[a-z]");
				regex upper("[A-Z]");
				regex digit("[0-9]");
				regex special("[@#$%^&+=]");
				regex whitespace("\\s");
				regex length(".{8,}");

				if (!regex_search(password, lower)) {
					error_list.push_back("Lozinka mora sadrzati bar jedno malo slovo.");
				}

				if (!regex_search(password, upper)) {
					error_list.push_back("Lozinka mora sadrzati bar jedno veliko slovo.");
				}

				if (!regex_search(password, digit)) {
					error_list.push_back("Lozinka mora sadržati bar jednu cifru.");
				}

				if (!regex_search(password, special)) {
					error_list.push_back("Lozinka mora sadrzati bar jedan specijalni karakter (@#$%^&+=)");
				}

				if (regex_search(password, whitespace)) {
					error_list.push_back("Lozinka ne sme sadrzati razmake.");
				}

				return error_list;
			}



	};
};