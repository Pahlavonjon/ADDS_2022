#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Activity {
    string Activity_name;
    vector<string> Questions;
    vector<string> Solutions;
}

class Person {
    public:
        Person();
}

class Scholar : public Person {
    public:
        virtual string getName() = 0;
        virtual int getID() = 0;
        virtual void doActivity() = 0;
}   

class Student : public Scholar {
    private:
        string name;
        int ID;
        vector<Activity> myActivities;
    public:
        Student();
        Student(string name, int ID);
        string getName(){return this->name;}
        int getID(){return this->ID;}
        void doActivity(int question){
            myActivities.at(question).Solutions = "Solution problem "<< question;
        }
}

class Lecturer : public Scholar {
    private:
        string name;
        int ID;
        vector<Student> Class;
    public:
        Lecturer();
        Lecturer(string name, int ID);
        string getName(){return this->name;}
        int getID(){return this->ID;}
        void myActivities(int )
}

int main(void){
    Scholar 
    return 0; 
}