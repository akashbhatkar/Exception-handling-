//program to demostrate the return from constructor
#include <iostream>

using namespace std;

class A
{
public:int x;
    char ch;
    A()
    {
        cout<<"Enter value of x"<<endl;
        cin>>x;
        //x=10;
        ch='A';
        throw ch;
        throw x;
        cout<<"default Constructor"<<endl;
    }
    ~A()
    {
     cout<<"distructor"<<endl;
       }
    void getdata()
    {
        cout<<"value of x is "<<x<<endl;

    }
};

int main()
{
    try {

        A obj;
        obj.getdata();
    }
    catch (int a)
    {
        cout<<"return of constructor is "<<a<<endl;
    }
    catch (char b)
    {
        cout<<"return of constructor is "<<b<<endl;
    }


}
