#include <iostream> 
#include <string>
#include<cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
const long delay=10000000L;
int main() 
{
int tic;
cout<<"\nHow often should the tone be output? ";
cin>>tic;
do{
	for(long i=0;i<delay;++i);
	cout<<"Now the tone!\a"<<endl;
}
while(--tic>0);
cout<<"End of the acoustic interlude!\n";
return 0;
}