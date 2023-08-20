#include"Book.h"
#include"Library.h"
#include"Magazine.h"
#include"Publication.h"
#include"PublicationException.h"

int main()
{
	Library lib("Bodleian Library");
	lib.add_publication(new Publication("C-style Strings in C++", "Alex Allain", 2019));
	lib.add_publication(new Book("Effective Modern C++", "Scott Meyers", 2015, "42 SPECIFIC WAYS TO IMPROVE YOUR USE OF C++11 AND C++14"));
	lib.add_publication(new Magazine("ACM Queue", "Jim Maurer", 2023, "Business and Management, Kode Vicious, Security"));
	lib.add_publication(new Book("C++", "Bjorn Stroustrup", 2013, "This book gives a description of the language, and its key concepts."));

	lib.show();

	std::cout << "----------------------------------\n";
	std::cout << "Book search by title: \n";
	lib.find_publication("C++");
	std::cout << "----------------------------------\n";
	std::cout << std::endl;

	std::cout << "Deleting a book by title: \n\n";	
	lib.del_publication("C++");
	lib.show();
	std::cout << "----------------------------------\n";	
	std::cout<<"Handling Exceptions: " << std::endl;
	try
	{
		lib.add_publication(new Book("", "Stephen Prata", 2020, "popular guide for beginner C++ programmers"));		
	}
	catch (PublicationException& exception)
	{
		std::cout << exception.showMessage() << std::endl;
	}

	try
	{		
		lib.add_publication(new Book("C++: The Complete Reference", "", 2021, "an extensive guide to the C++ language"));
	}
	catch (PublicationException& exception)
	{
		std::cout << exception.showMessage() << std::endl;
	}

	try
	{
		lib.add_publication(new Book("C++: The Complete Reference", "Stephen Prata", 0, "an extensive guide to the C++ language"));
	}
	catch (PublicationException& exception)
	{
		std::cout << exception.showMessage() << std::endl;
	}

	std::cout << "----------------------------------\n";
	std::cout << std::endl;

	lib.show();

	return 0;
}