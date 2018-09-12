// C program for implementation of Bubble sort
#include <stdio.h>
#include <stdlib.h>
#include "functionsForProjects.h"
static int getI(int* pBuffer){

    return scanf("%d",pBuffer);

}
static char getC(char* pBuffer){

    return scanf("%c", pBuffer);


}

static float getF(float* pBuffer){

    return scanf("%f",pBuffer);

}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int getEntero(int *pInt,char msg[], char msgError[], int min, int max, int reintentos) {
    int returnNum=-1;
    int bufferInt=0;
    if(pInt != NULL && msg != NULL && msgError != NULL && min<=max && reintentos>=0) {
        do{
            reintentos--;
            printf("%s", msg);
            fflush(stdin);
            if(getI(&bufferInt)&& bufferInt>=min && bufferInt<=max){
                *pInt = bufferInt;
                returnNum = 0;
                break;

            }else{
                printf("%s", msgError);

            }


        }while(reintentos>0);

    }
    return returnNum;


}

int getFloat(float *pFloat,char msg[], char msgError[], int min, int max, int reintentos) {
    int returnNum=-1;
    float bufferFloat=0;
    if(pFloat != NULL && msg != NULL && msgError != NULL && min<=max && reintentos>=0) {
        do{
            reintentos--;
            printf("%s", msg);
            fflush(stdin);
            if(getF(&bufferFloat)&& bufferFloat>=min && bufferFloat<=max){

                *pFloat = bufferFloat;
                returnNum = 0;
                break;

            }else{
                printf("%s", msgError);

            }


        }while(reintentos>0);

    }
    return returnNum;


}
int getChar(char *pChar,char msg[], char msgError[], char minChar, char maxChar, int reintentos) {
    int returnNum=-1;
    char bufferChar;
    if(pChar != NULL && msg != NULL && msgError != NULL && minChar<=maxChar && reintentos>=0) {
        do{
            reintentos--;
            printf("%s", msg);
            fflush(stdin);
            printf("Paso por aca \n");
            if(getC(&bufferChar)&& bufferChar>=minChar && bufferChar<=maxChar){

                *pChar = bufferChar;
                returnNum = 0;
                break;

            }else{
                printf("%s", msgError);

            }


        }while(reintentos>0);

    }
    return returnNum;


}
