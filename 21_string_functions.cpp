#include <iostream>
#include <string>
using namespace std;

int main(){
	string text = "suggestion for me and you";
//	cout << "Returns an indexed character from a string: " << text.at(4) << endl;
	cout << "Returns the length of a string: " << text.length() << endl;
//	cout << "Alias of length(). Returns the length of a string: " << text.size() << endl;
//	cout << "Returns the maximum length of a string: " << text.max_size() << endl;
//	
//	cout << "Checks wheter a string is empty or not: " << text.empty() << endl; // 0 - if the string is not empty ; 1 - if the string is empty
//	
//	
//	cout << "Appends a string (or a part of a string) to another string: " << text.append(".") << endl;
//	cout << "Returs a part of a string from a start index(position) and length: " << text.substr(11,4) << endl;
	
	cout << "Returns the index (position) of the first occurrence of a string or character: " << text.find("for") << endl;
//	cout << "Returns the index (position) of the first occurrence of a string or character: " << text.find("f") << endl;

	cout << "Returns the index (position) of the last occurrence of a string or character: " << text.rfind("e") << endl;
	
	cout << "Replaces a part of a string with another string" << text.replace("") << endl;
	
	cout << "Inserts a string at a specified index (position)" << text.insert() << endl;
	cout << "Removes characters from a string: " << text.erase() << endl;
	cout << "Compares two strings: " << text.compare() << endl;
	

	
	
	
	
	return 0;
}