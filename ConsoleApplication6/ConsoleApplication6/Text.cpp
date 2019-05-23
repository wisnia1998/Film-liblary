#include "pch.h"
#include "Text.h"


Text::Text()
{
}


Text::~Text()
{
}


void Text::goBack()
{
	printf("\n\nNacisnij Enter zeby wrocic do menu wyboru\n");
	char znak;
	static_cast <char>(znak);//wait for enter press
	znak = _getch();
	if (znak == 13)
		std::cout << "";/////////
}

void Text::editElement()
{
	std::cout << "Co chcesz edytowac?:\n";
	std::cout << "1.Tytul\n";
	std::cout << "2.Autor\n";
	std::cout << "3.Data wydania\n";
	std::cout << "4.Czas trwania\n";
	std::cout << "5.Ocena\n";
}

void Text::newElement(std::string atribiut)
{
	std::cout << "Edytujesz ";
	std::cout << atribiut;
	std::cout << "\nPodaj nowa wartosc: ";
}

void Text::idOfElement()
{
	std::cout << "\nPodaj ID edytowanego filmu: ";
}

void Text::title()
{
	system("cls");
	std::cout << "Dodaj film podajac kolejno Tytul, autora, date powstania, czas trwania, dlugosc i ocene. Kazda operacje zatwierdz enterem.";
}

void Text::whatToDo()
{
	system("cls");
	std::cout << "co chcesz zrobic\n";
	std::cout << "1.Dodaj\n";
	std::cout << "2.Usun\n";
	std::cout << "3.Wyswietl\n";
	std::cout << "4.Edytuj\n";
}

void Text::view()
{
	system("cls");
	std::cout << "1.Wyswietl wszystkie filmy.\n";
	std::cout << "2.Wyswietl sortujac po:\n";
}

void Text::viewBy()
{
	system("cls");
	std::cout << "sotruj po:\n";
	std::cout << "1.tytul\n";
	std::cout << "2.autor\n";
	std::cout << "3.data\n";
	std::cout << "4.czas\n";
	std::cout << "5.ocena\n";
}

void Text::viewOrder()
{
	system("cls");
	std::cout << "1.Rosnaco\n";
	std::cout << "2.Malejaco\n";
}

void Text::remove()
{
	std::cout << "\nusuwanie\n";
}

void Text::remTitle(std::string rem)
{
	std::cout << "Usunieto film pt.: " << rem;
}
