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

	int wyb;
	std::cout << "co chcesz zrobic";
	std::cin >> wyb;
	switch (wyb)
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

		case 0:
			exit(0);
			break;
	}

//	Show show;
	//show.show();

}




/*
AddFilm & Menu::getfilm()
{
	return film;
}

RemFilm & Menu::getremFilm()
{
	return remFilm;
}*/
