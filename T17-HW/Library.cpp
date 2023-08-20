#include "Library.h"

Library::Library()
{
	name_library = "no name";
}

Library::Library(std::string name_library)
{
	this->name_library = name_library;
}

Library::~Library()
{
	for (int i = 0; i < library.size(); i++)
	{
		delete library[i];
	}
}

void Library::set_name_library(std::string name_library)
{
	this->name_library = name_library;
}

std::string Library::get_name_library() const
{
	return name_library;
}

void Library::show() const
{
	for (int i = 0; i < library.size(); i++)
	{
		library[i]->show();
	}
}

void Library::add_publication(Publication* obj)
{
	library.push_back(obj);
}

void Library::del_publication(std::string name)
{
	for (int i = 0; i < library.size(); i++)
	{
		if (library[i]->get_name() == name)
		{
			library.erase(library.begin() + i);
			break;
		}
	}
}

void Library::find_publication(std::string name) const
{
	for (int i = 0; i < library.size(); i++)
	{
		if (library[i]->get_name() == name)
		{
			library[i]->show();
		}
	}
}
