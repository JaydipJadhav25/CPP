#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marks;

    marks["jay"] = 989;
    marks["deep"] = 969:
   
    marks["jaydip"] = 1000;

    marks.insert({{"jaydip",10101},{"amam",20202}});
    map<string, int>::iterator iter;//itrator is type of pointer ani mg to pointr 
    //ause kaarata na disponiter karun use kaarava alahatap
    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    return 0;
}