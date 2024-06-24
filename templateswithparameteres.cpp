#include <iostream>
using namespace std;
// this is perametrical templates
template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;

    myclass(t1 a, t2 b)
    {

        data1 = a;
        data2 = b;
    }

    void display()
    {

        cout << this->data1 << endl
             << this->data2;
    }
};
int main()
{

    myclass<char, int> my('j', 10);
    my.display();

    myclass<float, int> my1(2.22, 10);
    my1.display();

    myclass<char, int> my2('k', 10);
    my2.display();

    myclass<int, int> my3(100, 10);
    my3.display();

    return 0;
}