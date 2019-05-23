#pragma once
#include <string>
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <mysql.h>

class Text
{
public:
	Text();
	~Text();
	void goBack();
	///////////////////Edit Class
	void editElement();
	void newElement(std::string atribiut);
	void idOfElement();
	///////////////////Addfilm Class
	void title();
	///////////////////Menu  Class
	void whatToDo();
	/////////////////Show Class
	void view();
	void viewBy();
	void viewOrder();
	/////////////////RemFilm Class
	void remove();
	void remTitle(std::string rem);
};

