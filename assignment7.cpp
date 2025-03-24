#include<iostream>
using namespace std;

class Employee
{
    private:
    int id;
    double salary;

    public:
    Employee()
    {
        cout<<"Employee()"<<endl;
    }
    Employee(int id, double salary)
    {
        cout<<"id-, salary-"<<endl;
        this->id=id;
        this->salary=salary;
    }
    void setId(int)
    {
        this->id=id;
    }
    int getId()
    {
        return id;
    }
    void setSalary(double)
    {
        this->salary=salary;
    }
    int getSalary()
    {
        return salary;
    }
    void accept()
    {
        cout<<"enter id-"<<endl;
        cin>>id;
        cout<<"enter the salary-"<<endl;
        cin>>salary;
    }
    void display()
    {
        cout<<"id"<<id<<endl;
        cout<<"Salary"<<salary<<endl;
    }
};

class Manager : virtual public Employee
{
    private:
    double bonus;

    protected:
    void acceptManager()
    {
        cout<<"enter the bonus-"<<endl;
        cin>>bonus;
    }
    void displayManager()
    {
        cout<<"bonus-"<<bonus<<endl;
    }


    public:
    Manager()
    {
        cout<<"Manager()"<<endl;
    }
    Manager(double bonus,int id,double salary) : Employee(id,salary)
    {
        this->bonus=bonus;
    }
    void setBonus(double)
    {
        this->bonus=bonus;
    }
    double getbonus()
    {
        return bonus;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }
    void display()
    {
        Employee::display();
        displayManager();
    }
};

class Salesman : virtual public Employee
{
    private:
    double commission;

    protected:
    void accepetSalesman()
    {
        cout<<"enter the commision-"<<endl;
        cin>>commission;
    }
    void displaySalesman()
    {
        cout<<"commission"<<commission<<endl;
    }

    public:
    Salesman()
    {
        cout<<"Salesman()-"<<endl;
    }
    Salesman(int id, double salary,double commission): Employee(id,salary)
    {
        this->commission=commission;
    }
    void setCommission(double)
    {
        this->commission=commission;
    }
    double getCommission()
    {
        return commission;
    }
    void accept()
    {
        Employee::accept();
        accepetSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
        
    }
};

    class SalesManager: public Manager, public Salesman
    {
        public:
        SalesManager()
        {
            cout<<"salesmanger"<<endl;
        }
        SalesManager(int id, double salary, double bonus,double commission): Employee(id,salary)
        {
            Salesman::setCommission(commission);
            Manager::setBonus(bonus);
        }
        void accept()
        {

            Employee::accept();
            Manager::acceptManager();
            Salesman::accepetSalesman();
        }
        void display()
        {
            Employee::display();
            Manager::displayManager();
            Salesman::displaySalesman();
        }
    };

    int menu()
    {
        int choice;
        cout<< "*" << endl;
        cout<< "0.Exit"<<endl;
        cout<< "1.Add Manager"<<endl;
        cout<< "2.Add Salesman"<<endl;
        cout<< "3.Add Salemanager"<<endl;
        cout<< "4.Display the count of all employees with respect to designation"<<endl;
        cout<< "5.Display All Manager"<<endl;
        cout<< "6.Display All Salesman"<<endl;
        cout<< "7.Display All SalesManger"<<endl;
        cout<< "Enter your choice-"<<endl;
        cin >> choice;
        return choice;
    }

    int main()
    {
        int choice;
        int index=0;
        int countManager=0;
        int countSalesman=0;
        int countSalesManager=0;
        Employee *arr[10];
        while((choice=menu())!=0)
        {
            switch(choice)
            {
            case 1:
            {
                if(index < 10 )
                {
                   arr[index]=new Manager();
                   arr[index]->accept();
                   index++;
                }
                else{
                cout<<"Array is full"<<endl; 
                }
            }
                break;

            case 2:
            {
                if(index < 10)
                {
                    arr[index]=new Salesman();
                    arr[index]->accept();
                    index++;
                }
                else{
                cout<<"Array is Full"<<endl;
                }
            }
                break;

            case 3:
            {
                if(index < 10)
                {
                    arr[index]=new SalesManager();
                    arr[index]->accept();
                    index++;
                }
                else{
                cout<<"Array is full"<<endl;
                }
            }
                break;
            
            case 5:{
            
            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(Manager))
                    arr[i]->display();
            }
            break;
            }
            case 6:
            {
            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(Salesman))
                    arr[i]->display();
            }
            break;
            }
            case 7:
            {
            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(SalesManager))
                    arr[i]->display();
            }
            
            break;
            }
            case 4:
            
            
            for(int i = 0; i < index; i++)
            {
                if(typeid(*arr[i]) == typeid(Manager))
                    countManager++;
            }

            for(int i = 0; i < index; i++)
            {
                if(typeid(*arr[i]) == typeid(Salesman))
                     countSalesman++;
                
            }

            for(int i = 0;  i < index; i++)
            {
                if(typeid(*arr[i]) == typeid(SalesManager))
                    countSalesManager++;
            }
            
            break;
            cout << "Manager- "<<endl;
            cout << "Salesman-"<<endl;
            cout << "Salesmanager-"<<endl;

            int count = 0;
            
            default:
            cout<<"Wrong choice"<<endl;
            break;
        }
        cout<<"end --------------------------"<<endl;
    }
}



        


        
    

             


    


            
            

            
            
    


    
