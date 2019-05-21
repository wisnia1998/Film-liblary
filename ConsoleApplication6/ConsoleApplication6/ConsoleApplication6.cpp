#include "pch.h"
#include "Menu.h"

// MySqlTest.cpp : Defines the entry point for the console application.

#include <mysql.h>
#include <iostream>

using namespace std;


int main(int argc, const char * argv[])
{
	Menu menu;
	MYSQL mysql;

	/*bool reconnect = 1;
	mysql_options(&mysql, MYSQL_OPT_RECONNECT, &reconnect);*/

	mysql_init(&mysql); // incjalizacja
	if (mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0))
	{
		printf("Polaczenie z baza danych MySQL nawiazano poprawnie!\n");
		printf("Nacisnij Enter zeby rozpoczac\n");
		cin.ignore();
		menu.choose();//menu obsługa opcji
	}
	else
	{
		printf("Blad polaczenia z bazą MySQL: %d, %s\n", mysql_errno(&mysql), mysql_error(&mysql));
	}

	

	mysql_close(&mysql); // zamknij połączenie

	return 0;
}