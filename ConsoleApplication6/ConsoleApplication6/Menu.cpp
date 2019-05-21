#include "pch.h"
#include "Menu.h"


Menu::Menu()
{
}


Menu::~Menu()
{
}

void Menu::choose()
{
	AddFilm film;
	RemFilm remFilm;
	Show show;
	Edit edit;

	int tmp;

//	system("cls");

	std::cout << "co chcesz zrobic\n1.Dodaj\n2.Usun\n3.Wyswietl\n4.Edytuj\n";
	std::cin >> tmp;
	switch (tmp)
	{
		case 1:
			film.addFilm();
			choose();
			break;
		case 2:
			remFilm.remFilm();
			choose();
			break;
		case 3:
			show.wybierz();
			choose();
			break;
		case 4:
			edit.edit();
			choose();
			break;

		case 0:
			exit(0);
			break;
	}
}
