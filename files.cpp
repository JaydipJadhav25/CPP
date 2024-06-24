#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 int main()
 {
    string a,b ;
a="jaydip dhananajay jadhva";
b="anil nale ";
//writing oprastion in files C
/*
ofstream out;
out.open("jaydip.txt");
out<<a;
*/

//reading oprastion in files C

//ifstream in("jaydip.txt");
//in>>b;
//cout<<b;


//print all data using while loop 

/*ifstream in ;
in.open("jaydip.txt");


while (in.eof()==0)
{
getline(in,b);
cout<<b<<endl;
}
in.close();*/
ofstream on;
on.open("jaydip.txt");
on<<b;

    return 0;
 }