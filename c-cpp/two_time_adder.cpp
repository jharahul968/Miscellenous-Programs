#include <iostream>
using namespace std;
class Time{
    int hours, minutes, seconds;
    public:
    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int h,int m,int s){
        hours=h;
        minutes=m;
        seconds=s;
    }
    void display(){
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }
    Time operator +(Time t){
    Time t0;
    t0.seconds=seconds+t.seconds;
    if (t0.seconds>=60){
        t0.minutes+=t0.seconds/60;
        t0.seconds=t0.seconds%60;}
    t0.minutes+=minutes+t.minutes;
    if (t0.minutes>=60){
        t0.hours+=t0.minutes/60;
        t0.minutes=t0.minutes%60;
    }
    t0.hours+=hours+t.hours;

	// seconds=seconds1+seconds2;
	// minutes=minutes1+minutes2+(seconds/60);
	// hours=hours1+hours2+(minutes/60);
	// minutes=minutes%60;
	// seconds=seconds%60;

        return t0;
    
}
};
int main(){
    Time t1(10,12,16);
    Time t2(10,65,77);
    Time t;
    t=t1+t2;
    t.display();
    return 0;
}