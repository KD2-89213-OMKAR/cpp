#include<iostream>
using namespace std;

class Time
{
    private:
    int hr;
    int min;
    int sec;

    public:
    Time()
    {
        hr=10;
        min=50;
        sec=60;
        // cout<<"time()"<<endl;
    }
    Time(int h, int m, int s)
    {
        this->hr=h;
        this->min=m;
        this->sec=s;
    }
    int getHour()
    {
        return hr;
    }
    int getMinute()
    {
        return min;
    }
    int getSecond()
    {
        return sec;
    }
    
    void printTime()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }

    void setHour(int hr)
    {
        
        this->hr=hr;
    }
    
    void setMinute(int min)
    {
        this->min=min;
    }

    void setSeconds(int sec)
    {
        this->sec=sec;
    }

};

int main()
{
    Time **ptr=new Time*[2];
    ptr[0]= new Time();
    ptr[1]= new Time();

    for(int i=0; i<2; i++)
    {
        ptr[i]->printTime();
    }

    for(int i=0; i<2; i++)
    {
        delete ptr[i];
        ptr[i]=NULL;
        return 0;
    }
}
    
   

    








