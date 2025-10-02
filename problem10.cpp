#include <iostream>
using namespace std;
float getTriangularNumber(int n) {
    float triangularNumber;
    triangularNumber=(n*(n+1))/2;
    return triangularNumber;
}
int main() {
    for (int i=1; i<=75; i++) {
        cout<<getTriangularNumber(i)<<" ";
        if (i%5==0)
            cout<<endl;

    }
}