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
	/*AddFilm a("ala","aKa","1","2","3");*/
	MYSQL mysql;

	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "root", "", "filmoteka", 0, NULL, 0))
		printf("Polaczenie z baza danych MySQL nawiazano poprawnie!\n");
	else
		printf("Blad polaczenia z bazą MySQL: %d, %s\n", mysql_errno(&mysql), mysql_error(&mysql));

	MYSQL_RES *idZapytania;
	MYSQL_ROW  wiersz;
	//mysql_select_db(&mysql, "filmoteka");
	//mysql_query(&mysql, "INSERT INTO filmy VALUES ('Sami swoi', 'nieznany', 12,12,12)");
	menu.choose();

	/*mysql_query(&mysql, "SELECT * FROM filmy");
	MYSQL_RES *result = mysql_store_result(&mysql);
	//*idZapytania = mysql_store_result(&mysql);


		while ((wiersz = mysql_fetch_row(result)) != NULL)
		{
			for (int i = 0; i < mysql_num_fields(result); i++)
				cout << wiersz[i] << " ";
			cout << endl;
		}*/


	mysql_close(&mysql); // zamknij połączenie

	return 0;
}
//int qstate;
//
//int main()
//{
//	MYSQL* conn;
//	MYSQL_ROW row;
//	MYSQL_RES *res;
//	conn = mysql_init(0);
//
//	conn = mysql_real_connect(conn, "localhost", "root", "123456789", "testdb", 3306, NULL, 0);
//
//	if (conn) {
//		puts("Successful connection to database!");
//
//		string query = "SELECT * FROM test";
//		const char* q = query.c_str();
//		qstate = mysql_query(conn, q);
//		if (!qstate)
//		{
//			res = mysql_store_result(conn);
//			while (row = mysql_fetch_row(res))
//			{
//				printf("ID: %s, Name: %s, Value: %s\n", row[0], row[1], row[2]);
//			}
//		}
//		else
//		{
//			cout << "Query failed: " << mysql_error(conn) << endl;
//		}
//	}
//	else {
//		puts("Connection to database has failed!");
//	}
//
//	return 0;
//}