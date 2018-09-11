#include <stdio.h>
#include <stdlib.h>
#include "functionsForProjects.h"
#define CANT 4
int main()
{
    int arr[CANT]={66666,22,9,54};
    int i;
    for(i=0;i<CANT;i++){
        if(getEntero(&arr[i],"Ingrese numero:","Algo salio mal",0,200,2)){
            arr[i]=-1;
        }
    }
    bubbleSort(arr,CANT);
    for (i=0;i<CANT;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
    printArray(arr,CANT);
    return 0;
}
