#include "pch.h"
#include "Edit.h"


Edit::Edit()
{
}


Edit::~Edit()
{
}

void Edit::edit()
{
	show.show();
	int tmp = 0;
	std::string polecenie;
	std::string id;
	std::string kolumna;
	std::cin >> tmp;
	std::cin >> polecenie;
	std::cin >> id;
	switch (tmp)
	{
	case 1:
		kolumna = "Tytul";
		break;
	case 2:
		kolumna = "autor";
		break;
	case 3:
		kolumna = "data";
		break;
	case 4:
		kolumna = "czas";
		break;
	case 5:
		kolumna = "ocena";
		break;
	}
	std::string query;
	query = "UPDATE filmy SET " + kolumna + "= '" + polecenie + "'" + " WHERE id = " + id;
	mysql_init(&mysql);
	std::cout << query;
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	//mysql_select_db(&mysql, "filmoteka");
	mysql_query(&mysql, query.c_str());
}
