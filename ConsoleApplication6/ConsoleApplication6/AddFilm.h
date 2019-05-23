#pragma once
#include <string>
#include <mysql.h>
#include <iostream>
#include <conio.h>
#include "Text.h"

using namespace std;

class AddFilm
{
	Text texts;
	MYSQL mysql;
public:
	string title;
	string autor;
	string data;
	string length;
	string mark;


	AddFilm();
	~AddFilm();

	void addFilm();

};

