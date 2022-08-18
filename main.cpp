#include "Library.h"
#include "Document.h"
#include "Book.h"
#include <iostream>
using namespace std;
int main(){
    Library* Adelaide_University_Library = new Library();
    Book* Harry_Potter = new Book(1001);
    Adelaide_University_Library->addDocument(Harry_Potter);
    cout << "\n "<<Adelaide_University_Library->hasDocument(Harry_Potter)<< "\n\n";
    return 0;
}