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
        cout<<'enter the salary-'<<endl;
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
        
        acceptManager();
        Employee::accept();
    }
    void display()
    {
        displayManager();
        Employee::display();
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
        cout<<"commission"<<endl;
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
            Manager::accept();
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

    int main()
    {
        Employee e1;
        e1.accept();
        e1.display();

        Salesman sm;
        sm.display();
        sm.accept();

        Employee *eptr = new Manager();
        Employee *eptr = new SalesManager();
        eptr->accept();
        eptr->display();

    }
        
            

        
    

  


