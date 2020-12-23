#include <iostream>
#include <list>
#include "library.h"
#include "library.cxx"
#include "book.cxx"
#include "book.h"

int main()
{
	Library l1;
	l1.addBook(123, "Jungle book", "rudyard kipling",1998, 300, 1500);
	l1.addBook(456, "Malgudi days", "Suda Murthy",1994, 230, 100);
	l1.addBook(789, "Fire", "APJ",2000, 600, 500);
	l1.addBook(234, "Unfinished", "PCJ",2020, 150, 1200);
	l1.addBook(890, "Dream", "maria",2010, 500, 180);
	l1.displayAll();
	//findBookByISBN(890);
	std::cout<<l1.isBookFound(789);
	l1.removeBookByISBN(234);
    l1.displayAll();

	std::cout<<l1.findAveragePrice();
	std::cout<<l1.countBooksInPriceRange(180, 900);
	//findBookwithMaxPages();
}
