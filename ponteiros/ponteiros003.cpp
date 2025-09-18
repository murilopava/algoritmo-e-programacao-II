#include <iostream>
using namespace std;

void troca(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int v = 3, l = 5;
    int *p1, *p2;

    p1 = &v;
 
}