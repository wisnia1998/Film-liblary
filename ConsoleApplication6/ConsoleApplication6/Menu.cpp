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
	/*string title;
	string autor;
	string data;
	string length;
	string mark;
	std::cin >> title;
	std::cin >> autor;
	std::cin >> data;
	std::cin >> length;
	std::cin >> mark;*/
	AddFilm film;// title, autor, data, length, mark);
	film.addFilm();
	Show show;
	show.show();
	RemFilm remfilm;
	remfilm.remFilm();
}
