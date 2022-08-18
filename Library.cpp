#include "Library.h"
#include "Document.h"
#include <array>
#include <iostream>
    Library::Library(){
        this->Libary_capacity = 5;
       // this->The_Documents = new Document*[5];
        this->array_index = 0;
    }
    void Library::addDocument(Document* The_Document){
        The_Documents.at(array_index) = The_Document;
        array_index++;
    } // add a Document to the Library
    bool Library::hasDocument(Document* Where_this_Document){
        for (int k = 0; k < array_index; k++){
            if (The_Documents.at(k)->getDocumentID() == Where_this_Document->getDocumentID()){
                std::cout <<"\n"<<Where_this_Document->getDocumentID() << " is in the Library ... true ";
                return true;
            }
        }
        std::cout << "\n "<<Where_this_Document->getDocumentID() << " is NOT in the Library ... false ";
        return false;
    } // check if a Document is in the Library
