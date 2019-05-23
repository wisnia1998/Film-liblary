#pragma once
#include <iostream>
#include <mysql.h>
#include <string>
#include <conio.h>
#include "Text.h"

using namespace std;

class RemFilm
{
	Text texts;
	MYSQL mysql;
public:
	string removeFilm;

	RemFilm();
	~RemFilm();
	   
	void remFilm();
};

