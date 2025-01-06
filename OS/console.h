#pragma once
#include "filesystem.h"
#include <thread>
#include <sstream>

class Console {
public:
	Console();
	~Console();

	void work();
	
	bool isWork = false;
private:
	File file;

	void help();
	void clear();
	void stop();
};