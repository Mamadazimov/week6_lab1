#include <iostream>
using namespace std;
float product(float a,float b) {
    return(a*b);
}
int main() {
    float a,b,output;
    cin>>a>>b;
    cout<<product(a,b);
    return 0;
}