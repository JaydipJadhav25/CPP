#include <iostream>
using namespace std;

template <class T>
class myclass
{

public:
    T n1;

    myclass(T a)
    {

        n1 = a;
    }
   void  display(void)
    {

        cout << "the value of n1 is " << n1 << "passing throug tempalates custum daata types " << endl;
    }
};

int main()
{

    cout << "using tamplates " << endl;
    myclass<int> my(11000);
    my.display();

    myclass<float> my2(8.2044545);
    my2.display();

    myclass<double> my3(8.20676878);
    my3.display();

    myclass<char> my4('j');
    my4.display();

    return 0;
}
