#pragma once
#include "Publication.h"
class Book :
    public Publication
{
protected:
    std::string summary; //נוח‏לו
public:
    Book();
    Book(std::string name, std::string author, int year_publishing, std::string summary);

    void set_summary(std::string summary);
    
    std::string get_summary()const;

    void show()const override;
};

