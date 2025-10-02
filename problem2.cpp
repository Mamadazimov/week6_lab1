#include <iostream>
using namespace std;
float acceleration(float v1,float v2, float t) {
    return ((v2-v1)/t);
}
int main() {
    float v1,v2,t;
    cin>>v1>>v2>>t;
    cout<<acceleration(v1,v2,t);
    return 0;
}