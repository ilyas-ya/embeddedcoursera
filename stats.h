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
 * @brief it contains all the prototype of the functions
 *
 * We have an array of unsigned char data items and report analytics on the 
   maximum, minimum, mean, median, and reorder this data set from large to 
   small and print that data to the screen.

 * 
 * @author Ilyas Yahia Aissa
 * @date 16/04/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * find_minimum(): it returns the minimum
 * find_maximum(): it returns the maximum
 * find_mean() : it returns the mean
 * find_median() : it returns the median value
 * print_array() : prints the array to the screen
   print_statistics() : prints the statistics of an array including min max 
   mean and median.
 * @return <Add Return Informaiton here>
 */

int find_minimum(unsigned char T[]);
int find_maximum(unsigned char T[]);
int find_mean(unsigned char T[]);
int find_median(unsigned char T[]);
void print_array(unsigned char T[]);
void print_statistics(unsigned char T[]);



#endif /* __STATS_H__ */
