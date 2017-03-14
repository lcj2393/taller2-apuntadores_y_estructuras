//EJERCICIO FUNCIONANDO CORRECTAMENTE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedir_datos(char *);
void comparador(int *,char *);

int main(){

    char nombre[30], *p_nombre=nombre;
    int nletras, *p_nletras=&nletras;
    pedir_datos(p_nombre);
    *p_nletras=strlen(p_nombre);
    comparador(p_nletras,p_nombre);
    printf("\n\n");
    system("pause");
}
void pedir_datos(char *p_nombre){
    printf("\t\t\nREGISTRO DE NOMBRE PARA VALIDAR CANTIDAD DE VOCALES\n\n");
    printf("\nDigite Nombre: ");
    scanf("%s",p_nombre);
}

void comparador(int *p_nletras,char *p_nombre){
    int n_vocales=0;
    for(int i=0;i<*p_nletras;i++){
        if(*(p_nombre+i)=='a' || *(p_nombre+i)=='A' || *(p_nombre+i)=='e' || *(p_nombre+i)=='E' || *
            (p_nombre+i)=='i' || *(p_nombre+i)=='I' || *(p_nombre+i)=='o' || *(p_nombre+i)=='O' || *
            (p_nombre+i)=='u' || *(p_nombre+i)=='U'){

                n_vocales++;

            }
    }

        printf("\n\nLa cantidad de volcales que tiene son: %d ",n_vocales);
}
