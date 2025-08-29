#include <iostream>
using namespace std;


struct Horario {
    int hora, min, seg;

};

void somarHorario(Horario tempo1, Horario tempo2){
    int dia = 0;
    int somaHora = 0;
    int somaMin = 0;
    int somaSeg = 0;

    somaSeg = tempo1.seg + tempo2.seg;
    if(somaSeg >= 120){
        somaMin += 2;
        somaSeg -= 120;
    } else if(somaSeg >= 60){
        somaMin += 1;
        somaSeg -= 60;
    }
    somaMin += tempo1.min + tempo2.min;
    if(somaMin >= 120){
        somaHora += 2;
        somaMin -= 120;
    } else if(somaMin >= 60){
        somaHora += 1;
        somaMin += 60;
    }

    somaHora += tempo1.hora + tempo2.hora;
    if(somaHora >= 48){
        dia += 2;
    } else if(somaHora >= 24)
        dia += 1;

    cout << "Dia:" << dia << " Hora:" << somaHora << " Minutos:" << somaMin << " Segundos:" << somaSeg;
}


int main(){

    Horario horario;
    Horario horario2;

    horario.hora = 21;
    horario.min = 42;
    horario.seg = 57;

    horario2.hora = 15;
    horario2.min = 3;
    horario2.seg = 57;

    somarHorario(horario, horario2);
    
    return 0;
}
