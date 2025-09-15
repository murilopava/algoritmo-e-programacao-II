#include <iostream>
using namespace std;

int fatorial(int num) {
    if (num <= 1){
        return 1;
    }

    return (num * fatorial(num - 1));
}

int main(){

    cout << fatorial(4);
}