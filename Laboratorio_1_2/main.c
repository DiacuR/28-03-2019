#include <stdio.h>
#include <stdlib.h>
#include "../Biblioteca.h"

int esUnNunero(char *cadena){                                   //

    printf("\npalabra por parametros %s", cadena);

    int indice = 0;
    int retorno = 0;

    while(cadena[indice] != '\0'){
        if(cadena[indice] < '0' || cadena[indice] > '9'){       //Comprueba que s
            break;
        }else{
            indice++;
        }
    }

    if(cadena[indice] != '\0'){
        retorno = 1;
    }
    return retorno;                                        //Retorna 0 cuando es una letra y 1 si es numerico
}
int main()
{
    char letra;
    char palabra [10];
    int numero ;
    int es;
/*
    scanf("%d", &numero);
    fflush(stdin);
    printf("\nnumero %d", numero);

    scanf("%c", &letra);
    fflush(stdin);
    printf("\nletra %c", letra);*/

    scanf("%s", &palabra);
    fflush(stdin);
    printf("\npalabra %s", palabra);
    es = esUnNunero(palabra);

    if( es == 1){
        printf("es correcto");
    }else{
        printf("no es correcto");
    }
/*
    int indice = 0;

    while( indice < 20 ){

        if(palabra[indice] == '\0')
        {
            printf("La barra 0 esta en %d", indice);
        }
            printf("\n letra: %c", palabra[indice]);
            indice++;
    }
   /* saludar();

    int miDato = 333;

    cambiarValor(miDato);
    printf("Mi dato es: %d", miDato);

    cambiarValorReferencia(&miDato);
    printf("\nMi dato es: %d", miDato);


    int edad;
    int retorno = 0;

    do{

        printf("ingrese una edad: ");
        fflush(stdin);
        retorno = scanf(" %d", &edad);          //Devuelbe 1 por el proceso pudo realizarze en caso de no realizarse devuelbe 0

    }while(retorno == 0);


    printf("la respuesta es:%d", retorno);
    printf("\nla edad es:%d", edad);


    int dato;

    dato = dividir(6);
    printf("El dato es dato: %d", dato);
    dato = dividir(0);
    printf("\nEl dato es dato: %d", dato);

    int unFactorial;

    unFactorial= factiorial(4);
    printf("\nEl factorial es: %d", unFactorial);

*/
    return 0;
}

