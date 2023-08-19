#include "Book.h"

Book::Book()
{
    summary = "no summary";
}

Book::Book(std::string name, std::string author, int year_publishing, std::string summary):Publication(name,author,year_publishing)
{
    this->summary = summary;
}

void Book::set_summary(std::string summary)
{
    this->summary = summary;
}

std::string Book::get_summary() const
{
    return summary;
}

void Book::show() const
{
    Publication::show();
    std::cout << "Summary: " << summary << std::endl;
}
