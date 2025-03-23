#include "console.h"

Console::Console() { isWork = true; }

Console::~Console() { exit(0); }

void Console::work() {
	while (isWork) {
		cout << ">>> ";

		string input;
		getline(cin, input);
		istringstream iss(input);
		string com, name;

		iss >> com; // сделать отлов ввода

		if (com == "help") 
			file.read("help.txt");
		
		if (com == "clear")
			clear(); 

		if (com == "exit") 
			stop(); 
		
		if (com == "add") {
			if (iss >> name)
				file.add(name);
			else 
				file.add();
		}
		if (com == "open") {
			if (iss >> name) {
				file.open(name);
			}
			else {
				file.open();
			}
		}
		if (com == "close") 
			file.close(); 
	
		if (com == "remove") { 
			if (iss >> name)
				file.remove(name);
			else
				file.remove();
		}
		if (com == "write") {
			if (iss >> name)
				file.write(name);
			else
				file.write();
		}
		if (com == "read") {
			if (iss >> name)
				file.read(name);
			else
				file.read();
		}
		if (com == "ls")
			ls();
	}
}

void Console::clear() {
	system("cls");
}

void Console::stop() { 
	isWork = false;
	this->~Console();
}

void Console::ls() {
	
}