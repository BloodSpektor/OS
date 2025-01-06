#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <windows.h>
#include <cstdlib>
using namespace std;

class File {
public:
	File();
	~File();

	void add();
	void add(string name);
	void open();
	void open(string names);
	void close();
	void close(string name);
	void remove();
	void remove(string name);
	void write();
	void write(string name);
	void read();
	void read(string name);

	ofstream FILE;
private:
	bool isEmpty(const string& str);
};