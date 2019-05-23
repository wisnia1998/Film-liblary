#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include "Text.h"
class Show
{
	Text texts;
	MYSQL mysql;
public:
	Show();
	~Show();

	void show();
	void orderBy(int sort, int ros);
	void wybierz();
	virtual void adjust(int a);
};

