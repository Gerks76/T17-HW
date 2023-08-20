#pragma once
#include"Book.h"
#include"Magazine.h"
#include"Publication.h"
#include"PublicationException.h"
#include<vector>


class Library
{
	std::string name_library;
	std::vector<Publication*>library;
public:
	Library();
	Library(std::string name_library);
	~Library();

	void set_name_library(std::string name_library);
	std::string get_name_library()const;

	void show()const;
	void add_publication(Publication* obj);
	void del_publication(std::string name);
	void find_publication(std::string name)const;
};

