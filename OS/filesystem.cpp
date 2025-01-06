#include "filesystem.h"

File::File() {

}

File::~File() {

}

void File::add() {
	string name;
	cout << "Enter file name" << endl;
	cin >> name;

	FILE.open(name);
	if (FILE.is_open()) {
		cout << "File " << name << " created" << endl;
		FILE.close();
	}
	else {
		cerr << "Failed to create file" << endl;
	}
}
void File::add(string name) {
	FILE.open(name);
	if (FILE.is_open()) {
		cout << "File " << name<< " created" << endl;
		FILE.close();
	}
	else {
		cerr << "Failed to create file" << endl;
	}
}

void File::open() {
	string name = "";
	cout << "Enter file name" << endl;
	cin >> name;
	if(FILE.is_open())
		cout << "File " << name << " open" << endl;
	system(name.c_str());
	if(!FILE.is_open())
		cout << "File " << name << " close" << endl;
}
void File::open(string name) {
	if (FILE.is_open())
		cout << "File " << name << " open" << endl;
	system(name.c_str());
	if (!FILE.is_open())
		cout << "File " << name << " close" << endl;
}

void File::close() {
	if (FILE.is_open())
		FILE.close();
}
void File::close(string name) {
	if (FILE.is_open())
		FILE.close();
}

void File::remove() {
	
}
void File::remove(string name) {
	
}

void File::write() {
	string name, text;
	cin >> name;

	FILE.open(name);
	if (FILE.is_open())
		cout << "File " << name << " open for write" << endl;
	else cout << "Cant open file" << endl;

	while (true) {
		getline(cin, text);
		FILE << text << endl;
		if (this->isEmpty(text))
			break;
	}

	if (!FILE.is_open()) {
		FILE.close();
		cout << "File " << name << " close" << endl;
	}
}

void File::write(string name) {
	string text;

	FILE.open(name);
	if (FILE.is_open())
		cout << "File " << name << " open for write" << endl;

	while (true) {
		getline(cin, text);
		FILE << text << endl;
		if (this->isEmpty(text))
			break;
	}

	if (FILE.is_open()) {
		FILE.close();
		cout << "File " << name << " close" << endl;
	}
}

void File::read() {

}

void File::read(string name) {
	ifstream FILE(name);
	string text;

	if (FILE.is_open()){
		while (getline(FILE, text))
			cout << text << endl;
		FILE.close();
	}
	else cout << "Cant read file" << endl;
}

bool File::isEmpty(const string& str) {
	return all_of(str.begin(), str.end(), [](unsigned char c) { return std::isspace(c); });
}