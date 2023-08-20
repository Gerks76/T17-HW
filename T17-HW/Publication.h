#pragma once
#include"PublicationException.h"
#include<iostream>
#include<string>

class Publication
{
protected:
	std::string name;
	std::string author;
	int year_publishing;
public:
	Publication();
	Publication(std::string name, std::string author, int year_publishing);

	void set_name(std::string name);
	void set_author(std::string author);
	void set_year_publishing(int year_publishing);

	std::string get_name()const;
	std::string get_author()const;
	int get_year_publishing()const;

	virtual void show()const;
};

