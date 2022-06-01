#include <iostream>
#include <string>
using  namespace std;

void Encode();
void Decode();

int main() {
	int choice = -1;
	while (choice != 0) {
		cout << "1 - Enter message to encode" << endl;
		cout << "2 - Enter code to decode" << endl;
		cout << "0 - Exit" << endl;
		cout << "Your choice: ";
		cin >> choice;
		switch (choice) {
		case 1: {
			system("cls");
			Encode();
			system("pause");
			system("cls");
			break;
		}
		case 2: {
			system("cls");
			Decode();
			system("pause");
			system("cls");
			break;
		}
		case 0: {
			return 0;
			break;
		}
		default: {
			system("cls");
			cout << "Invalid choice" << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	}
	return 0;
}

void Encode() {
	string message;
	string code;
	string a = "0";
	string b = "110";
	string c = "1111";
	string d = "10";
	string e = "1110";
	cout << "Enter message to encode using [abcde]: ";
	cin >> message;
	for (int i = 0; i < message.length(); i++) {
		if (message.at(i) == 'a') {
			code.append(a);
			continue;
		}
		else if (message.at(i) == 'b') {
			code.append(b);
			continue;
		}
		else if (message.at(i) == 'c') {
			code.append(c);
			continue;
		}
		else if (message.at(i) == 'd') {
			code.append(d);
			continue;
		}
		else if (message.at(i) == 'e') {
			code.append(e);
			continue;
		}
		else {
			cout << endl << "Wrong format!" << endl;
			return;
		}
	}
	cout << endl << "Message [" << message << "] was encoded to [" << code << "]" << endl;
}

void Decode() {
	string message;
	string code;
	string a = "0";
	string b = "110";
	string c = "1111";
	string d = "10";
	string e = "1110";
	cout << "--- Reference chart ---" << endl;
	cout << "-----------------------" << endl;
	cout << "a  |  " << a << endl;
	cout << "b  |  " << b << endl;
	cout << "c  |  " << c << endl;
	cout << "d  |  " << d << endl;
	cout << "e  |  " << e << endl;
	cout << "-----------------------" << endl;
	cout <<endl<< "Enter code to decode in binary: ";
	cin >> code;
	size_t pos = 0;
	while (pos != code.length()) {
		if (code.compare(pos, a.length(), a) == 0) {
			message.append("a");
			pos += a.length();
		}
		else if (code.compare(pos, b.length(), b) == 0) {
			message.append("b");
			pos += b.length();
		}
		else if (code.compare(pos, c.length(), c) == 0) {
			message.append("c");
			pos += c.length();
		}
		else if (code.compare(pos, d.length(), d) == 0) {
			message.append("d");
			pos += d.length();
		}
		else if (code.compare(pos, e.length(), e) == 0) {
			message.append("e");
			pos += e.length();
		}
		else {
			cout << endl << "Wrong format!" << endl;
			return;
		}
	}
	cout << endl << "Code [" << code << "] was decoded to [" << message << "]" << endl;
}