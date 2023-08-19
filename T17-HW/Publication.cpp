#include "Publication.h"

Publication::Publication()
{
    name = "no name";
    author = "no author";
    year_publishing = 2000;
}

Publication::Publication(std::string name, std::string author, int year_publishing)
{
    this->name = name;
    this->author = author;
    this->year_publishing = year_publishing;
}

void Publication::set_name(std::string name)
{
    this->name = name;
}

void Publication::set_author(std::string author)
{
    this->author = author;
}

void Publication::set_year_publishing(int year_publishing)
{
    this->year_publishing = year_publishing;
}

std::string Publication::get_name() const
{
    return name;
}

std::string Publication::get_author() const
{
    return author;
}

int Publication::get_year_publishing() const
{
    return year_publishing;
}

void Publication::show() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "The year of publishing: " << year_publishing << std::endl;
}
