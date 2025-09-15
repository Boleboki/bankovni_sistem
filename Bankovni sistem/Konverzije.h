#pragma once
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <ctime>
#include <sstream>
#include <iomanip>
using namespace std;
inline string charToString(char* a) {
	return string(a);
}
inline string fieldToString(System::String^ text) {
	return msclr::interop::marshal_as<string>(text->ToString());
}
inline void fieldToChar(System::String^ text, char* var) {
	sprintf(var, "%s", text);
}
inline double fieldToDouble(System::String^ text) {
	return stod(fieldToString(text));
}
inline int charToInt(char* var) {
	int number;
	sscanf(var, "%d", &number);
	return number;
}
inline int charToInt(const char* var) {
	return atoi(var);
}
inline const char* stringToChar(const string& text) {
	return text.c_str();
}
inline string charToString(const char* cstrValue) {
	return string(cstrValue);
}
inline int charToInt(char charValue) {
	return int(charValue);
}
inline char intToChar(int intValue) {
	return char(intValue);
}
template<typename T>
T from_string(const string& s) {
	T value;
	stringstream ss(s);
	ss >> value;
	return value;
}
inline int stringToInt(const string& text) {
	return stoi(text);
}
inline int doubleToInt(double value) {
	return (int)value;
}
inline double intToDouble(int value) {
	return (double)value;
}
inline double stringToDouble(const string& text) {
	return stod(text);
}
template<typename T>
inline string toString(T text) {
	return to_string(text);
}
inline int fieldToNumber(System::String^ text) {
	return System::Convert::ToInt32(text);
}
inline System::String^ toField(int num) {
	System::String^ field = System::Convert::ToString(num);
	return field;
}
inline System::String^ toField(size_t num) {
	System::String^ field = System::Convert::ToString(num);
	return field;
}
inline System::String^ toField(double num) {
	System::String^ field = System::Convert::ToString(num);
	return field;
}
inline System::String^ toField(string text) {
	System::String^ field = gcnew System::String(text.c_str());
	return field;
}
inline System::String^ toField(char* text) {
	System::String^ field = gcnew System::String(text);
	return field;
}
inline string ColorToString(System::Drawing::Color color) {
	stringstream ss;
	ss << "#";
	ss << uppercase << hex << setw(2) << setfill('0') << (int)color.R;
	ss << uppercase << hex << setw(2) << setfill('0') << (int)color.G;
	ss << uppercase << hex << setw(2) << setfill('0') << (int)color.B;
	return ss.str();
}
inline System::Drawing::Color StringToColor(const string& colorString) {
	if (colorString.size() != 7 || colorString[0] != '#')
		return System::Drawing::Color::White;

	istringstream iss(colorString.substr(1));
	unsigned int colorValue;
	if (!(iss >> hex >> colorValue))
		return System::Drawing::Color::White;

	int r = (colorValue >> 16) & 0xFF;
	int g = (colorValue >> 8) & 0xFF;
	int b = colorValue & 0xFF;

	return System::Drawing::Color::FromArgb(r, g, b);
}
inline System::Drawing::Color svetlijaBoja(System::Drawing::Color color) {
	int red = color.R;
	int green = color.G;
	int blue = color.B;

	if (red <= 235 && green <= 235 && blue <= 235) {
		red += 20;
		green += 20;
		blue += 20;
	}
	else {
		red = (red >= 20) ? red - 20 : 0;
		green = (green >= 20) ? green - 20 : 0;
		blue = (blue >= 20) ? blue - 20 : 0;
	}
	return System::Drawing::Color::FromArgb(red, green, blue);
}
inline System::Drawing::Color tamnijaBoja(System::Drawing::Color color) {
	int red = color.R;
	int green = color.G;
	int blue = color.B;

	if (red >= 20 && green >= 20 && blue >= 20) {
		red -= 20;
		green -= 20;
		blue -= 20;
	}
	else {
		red = (red <= 235) ? red + 20 : 255;
		green = (green <= 235) ? green + 20 : 255;
		blue = (blue <= 235) ? blue + 20 : 255;
	}
	return System::Drawing::Color::FromArgb(red, green, blue);
}

