#include "Book.h"
#include "Document.h"
Book::Book(){}
Book::Book(int id){this->Book_ID = id;}
int Book::getDocumentID(){return Book_ID;}
