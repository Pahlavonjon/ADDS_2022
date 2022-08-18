#include "Library.h"
#include "Document.h"
#include "Book.h"
#include <iostream>
using namespace std;
int main(){
    Library* Adelaide_University_Library = new Library();
    Book* Harry_Potter = new Book(1001); // sub type polymorphism
    Book* Rald_Dalph = new Book(1002); // sub type polymorphism
    Adelaide_University_Library->addDocument(Harry_Potter);
    Adelaide_University_Library->addDocument(Rald_Dalph);
    cout << "\n "<<Adelaide_University_Library->hasDocument(Harry_Potter)<< "\n\n";
    cout << "\n "<<Adelaide_University_Library->hasDocument(Rald_Dalph)<< "\n\n";
    return 0;
}