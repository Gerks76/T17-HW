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
	
	return 0;
}