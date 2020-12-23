#include "book.h"
#include "library.h"
#include <iostream>
#include <string>
using namespace std;

  Book::Book():m_isbn(0),m_title(""),m_author(""),m_year(0),m_price(0.0),m_pages(0)
  {
  }
  Book::Book(int isbn,string title,string author,int year,double price,int pages):m_isbn(isbn),m_title(title),m_author(author),m_year(year),m_price(price),m_pages(pages)
  {
  }
  int Book::getIsbn() const
  {
  	return m_isbn;
  }
  string Book::getTitle() const
  {
  	return m_title;
  }
  string Book::getAuthor() const{
  	return m_author;
  }
  int Book::getYear() const{
  	return m_year;
  }
  double Book::getPrice() const{
  	return m_price;
  }
  int Book::getPages() const{
  	return m_pages;
  }
  void Book::display(){
	  std::cout<<"Isbn-"<<m_isbn<<"\n Title"<<m_title<<"\n Author"<<m_author;
	  std::cout<<"\n Year of Publishing"<<m_year<<"\n Price"<<m_price<<"\n No. of pages"<<m_pages;
  }
  
