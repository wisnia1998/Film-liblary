#pragma once
#include <string>
#include <mysql.h>
#include <iostream>
#include <conio.h>
#include "Show.h"
#include "Text.h"
class Edit
{
	Text texts;
	Show show;
	MYSQL mysql;
public:
	Edit();
	~Edit();

	void edit();
};

