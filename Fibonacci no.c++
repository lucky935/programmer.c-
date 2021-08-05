#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    int zero_even_fibonaci_no=0;
    int first_even_fibonaci_no=2;

    cout<<"zero_even_fibonaci_no"<<" "<<first_even_fibonaci_no<<" ";
    int a=0, b=2, c=2;

    while(c<=x){
        c=4*b+a;
        a=b;
        b=c;
        if(c>=x)break;
        cout<<c<<" ";

    }


    return 0;
}
