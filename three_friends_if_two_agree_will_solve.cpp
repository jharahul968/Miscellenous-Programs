#include <iostream>
using namespace std;
int main()
{
int n,a,b,c;
int i=0,j=0;
cin>>n;
for (i=0;i<n;i++){
    cin>>a>>b>>c;
    if (a==1){
        if (b==1 || c==1){
            j++;
        }
    }
    else if (b==1 && c==1)
    j++;
}
cout<<j;
    return 0;
}
