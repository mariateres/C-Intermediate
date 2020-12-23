#ifndef __BOOK_H
#define __BOOK_H
#include <string>
using namespace std;
class Book {
	  int m_isbn;     //ideally to be std::string
	  std::string m_title;
	  std::string m_author;
	  int m_year;
	  double m_price;
	  int m_pages;
	public:
	  Book();
	  Book(int isbn,string title,string author,int year,double price,int pages);
	  int getIsbn() const;
	  string getTitle() const;
	  string getAuthor() const;
	  int getYear() const;
	  double getPrice() const;
	  int getPages() const;
	  void display();
  
};
#endif