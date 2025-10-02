#include<iostream>
using namespace std;
void fun(float a) {
    cout<< 2*3.1415*a<<endl<< 3.1415*a*a;
}
void fun(float x, float y) {
    cout<<"p "<<2*(x+y);
    cout<<endl<<"a "<<x*y;

}

int main() {
    float a;
    cin>>a;
    fun(a);
    float x,y;
    cin>>x>>y;
    fun(x,y);
    return 0;
}