#include<iostream>
using namespace std;

class Product
{
    private:
    int id;
    string title;

    public:
    Product()
    {
        cout<<"Product-"<<endl;
    }
    Product(int id, string title)
    {
        this->id=id;
        this->title=title;
    }
    virtual void accept()
    {
        cout<<"Enter the id-"<<endl;
        cin>>id;
        cout<<"Enter the title-"<<endl;
        cin>>title;
    }
    virtual void display()
    {
        cout<<"id- is-"<<id<<endl;
        cout<<"title is-"<<title<<endl;
    }
    virtual int getPrice()
    {
        return 0;
    }
};

class Book : public Product
{
    private:
    string author;
    int price;

    public:
    Book()
    {
        cout<<"Book-"<<endl;
    }
    Book(string author,int price,int id,string title): Product(id, title)
    {
        cout<<"Book(string)"<<endl;
        this->author=author;
        this->price=price;
    }
    void accept()
    {
        cout<<"author name-"<<endl;
        cin>>author;
        cout<<"price-"<<endl;
        cin>>price;
        Product::accept();
    }
    void display()
    {
        Product::display();
        cout<<"author"<<author<<endl;
        cout<<"price"<<price<<endl;
    }
    int getPrice()
    {
       return (price*0.90);
    }
};



class Tape:public Product 
{
    private:
    string artist;
    int price;

    public:
    Tape()
    {
        cout<<"Tape-"<<endl;
    }
    Tape(string artist,int price,int id,string total):Product(id,total)
    {
        cout<<"Tape(string,int)"<<endl;
        this->artist=artist;
        this->price=price;
    }

    void accept()
    {
        cout<<"enter the artist name-"<<endl;
        cin>>artist;
        cout<<"enter the price-"<<endl;
        cin>>price;
        Product::accept();
    }
    void display()
    {
        cout<<"artist"<<artist<<endl;
        cout<<"price"<<price<<endl;
        Product::display();
    }
    int getPrice()
    {
        return (price*0.95);
    }
};

int menu()
{
    int choice;
    cout << "*" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Tape" << endl;
    cout << "3. Display All" << endl;
    cout << "4. Display All Book" << endl;
    cout << "5. Display All Tape" << endl;
    cout << "6. Show final Bill " <<endl;
    cout << "Enter your choice - ";
    cin >> choice;
    cout << "*" << endl;

    return choice;
}

int main()
{
    int choice;
    int index=0;
    Product *product_list[3];
    while ((choice=menu())!=0)
    {
        switch(choice)
        {
            case 1:
            { if(index < 3){
            product_list[index]=new Book();
            product_list[index++]->accept();
            }else{
                cout<<"Array is full"<<endl;
            }}
            break;
            case 2:
            { if(index < 3){
            product_list[index]=new Tape();
            product_list[index++]->accept();
            }else{
                cout<<"Array is full"<<endl;
            }}
            break;
            case 3:
            { for(int i=0;i<index;i++){
                product_list[i]->display();
            }}
            break;
            case 4:
            {for(int i=0;i<index;i++){
                if (typeid(*product_list[i])==typeid(Book)){
                    product_list[i]->display();
                }
            }}
            break;
            case 5:
            {for (int i=0;i<index;i++){
                if(typeid(*product_list[i])==typeid(Tape)){
                    product_list[i]->display();
                }
            }}
            break;
            case 6:
            {
                int total=0;
                for(int i=0;i<index;i++){
                    if(typeid(*product_list[i])==typeid(Book)){
                       total+= product_list[i]->getPrice();
                    }
                    if(typeid(*product_list[i])==typeid(Tape)){
                        total+= product_list[i]->getPrice();
                    }
                }
                cout<<"Total bill is: "<<total<<endl;
            }
            break;
            default:
                cout<<"wrong choice"<<endl;
                break;
                return 0;
            
        }
    } 
}

  

    

    







