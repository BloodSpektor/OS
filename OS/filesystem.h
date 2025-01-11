#pragma once
#include "include.h"

class File {
public:
	File();
	~File();

	void add();
	void add(string name);
	void open();
	void open(string name);
	void close(); // не работает
	void close(string name);
	void remove();
	void remove(string name);
	void write(); // при вызове функции перезаписывает файл | а как?
	void write(string name);
	void read();
	void read(string name);

	ofstream FILE;
private:
	bool isEmpty(const string& str);
};