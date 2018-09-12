#include <stdio.h>
#include <stdlib.h>
#include "functionsForProjects.h"
#define CANT 4
int main()
{
    float arr[CANT]={6.5,6.3,2.4,0};
    char c='j';
    int i;
   /* for(i=0;i<CANT;i++){
        if(getFloat(&arr[i],"Ingrese numero:","Algo salio mal",0,200,2)){
            printf("Entro aca");
            arr[i]=-1;
        }
    }*/
    if(getChar(&c,"Ingrese var :  ","Algo salio mal",'a','z',0)){
            printf("La letra ingresada es un %c ", c);

    }
    bubbleSort(arr,CANT);
    /*for (i=0;i<CANT;i++){
        printf(" %f ", arr[i]);
    }*/
    printf("\n");
   // printArray(arr,CANT);
    return 0;
}
