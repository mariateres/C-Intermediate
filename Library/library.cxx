#include "book.h"
#include <iostream>
#include "library.h"
#include <list>
#include <string>
using namespace std;

std::list<Book> books;
int Library::count() { return books.size(); }
void Library::addBook(int isbn, std::string title, std::string author,int year, double price, int pages) {
    //Book temp(isbn, title, author, year, price, pages);
    //books.push_back(temp);                            
    books.push_back(Book(isbn, title, author, year, price, pages));
 
}
void Library::displayAll() {
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}
Book* Library::findBookByISBN(int keyIsbn) {
std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
   {
       if(iter->getIsbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return &(*iter);
   else
     return nullptr;
}
bool Library::isBookFound(int keyIsbn) 
{
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
      { 
       	if(iter->getIsbn() == keyIsbn)
	  	    break;
	 }
   if(iter!=books.end())
   {
     return true;
   }
   else
   {
     return false;
     }
}
void Library::removeBookByISBN(int keyIsbn) {
std::list<Book>::iterator iter;
   for(iter=books.begin(); iter != books.end(); ++iter)
    {
          if(iter->getIsbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     books.erase(iter);
}
double Library::findAveragePrice() {
std::list<Book>::iterator iter;
  double totalPrice=0;
  for(iter = books.begin(); iter != books.end(); ++iter)
     totalPrice += iter->getPrice();
  return totalPrice/books.size();
}

int countInPriceRange=0;
int Library::countBooksInPriceRange(int minVal, int maxVal) {
std::list<Book>::iterator iter;
  for(iter = books.begin(); iter!= books.end(); ++iter)
  {
  	if(iter->getPrice() >=minVal && iter->getPrice() <=maxVal)
  	    countInPriceRange++;
  	return countInPriceRange;
  }
}
Book& findBookwithMaxPages(){
  std::list<Book>::iterator iter;
  auto maxIter=iter;
  double maxPrice=iter->getPrice();
  for(iter = books.begin();iter != books.end(); ++iter)
  {
    if(iter->getPrice() > maxPrice) {
        maxPrice = iter->getPrice();
        maxIter = iter;
    }
    return *maxIter;
}
}
