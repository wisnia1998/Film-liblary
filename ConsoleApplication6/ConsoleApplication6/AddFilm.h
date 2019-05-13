#pragma once
#include <string>
#include <mysql.h>
#include <iostream>
#include <conio.h>

using namespace std;

class AddFilm
{
	MYSQL mysql;
public:
	string title;
	string autor;
	string data;
	string length;
	string mark;

	//AddFilm(string title,	string autor, string data, string length, string mark);
	AddFilm();
	~AddFilm();

	void addFilm();

	//MYSQL &getSql();
	//Menu &getMenu();
};

