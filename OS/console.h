#pragma once
#include "filesystem.h"
#include "include.h"

class Console {
public:
	Console();
	~Console();

	void work();
	
	bool isWork = false;
private:
	File file;

	void clear();
	void stop();
	void ls();
};