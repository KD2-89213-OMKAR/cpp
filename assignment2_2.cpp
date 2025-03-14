#include<iostream>
using namespace std;

class student{

    private:

       int rollno;
       string name;
       int marks;

    public:
         void acceptStudentFromConsole(){
            cout << "enter the roll no-";
            cin >> rollno;
            cout << "enter the name-";
            cin >> name;
            cout << "enter the marks-";
            cin >> marks;
    
        }

        void printStudentOnConsole(){
            cout<<"roll no="<< rollno << endl;
            cout<<"name="<< name << endl;
            cout<<"marks="<< marks << endl;
        }



    
};

int menu(){
           int choice;
           cout << "0. EXIT" << endl;
           cout << "1. roll no" << endl;
           cout << "2. AccceptstudentFromConsole" << endl;
           cout << "3. printstudentonConsole" << endl;
           cout << "Enter the choice - ";
           cin >> choice;
           return choice;
}


int main(){
    int choice;
    student d;

    
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


