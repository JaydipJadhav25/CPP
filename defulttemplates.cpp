#include <iostream>
using namespace std;

template <class T1=int , class T2=float >

class jay
{
public:
    T1 data1;
    T2 data2;
    jay(T1 A, T2 B)
    {

data1=A;
data2=B;

    }
    void display()
    {

        cout<<"tha avalus of data1 is : "<<data1<<endl;
        cout<<"tha avalus of data2 is : "<<data2<<endl;

    }
};

int main()
{

    // cout<<"jaydip jadhav ";
    cout << " defult templates "<<endl;

jay< int , float >j(100 ,10);
 j.display();
jay< int , char >k(100 ,'h');
k.display();
jay<>l(10,10.22);
l.display();


    return 0;
}