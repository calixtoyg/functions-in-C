#include <stdio.h>
#include <stdlib.h>
#define CANT 10
int main()
{
    int arr[CANT]={66666,22,9,33,551,22,976,1,4,4};
    bubbleSort(arr,CANT);
    printArray(arr,CANT);
    return 0;
}
