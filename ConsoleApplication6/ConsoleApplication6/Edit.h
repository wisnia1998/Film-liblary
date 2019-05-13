#pragma once
#include <string>
#include <mysql.h>
#include <iostream>
#include <conio.h>
#include "Show.h"
class Edit
{
	Show show;
	MYSQL mysql;
public:
	Edit();
	~Edit();

	void edit();
};

