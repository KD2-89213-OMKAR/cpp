#include<iostream>
using namespace std;


class box
{
    int length;
    int width;
    int height;

public: 
    box()
    {
        cout<<"inside the parameterless ctor" << endl;
        length=1;
        width=1;
        height=1;
    }

    box(int l, int w, int h)
    {
        cout <<"inside parametrised ctor"<<endl;
        this->length=length;
        this->width=width;
        this->height=height; 
    }

    box(int l)
    {
        length= l;
        width= l;
        height= l;
    }

    void acceptbox()
    {
        cout << "enter the length-"<< endl;
        cin >> length;
        cout << "enter the width-"<< endl;
        cin >> width;
        cout <<"enter the height-"<< endl;
        cin >> height;
    }

    void displaybox()
    {
        cout << "length-"<< length << endl;
        cout << "width-"<< width << endl;
        cout << "height-"<< height << endl;
    }

    void calculateboxDefault()
    {
        box();
        displaybox();
        cout<<"the box is-"<<length*width*height<<endl;

    }
    
    void calculateboxsamevalue()
    {
        acceptboxofOneValue();
        displaybox();
        cout<<"the box is "<<length*width*height<<endl;
    }

    void calculateboxdifferent()
    {
       acceptboxofThreeValue();
        displaybox();
        cout<<"the box is "<<length*width*height<<endl;
    }

    void acceptboxofOneValue()
    {
        cout<<"the length:"<<length<<endl;
        cin>>length;
        width=length;
        height=length;
    }

    void acceptboxofThreeValue()
    {
        cout<<"length"<<endl;
        cin>>length;
        cout<<"width"<<endl;
        cin>>width;
        cout<<"height"<<endl;
        cin>>height;
    }

};


int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Calculate Volume with default values " << endl;
    cout << "2. Calculate Volume with length,breadth and height with same value" << endl;
    cout << "3. Calculate Volume with different length,breadth and height values." << endl;
    cout << "Enter the choice - ";
    cin >> choice;
    return choice;
}


int main()
{
    int choice;
    box e;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 0:
            cout<<"thank you"<<endl;
        case 1:
            e.calculateboxDefault();
            break;
        case 2:
            e.calculateboxsamevalue();
            break;
        case 3:
            e.calculateboxdifferent();
            break;
        default:
            cout << "Wrong choice...:(" << endl;
            break;
        }
    }
    return 0;
}


