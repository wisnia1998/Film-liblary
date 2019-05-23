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
	texts.remove();
	getline(cin, removeFilm);
	

	query = "DELETE FROM filmy WHERE tytul = '" + removeFilm +  "'";
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_query(&mysql, query.c_str());

	texts.remTitle(removeFilm);
}
