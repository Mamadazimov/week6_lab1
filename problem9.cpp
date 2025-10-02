#include <iostream>
using namespace std;
float product(float num1,float num2) {
    return num1*num2;
}
float sum(float num1,float num2) {
    return num1+num2;
}
float substract(float num1,float num2) {
    return num1-num2;
}
float devision(float num1,float num2) {
    return num1/num2;
}
int main() {
    float num1,num2;
    cin>>num1>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;
    cout<<"The substract is "<<substract(num1,num2)<<endl;
    cout<<"The devision is "<<devision(num1,num2)<<endl;
    cout<<"The product is "<<product(num1,num2)<<endl;
    return 0;
}