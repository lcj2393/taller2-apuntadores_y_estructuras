//EJERCICIO FINALIADO

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define n_etapa 3

using namespace std;

struct ciclista
{
    int hora;
    int minuto;
    int segundo;
};ciclista corredor[n_etapa],*p_corredor=corredor;

struct etapa
{
    int hora;
    int minuto;
    int segundo;
};etapa rec_final;//*p_rec_final=rec_final;

int main(){

    int residuo;
    for(int i=0;i<n_etapa;i++){
        cout<<"\t\tREGISTRO ETAPA("<<i+1<<"):\n\n";
        cout<<"\n*****************************************\n";
        cout<<"\nDigite cantidad de Horas recorridas: ";
            cin>>(*(p_corredor+i)).hora;
        cout<<"\nDigite cantidad de Minutos recorridos: ";
            cin>>(*(p_corredor+i)).minuto;
        cout<<"\nDigite cantidad de Segundos recorridos: ";
            cin>>(*(p_corredor+i)).segundo;
        cout<<"\n****************************************\n";
    }

    rec_final.hora=0;
    rec_final.minuto=0;
    rec_final.segundo=0;

    for(int i=0;i<n_etapa;i++){
        rec_final.hora=rec_final.hora+p_corredor[i].hora;
        rec_final.minuto=rec_final.minuto+p_corredor[i].minuto;
        rec_final.segundo=rec_final.segundo+p_corredor[i].segundo;
    }
    while(rec_final.minuto>60){
        if(rec_final.minuto>60){
            residuo=(rec_final.minuto-60);
            rec_final.minuto=residuo;
            rec_final.hora=rec_final.hora+1;
        }
    }

    while(rec_final.segundo>60){
        if(rec_final.segundo>60){
            residuo=(rec_final.segundo-60);
            rec_final.segundo=residuo;
            rec_final.minuto=rec_final.minuto+1;
        }
    }

    cout<<"\n\nEl recorrido total fue de "<<rec_final.hora<<" horas con "<<rec_final.minuto<<" minutos y "<<rec_final.segundo<<" segundos.";
    cout<<"\n\n";
    system("pause");
    return 0;
}
