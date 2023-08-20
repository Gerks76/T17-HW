#include "PublicationException.h"

std::string PublicationException::showMessage() const
{
    return "General Publish Exclusion!";
}

std::string BookException::showMessage() const
{
    return "This field cannot be empty!";
}

std::string EditionYearException::showMessage() const
{   
    return "Invalid year of publication!";
}
