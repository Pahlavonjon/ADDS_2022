#include "Library.h"
#include "Document.h"
    Library::Library(){
        this->Libary_capacity = 5;
        this->The_Documents = new Document*[5];
        this->array_index = 0;
    }
    void Library::addDocument(Document* The_Document){
        The_Documents[array_index] = The_Document;
        array_index++;
    } // add a Document to the Library
    bool Library::hasDocument(Document* Where_this_Document){
        for (int k = 0; k < Libary_capacity; k++){
            if (The_Documents[k]->getDocumentID() == Where_this_Document->getDocumentID()){
                return true;
            }
        }
        return false;
    } // check if a Document is in the Library
