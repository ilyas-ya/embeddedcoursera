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
 * @file stats.h 
 * @brief Header file for the C-programming code which is implemented in the stats.c file.
 *
 * This stats.h file is including declarations and documentations for the functions from the stats.c file.
 * For the following functions:
 * 	1. print_statistics() - A function that prints the statistics of an array incl. min., max., mean and median values.
 * 	2. print_array() - Given an array of data and a length, prints the array to the screen
 * 	3. find_median() - Given an array of data and a length, returns the median value
 * 	4. find_mean() - Given an array of data and a length, returns the mean value 
 * 	5. find_maximum() - Given an array of data and a length, returns the maximum value
 * 	6. find_minimum() - Given an array of data and a length, returns the minimum value
 * 	7. sort_array() - Given an array of data and a length, sorts the array from largest to smallest value;
 *  a declaration and documentation is provided in this file.
 *
 * @author Yahia Aissa Ilyas
 * @date 20.04.2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
/* Declarations and Function Comments/Documentation*/ 
/**
 * @brief A function that prints the statistics of an array incl. min., max., mean and median values.
 *
 * This function takes as input: the minimum value of a data array, the maximum value of a data array,
 * the mean value of a data array as well as the median value of a data array;
 * and uses the printf function provided by the standard IO library,"stdio.h",
 * to print those values of the data array to the screen.
 *
 * @param1 unsigned char array_min is an unsigned char with the minimum value of a data array
 * @param2 unsigned char array_max is an unsigned char with the maximum value of a data array
 * @param3 unsigned char array_mean is an unsigned char with the mean value of a data array
 * @param4 unsigned char array_median is an unsigned char with the median value of a data array
 *
 * @return: nonvalue-returning function (void) as only the printf function is used
 */
void print_statistics(unsigned char array_min, unsigned char array_max, unsigned char array_mean, unsigned char array_median);
/**
 * @brief Based on a given array of data and its length, the function prints the array to the screen.
 *
 * This function takes as input an unsigned char pointer to an n-element data array as well as 
 * an unsigned integer as the size, n, of the array and uses the printf function provided by the standard IO library,
 * "stdio.h", to print the data array to the screen.
 *
 * @param1 unsigned char * ptr_array is an unsigned char pointer to an n-element data array
 * @param2 unsigned int array_size is an unsigned integer as the size of the array
 *
 * @return: nonvalue-returning function (void) as only the printf function is used
 */
void print_array(unsigned char * ptr_array, unsigned int array_size);
/**
 * @brief Based on a given array of data and its length, the function returns the median value of the array.
 *
 * This function takes as input an unsigned char pointer to an n-element data array as well as 
 * an unsigned integer as the size, n, of the array, calculates the median value of the array and returns the median value of the array
 * with an unsigned char. To calcualte the media value of the array the following steps are proceed:
 * 	1) The array is sorted using the sort_array() function
 * 	2) If the length of the array is odd-numbered (use modulo operator, %) than the middle number of the sorted array is the median value.
 *	3) If 2) is not true, than the median value is calculate by taking the average of the two middle numbers of the sorted array.
 *
 * @param1 unsigned char * ptr_array is an unsigned char pointer to an n-element data array
 * @param2 unsigned int array_size is an unsigned integer as the size of the array
 *
 * @return: unsigned char with the median value of the array
 */
unsigned char find_median(unsigned char * ptr_array, unsigned int array_size);
/**
 * @brief Based on a given array of data and its length, the function returns the mean value of the array.
 *
 * This function takes as input an unsigned char pointer to an n-element data array as well as 
 * an unsigned integer as the size, n, of the array, calculates the mean value of the array and returns the mean value of the array
 * with an unsigned char.
 *
 * @param1 unsigned char * ptr_array is an unsigned char pointer to an n-element data array
 * @param2 unsigned int array_size is an unsigned integer as the size of the array
 *
 * @return: unsigned char with the mean value of the array
 */
unsigned char find_mean(unsigned char * ptr_array, unsigned int array_size);
/**
 * @brief Based on a given array of data and its length, the function returns the maximum value of the array.
 *
 * This function takes as input an unsigned char pointer to an n-element data array as well as 
 * an unsigned integer as the size, n, of the array, calculates the maximum value of the array and returns the maximum value of the array
 * with an unsigned char.
 *
 * @param1 unsigned char * ptr_array is an unsigned char pointer to an n-element data array
 * @param2 unsigned int array_size is an unsigned integer as the size of the array
 *
 * @return: unsigned char with the maximum value of the array
 */
unsigned char find_maximum(unsigned char * ptr_array, unsigned int array_size);
/**
 * @brief Based on a given array of data and its length, the function returns the minimum value of the array.
 *
 * This function takes as input an unsigned char pointer to an n-element data array as well as 
 * an unsigned integer as the size, n, of the array, calculates the minimum value of the array and returns the minimum value of the array
 * with an unsigned char.
 *
 * @param1 unsigned char * ptr_array is an unsigned char pointer to an n-element data array
 * @param2 unsigned int array_size is an unsigned integer as the size of the array
 *
 * @return: unsigned char with the minimum value of the array
 */
unsigned char find_minimum(unsigned char * ptr_array, unsigned int array_size);
/**
 * @brief Based on a given array of data and its length, the function sorts the array from largest to smallest value.
 *
 * This function takes as input an unsigned char pointer to an n-element data array as well as 
 * an unsigned integer as the size, n, of the array and sorts the array from largest to smallest value (using bubblesort algo).
 *
 * @param1 unsigned char * ptr_array is an unsigned char pointer to an n-element data array
 * @param2 unsigned int array_size is an unsigned integer as the size of the array
 *
 * @return:  nonvalue-returning function (void).
 */
void sort_array(unsigned char * ptr_array, unsigned int array_size);
#endif /* __STATS_H__ */
