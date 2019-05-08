#include "pch.h"
#include "RemFilm.h"


RemFilm::RemFilm()
{
}


RemFilm::~RemFilm()
{
}

void RemFilm::remFilm()
{
	string query;
	cin.ignore();
	cout << "\nusuwanie\n";
	getline(cin, removeFilm);
	std::cout << removeFilm;
	query = "DELETE FROM filmy WHERE tytul = '" + removeFilm +  "'";
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_select_db(&mysql, "filmoteka");
	mysql_query(&mysql, query.c_str());
}

MYSQL & RemFilm::getSql()
{
	return mysql;
}
