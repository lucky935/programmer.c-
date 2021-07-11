#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{

    int a;
    cin >> a;
    int b;
    cin >> b;
    int m = max(a, b);
    cout << "m is " << m<<endl;

    return 0;
}
