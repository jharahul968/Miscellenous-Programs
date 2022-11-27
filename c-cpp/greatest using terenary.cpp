#include <iostream> 
#include <string>
#include<cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{
int d,a,b,c;
cout<<"enter a,b,c"<<endl;
cin>>a;
cin>>b;
cin>>c;
d=(a>b)?((a>c)?a:c):(b>c?b:c);
cout<<d;
return 0;
}
