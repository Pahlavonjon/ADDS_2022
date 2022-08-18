#ifndef Book_H
#define Book_H
#include "Document.h"
class Book : public Document {
    private:
        int Book_ID;
    public:
        Book();
        Book(int id);
        int getDocumentID();
};
#endif