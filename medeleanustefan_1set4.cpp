#include <iostream>

using namespace std;

int a,b;

int main()
{
    cout <<"introduceti numerele ";
    cin >>a >>b;
    if(a==b){cout<<a;return 0;}
    while(a!=b){if(a>b)a=a-b;
    else b=b-a;}
    cout<<a;
    return 0;
}
