#include<iostream>
using namespace std;

struct Date
{

     int day;
     int month;
     int year;


void initDate()
{
    int day=0;
    int month=0;
    int year=0; 
}



void acceptDateFromConsole()
{
    cout << "enter the day-";
    cin >> day;
    cout << "enter the month-";
    cin >> month;
    cout << "enter the year-";
    cin >> year;
}


void printDateOnConsole()
{
    cout << "day ="<< day << endl;
    cout <<"month ="<< month << endl;
    cout <<"year ="<< year << endl;
}

bool isLeapYear()
{
   if(year%400 == 0 && year%100 == 0 || year%4 == 0 && year%100 != 0)
        return 1;
   else
        return 0;
}


};
int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. InitDate" << endl;
    cout << "2. AccceptDateFromConsole" << endl;
    cout << "3. printDateonConsole" << endl;
    cout << "Enter the choice - ";
    cin >> choice;
    return choice;
}


int main()
{
    int choice;
    Date d;
    d.initDate();
    
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            d.initDate();
        case 2:
            d.acceptDateFromConsole();
            break;
        case 3:
            d.printDateOnConsole();
            break;
        default:
            cout << "Wrong choice...:(" << endl;
            break;
        }
    }
    return 0;
}

    


