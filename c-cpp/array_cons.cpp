#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
	A():a(0),b(0){
		cout<<"Construction!!"<<endl;
	};
	A(int a,int b):a(a),b(b){};
	~A(){
		cout<<"destruction!!"<<endl;
	}
	void getAB(){
		cout<<a<<b<<endl;
	}
};
int main(){
	system("cls");
A *aa=new A(2,3);
aa->getAB();
delete aa;

aa=new A[2];
for (int i=0;i<2;i++){
	aa[i]=A(i,i+1);
	cout<<"For array "<<i<<": ";
	aa[i].getAB();
}
delete [] aa;
return 0;
}