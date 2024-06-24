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
    int size, elemant;
    cout << "enrete the size of vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {

        cout << "enter tha elemanat in ataha aaray : ";
        cin >> elemant;
        vec1.push_back(elemant);
    }
dispalay(vec1);
cout<<endl:

vector<int>vec3(6,7);
dispalay(vec3);

    return 0;
}
