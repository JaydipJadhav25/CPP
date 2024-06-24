#include <iostream>
#include <vector>
#include <string>
using namespace std;
void dispalay(vector<int> &v)//vertor gives refres to v 
{

    for (int i = 0; i<v.size(); i++)//using ref variabl follow mrhoth
    {
        
        cout <<v[i] << " ";
    }
}


int main()
{
    // crating a vector
    vector<int> vec1; // zero element vector and declaaring
  //  int size, elemant;
 //   cout << "enrete the size of vector : ";
 //   cin >> size;
 //   for (int i = 0; i < size; i++)
 //   {
//
 //       cout << "enter tha elemanat in ataha aaray : ";
  //      cin >> elemant;
  //      vec1.push_back(elemant);
  //  }
  vec1.push_back(5);
  vec1.push_back(52);

  vec1.push_back(3);

  vec1.push_back(555);
  vec1.push_back(6455);



  vec1.push_back(76);
  vec1.push_back(9);


  vec1.push_back(5);

dispalay(vec1);
vec1.pop_back();
cout<<endl;
dispalay(vec1);

cout<<endl;
//vector<int>::iterator iter= vec1.begin();
//vec1.insert(iter,23232);
//dispalay(vec1);

vector<int>::iterator iter= vec1.end();
vec1.insert(iter,45,23232);
dispalay(vec1);


    return 0;
}
