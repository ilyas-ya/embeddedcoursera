/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief description: it's the file that contains the data that we will use to
   make our analysis.
 * We have an array of unsigned char data items and report analytics on the
   maximum, minimum, mean, median, and reorder this data set from large to 
   small and print that data to the screen.
 * 
 *
 * @author Ilyas Yahia Aissa
 * @date 16/04/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE 40

void main() {

 unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	print_statistics(test);


}









/* Add other Implementation File Code Here */
int find_minimum(unsigned char T[]) {
int min ;
	for (int i=0 ; i < SIZE ; i++) {
		if (T[i] < min) {
		min = T[i];
		}
	}
return min;
}


int find_maximum(unsigned char T[]) {
int max = T[0];
	for (int i=1 ; i < SIZE ; i++) {
		if (T[i] > max) {
		max = T[i];
		}
	}
return max; 
}




int find_mean(unsigned char T[]) {
int mean=0;
	for( int i=0; i < SIZE ; i++) {
	mean += T[i];
	}
mean /= SIZE;

return mean;
}



int find_median(unsigned char T[]) {

sort_array(T);
int median=0;
median = T[(SIZE/2)-1];

return median;

}


void print_array(unsigned char T[]) {
	for (int i=0 ; i < SIZE; i++) {
	printf("%d ,",T[i]);
	}
}




void print_statistics(unsigned char T[]) {
int max=0;
int min=0;
int mean=0;
int median=0;

max = find_maximum(T);
min = find_minimum(T);
mean = find_mean(T);
median = find_median(T);

printf("maximum=%d, minimum=%d, mean=%d, median=%d \n",max,min,mean,median);


}



void sort_array (unsigned char T[]) {
int aux=0;
	for(int i=0 ; i< SIZE; i++) {
		for (int j=i+1 ; j< SIZE; j++) {
			if ( T[j] > T[i]) {
			aux = T[j];
			T[j] = T[i];
			T[i] = aux;
			}
		}
	}
}

