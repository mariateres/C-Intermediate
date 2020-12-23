#ifndef __LIBRARY_H
#define __LIBRARY_H

#include "book.h"

class Library {

  public:
  void addBook(int isbn, std::string title, std::string author, int year, double price, int pages);
  void removeBookByISBN(int isbn);
  void displayAll();
  Book* findBookByISBN(int isbn);
  double findAveragePrice();
  Book& findBookwithMaxPages();
  int count();
  bool isBookFound(int keyIsbn);
  int countBooksInPriceRange(int minVal, int maxVal);
  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
};

#endif