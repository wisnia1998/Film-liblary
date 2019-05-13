// ConsoleApplication6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include "pch.h"
#include "AddFilm.h"
#include "Menu.h"

// MySqlTest.cpp : Defines the entry point for the console application.
//

#include <mysql.h>
#include <iostream>


using namespace std;


int main(int argc, const char * argv[])
{
	Menu menu;
	MYSQL mysql;

	mysql_init(&mysql); // incjalizacja
	if (mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0))
		printf("Polaczenie z baza danych MySQL nawiazano poprawnie!\n");
	else
		printf("Blad polaczenia z bazą MySQL: %d, %s\n", mysql_errno(&mysql), mysql_error(&mysql));

	menu.choose();

	mysql_close(&mysql); // zamknij połączenie

	return 0;
}