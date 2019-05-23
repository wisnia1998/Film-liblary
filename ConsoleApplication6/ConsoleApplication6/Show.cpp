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
	system("cls");
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_query(&mysql, "SELECT * FROM filmy");
	MYSQL_ROW  row;
	MYSQL_RES *result = mysql_store_result(&mysql);

	unsigned long *lengths;
	unsigned int num_fields;


	while ((row = mysql_fetch_row(result)) != NULL)
	{
		lengths = mysql_fetch_lengths(result);
		for (int i = 0; i < mysql_num_fields(result); i++)
		{
			std::cout << row[i];
			if (!(i - 1) % 6)
			{
				int k = 27 - lengths[i];
				adjust(k);
			}
			if (!(i - 2) % 6)
			{
				int l = 15 - lengths[i];
				adjust(l);
			}
				std::cout << "| ";
		}
		std::cout << std::endl;
	}
}

void Show::orderBy(int sort, int ros)
{
	std::string query;
	std::string by;
	std::string direction;
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
		direction = "asc";
		break;
	case 2:
		direction = "desc";
		break;
	}

	query = "SELECT * FROM filmy ORDER BY " + by + " " + direction;
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0);
	mysql_query(&mysql, query.c_str());
	MYSQL_ROW  row;
	MYSQL_RES *result = mysql_store_result(&mysql);

	unsigned long *lengths;
	unsigned int num_fields;
	system("cls");
	while ((row = mysql_fetch_row(result)) != NULL)
	{
		lengths = mysql_fetch_lengths(result);
		for (int i = 0; i < mysql_num_fields(result); i++)
		{
			std::cout << row[i];
			if (!(i - 1) % 6)
			{
				int k = 27 - lengths[i];
				adjust(k);
			}
			if (!(i - 2) % 6)
			{
				int l = 15 - lengths[i];
				adjust(l);
			}
			std::cout << "| ";
		}
		std::cout << std::endl;
	}
	texts.goBack();
}

void Show::wybierz()
{
	system("cls");
	int wyb;
	texts.view();
	std::cin >> wyb;
	switch (wyb)
	{
	case 1:
		show();
		break;
	case 2:
		int sort,ros;
		texts.viewBy();
		std::cin >> sort;
		texts.viewOrder();
		std::cin >> ros;
		orderBy(sort, ros);
		break;

	}
}

void Show::adjust(int a)
{
	for (int j = 0; j < a; j++)
		std::cout << " ";
}