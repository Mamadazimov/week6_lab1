#include <iostream>
using namespace std;
//Define the function
void swapNum(int &num1, int &num2) {
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
}
int main() {
    int num1=10, num2=20;
    cout<<"Before swap: num1 = "<<num1<<endl;
    cout<<"Before swap: num2 = "<<num2<<endl;
    swapNum ( num1, num2) ;
    cout<<"After swap: num1 = "<<num1<<endl;
    cout<<"After swap: num2 = "<<num2<<endl;
    return 0;
}
