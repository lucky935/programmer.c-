#include<iostream>
using namespace std;
class myclass{
    public:
    void mymethod();
};
// def method outside the class
void myclass::mymethod(){
    cout<<"yoo";

}


int main(){
    myclass myobj;
    myobj.mymethod();
    
    
    return 0;
}
