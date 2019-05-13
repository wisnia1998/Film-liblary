#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
class Show
{
	MYSQL mysql;
public:
	Show();
	~Show();

	void show();
	void orderBy(int sort, int ros);
	void wybierz();
};

