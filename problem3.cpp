#include<iostream>
using namespace std;
void fun(float a) {
    cout<< 2*3.1415*a<<endl<< 3.1415*a*a;

}
int main() {
    float a;
    cin>>a;
    fun(a);
    return 0;
}