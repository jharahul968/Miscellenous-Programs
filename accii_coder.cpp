#include <iostream> 
#include <string>
#include<cstdlib>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;
int main() {
	int ac;
	int n;
	char s;
	do{
	cout<<"Enter the number till which you want ascii code: "<<endl;
	cin>>n;
	for(ac=0;ac<=n;ac++){
	cout<<"Ascii code\t"<<"character"<<endl;
	cout<<ac<<"\t"<<(char)ac<<endl;}
	cout<<"\nEnter y to proceed the process and any other key to terminate the process: "<<endl;
	cin>>s;
}	while (s=='y');
return 0;
}
