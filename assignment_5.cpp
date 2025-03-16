#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    Date()
    {
        cout<<"date()"<<endl;
    }
    Date(int day, int month, int year)
    {
        cout<<"date(int,int,int)"<<endl;
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void acceptdate()
    {
        cout<<"enter the day";
        cin>>day;
        cout<<"enter the month";
        cin>>month;
        cout<<"enter the year";
        cin>>year;
    }
    void displaydate()
    {
        cout<<day<<month<<year<<endl;
    }
};

    class Person
    {
        private:
        string name;
        string address;
        Date dob;

        public:
        Person()
        {
            cout<<" person()"<<endl;

        }

        Person(string name, string address, int day, int month, int year ): dob (day,month,year )
        {
            cout << "person (string,string,int,int int)"<<endl;
            this->name=name;
            this->address=address;
        }

        void acceptPerson()
        {
           cout<<"enter the name-";
           cin>>name;
           cout<<"enter the address-";
           cin>>address;
           cout<<"enter the date of birth-";
           dob.acceptdate();
        }

        void displayPerson()
        {
            cout<<"name"<<name<<endl;
            cout<<"address"<<address<<endl;
            cout<<"date of birth"<<endl;
            dob.displaydate();
        }
    };

    class Student
    {
        private:
            int id;
            int marks;
            string course;
            Date doj;
            Date eod;

        public:
        Student()
        {
            cout<<"Inside Student()"<<endl;
        }

        Student(int id,int marks,string course,int day,int month,int year,int eday,int emonth,int eyear): doj (day,month,year ),eod(eday,emonth,eyear)
        {
             this->id=id;
             this->marks=marks;
             this->course=course;

        }

        void acceptstudent()
        {
            cout<<"Enter the id=";
            cin>>id;
            cout<<"enter the marks=";
            cin>>marks;
            cout<<"enter the course=";
            cin>>course;
            doj.acceptdate();
            eod.acceptdate();
        }

         void displayStudent()
        {
            cout<<"id"<<id<<endl;
            cout<<"marks"<<marks<<endl;
            cout<<"course"<<course<<endl;
            doj.displaydate();
            eod.displaydate();
        }
    
    };

    int main ()
    {
        Date d1;
        d1.acceptdate();
        d1.displaydate();

        Date d2(10, 5 ,2000);

        Person p1( "omkar","nashik",1,10,2002);
        p1.displayPerson();
        return 0;

    
    }





        


    

    