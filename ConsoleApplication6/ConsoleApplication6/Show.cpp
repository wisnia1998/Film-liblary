#include "pch.h"
#include "Show.h"


Show::Show()
{
}


Show::~Show()
{
}

void Show::show()
{
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_select_db(&mysql, "filmoteka");
	mysql_query(&mysql, "SELECT * FROM filmy");
	MYSQL_ROW  wiersz;
	MYSQL_RES *result = mysql_store_result(&mysql);

	while ((wiersz = mysql_fetch_row(result)) != NULL)
	{
		for (int i = 0; i < mysql_num_fields(result); i++)
			std::cout << wiersz[i] << " ";
		std::cout << std::endl;
	}
}

void Show::orderBy(int sort, int ros)
{
	std::string query;
	std::string by;
	std::string kierunek;
	//std::cin >> by;
	switch (sort)
	{
	case 1:
		by = "Tytul";
		break;
	case 2:
		by = "autor";
		break;
	case 3:
		by = "data";
		break;
	case 4:
		by = "czas";
		break;
	case 5:
		by = "ocena";
		break;
	}

	switch (ros)
	{
	case 1:
		kierunek = "asc";
		break;
	case 2:
		kierunek = "desc";
		break;
	}

	query = "SELECT * FROM filmy ORDER BY " + by + " " + kierunek;
//	std::cout << query;
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_select_db(&mysql, "filmoteka");
	mysql_query(&mysql, query.c_str());
	MYSQL_ROW  wiersz;
	MYSQL_RES *result = mysql_store_result(&mysql);

	while ((wiersz = mysql_fetch_row(result)) != NULL)
	{
		for (int i = 0; i < mysql_num_fields(result); i++)
			std::cout << wiersz[i] << " ";
		std::cout << std::endl;
	}

}

void Show::wybierz()
{
	int wyb;
	std::cout << "co chcesz";
	std::cin >> wyb;
	switch (wyb)
	{
	case 1:
		show();
		break;
	case 2:
		int sort,ros;
		std::cout << "sotruj po: \n 1.tytul \n 2.autor \n 3. data \n 4. czas \n 5. ocena";
		std::cin >> sort;
		std::cout << "rosnaco\nmalejaco";
		std::cin >> ros;
		orderBy(sort, ros);
		break;

	}
}

