#include "pch.h"
#include "AddFilm.h"


//AddFilm::AddFilm(string title, string autor, string data, string length, string mark)
//{
//	this->title = title;
//	this->autor = autor;
//	this->data = data;
//	this->length = length;
//	this->mark = mark;
//}

AddFilm::AddFilm()
{
}


AddFilm::~AddFilm()
{
}

void AddFilm::addFilm()
{
	string query;
	cin.ignore();
	getline(cin, title);
	getline(cin, autor);
	std::cin >> data;
	std::cin >> length;
	std::cin >> mark;
	query = "INSERT INTO filmy VALUES ('" + title + "'," + "'" + autor + "'," + "'" + data + "'," + "'" + length + "'," + "'" +  mark +"')";
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_select_db(&mysql, "filmoteka");
	mysql_query(&mysql, query.c_str());
	
}

MYSQL & AddFilm::getSql()
{
	return mysql;
}

/*
Menu & AddFilm::getMenu()
{
	return menu;
}*/
