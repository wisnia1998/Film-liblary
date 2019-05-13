#pragma once
#include "AddFilm.h"
#include "RemFilm.h"
#include "Show.h"
#include "Edit.h"
#include <iostream>

class Menu : public RemFilm , public Show , public AddFilm , public Edit
{
	//AddFilm film;
	//RemFilm remFilm;
public:
	Menu();
	~Menu();

	void choose();

	//AddFilm &getfilm();
	//RemFilm &getremFilm();
};

