#include <iostream>
using namespace std;

bool binarySearch(int array[5], int num){
    int tamanho = sizeof(array);
    int maior = array[tamanho];
    int menor = array[0];
    int meio = (maior + menor)/ 2;

    while(true){
        if(num > meio){
            menor = meio;
            meio = (maior + menor) / 2; 
        } 
        else if(num < meio){
            maior = meio;
            meio = (maior + menor) / 2;
        }
        else if(num == meio){
            return true;
        }
    }
}

int main(){
    int array[5] = {2,5,8,13,25};
    int num;

    cin >> num;

    cout << binarySearch(array, num);

    return 0;
}