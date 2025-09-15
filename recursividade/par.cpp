#include <iostream>
using namespace std;

bool par(int num){
    if (num == 0){
        return true;
    }

    if (num == 1){
        return false;
    }

    return impar(num - 2);
}

bool impar(int num){
    if (num == 0){
            return false;
        }

    if (num == 1){
        return true;
    }

    return par(num - 2);
}

int main(){
    cout << impar(11);
}
