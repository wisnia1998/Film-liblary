#pragma once
#include "AddFilm.h"
#include "RemFilm.h"
#include "Show.h"
#include <iostream>

class Menu : public AddFilm , public RemFilm , public Show
{
public:
	Menu();
	~Menu();

	void choose();
};

