#include <iostream>
using namespace std;
const int size=3;
template <class T>
class vector{
    T *v;
    public:
    vector();
    vector (T *a);
    T operator *(vector &y);
    };
template <class T>
vector<T>::vector(){
    v=new T[size];
    for (int i=0;i<size;i++)
    v[i]=0;
}
template <class T>
vector<T>::vector(T *a){
    v=new T[size];
    for (int i=0;i<size;i++)
    v[i]=a[i];
}
template <class T>
T vector<T>:: operator *(vector &y){
    T sum=0;
    for (int i=0;i<size;i++)
        {sum+=(this->v[i])*(y.v[i]);}
    return sum;
}
int main() {
    system("cls");
    int a[]={1,2,3};
    vector<int> v1=a;
    int b[]={1,2,3};
    vector<int> v2=b;
    int x=v1*v2;
    cout<<"Scalar: "<<x;
    return 0;
}