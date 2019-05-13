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
	query = "INSERT INTO filmy VALUES (NULL, '" + title + "'," + "'" + autor + "'," + "'" + data + "'," + "'" + length + "'," + "'" +  mark +"')";
	mysql_init(&mysql);
	std::cout << query;
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);//³¹czenie z baz¹
	mysql_select_db(&mysql, "filmoteka");
	mysql_query(&mysql, query.c_str());
	
}
