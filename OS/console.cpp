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

		iss >> com;

		if (com == "help") 
			this->file.read("help.txt");
		
		if (com == "clear")
			this->clear(); 

		if (com == "exit") 
			this->stop(); 
		
		if (com == "add") {
			if (iss >> name) 
				this->file.add(name);
			else 
				this->file.add();
		}
		if (com == "open") {
			if (iss >> name)
				this->file.open(name);
			else 
				this->file.open();
		}
		if (com == "close") 
			this->file.close(); 
	
		if (com == "remove") { 
			if (iss >> name)
				this->file.remove(name);
			else
				this->file.remove();
		}
		if (com == "write") {
			if (iss >> name)
				this->file.write(name);
			else
				this->file.write();
		}
		if (com == "read") {
			if (iss >> name)
				this->file.read(name);
			else
				this->file.read();
		}
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