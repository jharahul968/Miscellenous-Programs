/*
Ticket Office


You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each group of 5 people is getting a discount, which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.

Sample Input:
55
28
15
38
63

Sample Output:
42.5

The youngest age is 15, so the group gets a 15% discount from the total price, which is $50 - 15% = $42.5
*/


#include <iostream>
using namespace std;

int main() {
    int ages[5];
    float smallest=0;
    float ticketPrice;
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
        smallest=ages[0];
    for (int i=1;i<5;++i){
        if (ages[i]<smallest)
        smallest=ages[i];}
    }



    cout<<"Smallest number is "<<smallest<<endl;
    //your code goes here
    ticketPrice=50-(smallest/100)*50;
    cout<<ticketPrice;
    
    return 0;
}