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
	MYSQL_RES *idZapytania;
	MYSQL_ROW  wiersz;
	MYSQL mysql;
	mysql_query(&mysql, "SELECT * FROM filmy");
	MYSQL_RES *result = mysql_store_result(&mysql);
	//*idZapytania = mysql_store_result(&mysql);


	while ((wiersz = mysql_fetch_row(result)) != NULL)
	{
		for (int i = 0; i < mysql_num_fields(result); i++)
			std::cout << wiersz[i] << " ";
		std::cout << std::endl;
	}
}

void Show::orderBy()
{
}
