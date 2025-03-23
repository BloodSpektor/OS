#pragma once
#include "filesystem.h"
#include "include.h"

class Console {
public:
	Console();
	~Console();

	void work();
	
	bool isWork = false;
	File file;
private:
	void clear();
	void stop();
	void ls();
};