#pragma once
#include <iostream>
#include <mysql.h>
#include <string>
#include <conio.h>

using namespace std;

class RemFilm
{
	MYSQL mysql;
public:
	string removeFilm;

	RemFilm();
	~RemFilm();
	   
	void remFilm();

	MYSQL &getSql();
};

