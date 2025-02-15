#include <stdio.h>


void main() {


    int i = 100;
    int* j = &i;
    
    printf("[i] Value: %d; Address: %d", i, &i);
    printf("\n");
    printf("[j] Value: %d; Address: %d; Value (dereferencing) %d", j, &j, *j);
    
    printf("\n");
    printf("[j] using j as an lvalue (*j = 300)...");
    
    *j = 300;

    printf("\n");
    printf("[i] Value: %d; Address: %d", i, &i);
    printf("\n");
    printf("[j] Value: %d; Address: %d; Value (dereferencing) %d", j, &j, *j);
    

}