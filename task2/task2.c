//
//  task2.c
//  assignment1
//
//  Created by Benjamin Price on 2/19/24.
//

#include <stdio.h>
#include <pthread.h>

#define NUM_FACTORS 5 //Number of threads to be created
int arr[NUM_FACTORS] = {1,2,3,4,5}; //array containing the numbers of factorial
int result = 0; //Global variable to store the final result

typedef struct {
    int num; //Number for which factorial is to ba calculated
    int factorial; //Factorial of the number
} ThreadParams;

void *factorion(void *arg) {
    ThreadParams *params = {ThreadParams *}arg;
    
    //print thread id
    //calculate factorial and print
}

int main(void) {
    
}
