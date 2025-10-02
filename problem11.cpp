#include <iostream>
using namespace std;
void displayEven(int number) {

    while (number/10!=0) {
        if (number%2==0) {
            cout<<number%10<<" ";
            number=number/10;

        }
        else
            number=number/10;
    }
}
int main() {
    int number;
    cin>>number;
    displayEven(number);
    return 0;
}
