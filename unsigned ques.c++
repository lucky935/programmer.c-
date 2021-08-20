#include <iostream>
using namespace std;

int main()
{
    if (sizeof(int) > -1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
} 

//In c++ WHEN INTEGER IS COMPARED WITH AN UNSIGNED IT,THE INT IS PROMOTED TO UNSIGNED NEGATIVE NUMBERS ARE STORED IN 2'S COMPLEMENT FORM AND UNSIGNED VALUE OF 2'S COMPLEMENT FORM IS MUCH HIGHER 
THAN THE SIZE OF INT....
