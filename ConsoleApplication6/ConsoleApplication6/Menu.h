#pragma once
#include "AddFilm.h"
#include "RemFilm.h"
#include "Show.h"
#include "Edit.h"
#include "Text.h"
#include <iostream>

class Menu : public RemFilm , public Show , public AddFilm , public Edit
{
	Text texts;

public:
	Menu();
	~Menu();

	void choose();

};

