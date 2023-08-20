#pragma once
#include<string>

class PublicationException
{
public:
	virtual std::string showMessage() const;
};

class BookException
	:public PublicationException
{
public:
	std::string showMessage() const override;
};

class EditionYearException
	:public PublicationException
{
public:
	std::string showMessage() const override;
};



