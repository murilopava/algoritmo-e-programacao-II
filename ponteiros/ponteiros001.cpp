#include <iostream>
using namespace std;

int main(){
    int *pont1, v = 5;

    pont1 = &v;

    cout << *pont1 << endl;
    cout << pont1;
}