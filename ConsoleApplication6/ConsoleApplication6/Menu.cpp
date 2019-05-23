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

	texts.whatToDo();
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
			texts.goBack();
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
