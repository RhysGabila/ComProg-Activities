#include <iostream>
using namespace std;

int main () {
int a;
cout << "Enter a number from 1 to 10: ";
cin >> a;

for (int i = 1; i <= 10; i++) {
    cout << a << " x " << i <<  " = " << a*i << " \n";
}

system("PAUSE");

}
