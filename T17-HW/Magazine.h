#pragma once
#include "Publication.h"
class Magazine :
    public Publication
{
protected:
    std::string articles;
public:
    Magazine();
    Magazine(std::string name, std::string author, int year_publishing, std::string articles);

    void set_articles(std::string articles);

    std::string get_articles()const;

    void show()const override;
};

