#include <iostream>
using namespace std;
int main(){
    int a;
    unsigned long long int m,n,p,q,r;
    cout<<"enter n,m,a: ";
    cin>>m;
    cin>>n;
    cin>>a;
    if (n%a!=0)
    p=1+ (n/a);
    else
    p=n/a;

    if (m%a!=0)
    q=1+ (m/a);
    else
    q=m/a;

    r=p*q;
    cout<<r;
    return 0;
}
