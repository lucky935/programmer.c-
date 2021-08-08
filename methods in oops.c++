#include <iostream>
using namespace std;
class myclass
{
public:
    void mymethod()
    {
        cout << "hello";
    }
};

int main()
{
    myclass myobj;
    myobj.mymethod();

    return 0;
}
