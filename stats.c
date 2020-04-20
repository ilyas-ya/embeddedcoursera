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
 * @brief Implementation file for the C-programming code.
 *
 * This stats.c file is used for the implementation of the following functions:
 * 	1. main() - The main entry point for the program.
 * 	2. print_statistics() - A function that prints the statistics of an array incl. min., max., mean and median values.
 * 	3. print_array() - Given an array of data and a length, prints the array to the screen
 * 	4. find_median() - Given an array of data and a length, returns the median value
 * 	5. find_mean() - Given an array of data and a length, returns the mean value 
 * 	6. find_maximum() - Given an array of data and a length, returns the maximum value
 * 	7. find_minimum() - Given an array of data and a length, returns the minimum value
 * 	8. sort_array() - Given an array of data and a length, sorts the array from largest to smallest value;
 *  and the declaration as well as documentation is provided in the stats.h file.
 *
 * @author Yahia Aissa Ilyas
 * @date 20.04.2020
 *
 */
#include <stdio.h>
#include "stats.h"
/* Size of the Data Set */
#define SIZE (40)
void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Other Variable Declarations*/
	unsigned char maximum = 0;
	unsigned char minimum = 0;
	unsigned char median = 0;
	unsigned char mean = 0;
  /* Statistics and Printing Functions*/
	minimum = find_minimum(test, SIZE);
	maximum = find_maximum(test, SIZE);
	mean = find_mean(test, SIZE);
	median = find_median(test, SIZE);
	print_array(test, SIZE);
	print_statistics(minimum, maximum, mean, median);
}
/* Add other Implementation File Code Here */
void print_statistics(unsigned char array_min, unsigned char array_max, unsigned char array_mean, unsigned char array_median){
	printf("\n\n---- NOW PRINTING STATISTICS ---\n");  
	printf("The minimum value of the array is: %d\n", array_min);  
	printf("The maximum vaue of the array is: %d\n", array_max);
  printf("The mean value of the array is: %d\n", array_mean);  
	printf("The median value of the array is: %d\n", array_median);
}
void print_array(unsigned char * ptr_array, unsigned int array_size){
	unsigned char i;
	printf("\n--- NOW PRINTING THE ARRAY ---\n");  
	printf("FYI: The array is printed with the following format: [index] = value;\n"); 
	for (i = 0; i < array_size - 1; i++){		// loop through values while printing
		printf("[%d] = %d, ",i,*ptr_array);
		ptr_array++;
	}
	printf("[%d] = %d;",i,*ptr_array);
}
unsigned char find_median(unsigned char * ptr_array, unsigned int array_size){
	unsigned char sorted_array[array_size];
	unsigned char i;
	unsigned char index;
	for (i = 0; i < array_size; i++){		// to avoid overwriting of the initial array while sorting
		sorted_array[i] = *ptr_array;
		ptr_array++;
	}
	sort_array(sorted_array, array_size);	// bubble sort algo
	if (array_size%2 != 0){
		index = array_size/2;
		return sorted_array[index];
	}
	else{
		index = array_size/2;
		return (sorted_array[index] + sorted_array[index - 1])/2;
	}
}
unsigned char find_mean(unsigned char * ptr_array, unsigned int array_size){
  unsigned char i;
	unsigned int sum = 0;								// unsigned char not possible due to max. value (255) limitation
	for(i = 0; i < array_size; i++){		// loop through array
		sum += *ptr_array;								// sum all elements up; sum = sum + new element
		ptr_array++;											// use next reference address
	}																		// end for
	return (sum/array_size);
}																			// end find_mean
unsigned char find_maximum(unsigned char * ptr_array, unsigned int array_size){	
	unsigned char i;
	unsigned char max = *ptr_array;			// Dereference Operator to define the value of the first element of the array to be the initial max.
	ptr_array++;												// next reference address
	for(i = 1; i < array_size; i++){		// continue with the second element and loop through the array		
		if ( *ptr_array >= max ){					// compare if the value of the next element is >= the "old" max.
			max = *ptr_array;								// if TRUE than define element as "new" max.
		}																	// end if
		ptr_array++;											// use next reference address
   }																	// end for
	return max;
 } 																		// end find_maximum
unsigned char find_minimum(unsigned char * ptr_array, unsigned int array_size){
	unsigned char i;
	unsigned char min = *ptr_array;			// Dereference Operator to define the value of the first element of the array to be the initial min.
	ptr_array++;												// next reference address
	for(i = 1; i < array_size; i++){		// continue with the second element and loop through the array		
		if ( *ptr_array <= min ){					// compare if the value of the next element is >= the "old" min.
			min = *ptr_array;								// if TRUE than define element as "new" min.
		}																	// end if
		ptr_array++;											// use next reference address
   }																	// end for
	return min;
}																		  // end find_minimum
void sort_array (unsigned char * ptr_array, unsigned int array_size){
	unsigned char n; 
	unsigned char i;
	unsigned char aux_i;								// auxiliary variable 1
	unsigned char	aux_ii;								// auxiliary variable 1
	for (n = array_size; n > 1; n--){		// bubblesort algo
		for (i = 0; i < n - 1; i++){
			if (ptr_array[i] < ptr_array[i + 1]){
				aux_i = ptr_array[i];
				aux_ii = ptr_array[i + 1];
				ptr_array[i + 1] = aux_i;
				ptr_array[i] = aux_ii;
			}
		}
	}
}
