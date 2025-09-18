#include <iostream>
using namespace std;

void hm(int minutos,int *h, int *m){
    
    if(minutos < 60){
        *h = 0;
        *m = minutos;
    } else {
        *h = minutos / 60;
        *m =  minutos % 60;
    }

}

int main(){
    int min, hora, minutos = 60;

    hm(minutos, &hora, &min);

    cout << minutos << endl;
    cout << hora << endl;
    cout << min;
}