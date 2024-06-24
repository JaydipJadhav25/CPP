#include <iostream>
#include <fstream>
using namespace std;

class emplyoee
{
    string name[20];
    int id;
    double salary;

public:
    void setdata()
    {

       cin>>name;
        cin>> id;
        cin>> salary;
    }

    void display()
    {

        cout << "Emter namme : " << name;
        cout << "Emter  id: " << id;
        cout << "Emter salary: " << salary;
    }
};

int main()
{
    // string a;
    //  a= "jaydip jadhva" ;

    // ofstream out;
    // out.open("jaydip09.txt");
    // out<<a;
    // out.close();

    // ifstream in ;
    // in.open("jaydip09.txt");
    // in>>a;
    // cout<<a;
    // in.close();

    cout << "::::::::::::::::::::::::::::   ||  pr oject no 1 || :::::::::::::::::::::";

    emplyoee o[5];
    fstream f;
    int i, n;

    f.open("jaydip09.txt");
    cout << "\n hoe w many employee inf do you stroe : " ;
    cin >> n;
    cout << "\n enter inf of employee in this format (name/id/salary): ";
    for (i = 0; i < n; i++)
    {
        cout << "enter inf of " << i << "employee";
        o[i].setdata();
        f.write((char *)&o[i], sizeof o[i]);
    }
    f.close();

    f.open("jaydip09.txt", ios::in);
    cout << "\ninfromation of employee as follow : ";
    for (i = 0; i < n; i++)
    {

        f.write((char*)&o[i], sizeof o[i]);
        o[i].display();
    }

    f.close();

    return 0;
}