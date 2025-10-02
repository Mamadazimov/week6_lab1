#include <iostream>
using namespace std;
int maximum(int a,int b,int c) {
    int maximum;
    if (a>b && a>c)
        maximum=a;
    else if (b>a && b>c)
        maximum=b;
    else if (c>a && c>b)
        maximum=c;
    else
        cout<<"Im not ready for that";

    return maximum;
}
int minimum(int a,int b,int c) {
    int minimum=0;
    if (a<b && a<c)
        minimum=a;
    else if (b<a && b<c)
        minimum=b;
    else if (c<a && c<b)
        minimum=c;
    else
        cout<<"Im not ready for that";
    return minimum;

}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Maximum is "<<maximum(a,b,c)<<endl;
    cout<<"Minimum is "<<minimum(a,b,c);
    return 0;
}
