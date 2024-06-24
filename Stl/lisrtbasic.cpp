#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst1)
{
list<int>::iterator it;
    for (it  = lst1.begin(); it != lst1.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> lst1;
    lst1.push_back(12);
    lst1.push_back(45);
    lst1.push_back(67);

    list<int>::iterator iter;
    // iter=lst1.begin();
    // cout<<*iter;
display(lst1);

cout<<endl;
list<int>lst2;
lst2.push_back(23);
lst2.push_back(89);
lst2.push_back(55);

display(lst2);
/*cout<<endl;
lst2.pop_back();
display(lst2);
cout<<endl;
lst2.pop_front();
display(lst2);*/


lst1.sort();
lst2.sort();
cout<<endl;
cout<<" sorting a list 1 : " ;
display(lst1);
cout<<endl;
cout<<" sorting a list 2 : " ;
display(lst2);
lst1.merge(lst2);
cout<<"\nmerging tha  tow list : ";
display(lst1);

cout<<endl;
lst1.reverse();
display(lst1);


    return 0;
}