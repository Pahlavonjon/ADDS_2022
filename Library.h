#ifndef Library_H
#define Library_H
#include "Document.h"
#include <array>
class Library {
    private:
        std::array<Document*,5> The_Documents;
        int Libary_capacity;
        int array_index;
    public:
        Library();
        Library(int size);
        void addDocument(Document* The_Document); // add a Document to the Library
        bool hasDocument(Document* Where_this_Document); // check if a Document is in the Library
};
#endif