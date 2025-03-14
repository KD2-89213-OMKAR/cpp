#include<iostream>
using namespace std;

class tollbooth
{
    
    unsigned int totalcars;
    double totalamt;

public:
    tollbooth()
    {
        totalcars=0;
        totalamt=0;    
    }

void payingCar()
{
    cout<<"increments totalcars"<<endl;
    totalcars++;
    totalamt=totalamt+0.50;

}

void nonpayingcar()
{
    cout<<"increments totalcars"<<endl;
    totalcars++;
}

void printOnConsole()
{
    cout<<"totalcars:"<<totalcars<<endl;
    cout<<"totalamt:"<<totalamt<<endl;
};


int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. payingCar()" << endl;
    cout << "2. nonpayingcar" << endl;
    cout << "3. printOnConsole"<<endl;
    cout << "Enter the choice - ";
    cin >> choice;
    return choice;
}


int main()
{
    int choice;
    tollbooth e;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            e.payingCar();
            break;
        case 2:
            e.nonpayingcar();
            break;
        case 3:
            e.printOnConsole();
            break;
        default:
            cout << "Wrong choice...:(" << endl;
            break;
        }
    }
    return 0;
}

};


