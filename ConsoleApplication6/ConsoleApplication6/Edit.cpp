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
	std::string newValue;
	std::string id;
	std::string atribiut;
	std::cin.ignore();
	texts.editElement();
	std::cin >> tmp;

	switch (tmp)
	{
	case 1:
		atribiut = "Tytul";
		break;
	case 2:
		atribiut = "autor";
		break;
	case 3:
		atribiut = "data";
		break;
	case 4:
		atribiut = "czas";
		break;
	case 5:
		atribiut = "ocena";
		break;
	}

	system("cls");
	show.show();
	texts.newElement(atribiut);
	std::cin >> newValue;
	texts.idOfElement();
	std::cin >> id;
	std::string query;
	query = "UPDATE filmy SET " + atribiut + "= '" + newValue + "'" + " WHERE id = " + id;
	mysql_init(&mysql);
	std::cout << query;
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_query(&mysql, query.c_str());
	system("cls");
	show.show();
	texts.goBack();
}
