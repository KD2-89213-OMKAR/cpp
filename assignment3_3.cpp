#include<iostream>
using namespace std;

namespace NStudent
{

class student{
    int rollno;
    string name;
    int marks;
  
    public:
    void acceptStudentFromConsole()
    {
        cout << "enter the roll no-";
        cin >> this->rollno;
        cout << "enter the name-";
        cin >> this->name;
        cout << "enter the marks-";
        cin >> this->marks;
    }
    
    void printStudentOnConsole()
    {
        cout<<"roll no="<< this->rollno << endl;
        cout<<"name="<< this->name << endl;
        cout<<"marks="<< this->marks << endl;
    }
};

}


int menu()
{
        int choice;
        cout << "0. EXIT" << endl;
        cout << "1. AccceptstudentFromConsole" << endl;
        cout << "2. printstudentonConsole" << endl;
        cout << "Enter the choice - ";
        cin >> choice;
        return choice;
}


int main(){
    int choice;
    NStudent::student d;

    
    while ((choice = menu()) != 0){
        switch (choice){
        
            case 1:
                d.acceptStudentFromConsole();
                break;
            case 2:
                d.printStudentOnConsole();
                break;
            default:
                cout << "Wrong choice...:(" << endl;
                break;
        }
    }
    return 0;
}




