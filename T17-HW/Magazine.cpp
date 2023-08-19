#include "Magazine.h"

Magazine::Magazine()
{
    articles = "no articles";
}

Magazine::Magazine(std::string name, std::string author, int year_publishing, std::string articles):Publication(name, author, year_publishing)
{
    this->articles = articles;
}

void Magazine::set_articles(std::string articles)
{
    this->articles = articles;
}

std::string Magazine::get_articles() const
{
    return articles;
}

void Magazine::show() const
{
    Publication::show();
    std::cout << "Articles: " << articles << std::endl;
}
