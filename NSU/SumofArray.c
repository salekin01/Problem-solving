
#include <stdio.h>
#include <stdlib.h>

int sum(int *ptr, int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        if(ptr[i] % 5 != 0){
            sum += ptr[i];
        }
    }
    return sum;
}

void mainSumofArray(){
    int size;
    int result;

    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int *arr = malloc (sizeof (int) * size);

    printf("\nEnter the elements of the array: \n");
    for(int i=0; i<size; i++){
        scanf("\n%d",&arr[i]);
    }
    result = sum(arr,size);
    printf("The sum of the array (excluding the numbers that are divisible by 5) is: %d", result);
}
