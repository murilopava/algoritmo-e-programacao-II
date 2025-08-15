#include <iostream>
#include <algorithm>
using namespace std;


void conversor(float R, float G, float B, float  H, float &S, float &V){


    R = R / 255.0f;
    G = G / 255.0f;
    B = B / 255.0f;

    float maximo = max({R,G,B});
    float minimo = min({R,G,B});

    float delta = maximo - minimo;

    // Calcular o H
    if(delta == 0){
        H = 0;
    }
    else if(maximo == R){
        H = 60 * ((G - B) / delta);
    }
    else if(maximo == G) {
        H = 60 * (((B - R) / delta) + 2);
    }
    else if(maximo == B){
        H = 60 * (((R - G) / delta) + 4);
    }


    //Calcular o S
    if(maximo == 0){
        S = 0;
    }

    else{
        S = delta / maximo;
    }


    //Calcular o V 
    V = maximo;

    
}

int main(){

    float R, G, B;
    float H, S, V;

    cout << "Valor para o Red(0-255): ";
    cin >> R;

    cout << "Valor para o Green(0-255): ";
    cin >> G;

    cout << "Valor para o Blue(0-255): ";
    cin >> B;

    conversor(R,G,B, H,S,V);

    cout << "Valor de H: " << H << endl;
    cout << "Valor de S: " << S << endl;
    cout << "Valor de V: " << V;
}