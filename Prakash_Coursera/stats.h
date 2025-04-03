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
 * @brief Header file to analyze and create statistics of given numbers
 *
 * <Add Extended Description Here>
 *
 * @author Aditi Prakash
 * @date 02-04-2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *
 * @param[in] unsigned char max - maximum value of the dataset
 * @param[in] unsigned char min - minimum value of the dataset
 * @param[in] unsigned char mean - mean value of the dataset
 * @param[in] unsigned char median - median value of the dataset
 *
 * @return NULL
 */
void print_statistics(unsigned char max, unsigned char min, unsigned char mean, unsigned char median);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * Prints the sorted array in descending order
 *
 * @param[in] unsigned char *dataset - pointer to the first element of the sorted array
 * @param[in] uint8_t size - size of the dataset
 *
 * @return NULL
 */
void print_array(unsigned char *dataset, uint8_t size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param[in] unsigned char *dataset - pointer to the first element of the sorted array
 * @param[in] uint8_t size - size of the dataset
 *
 * @return unsigned char - calculated median of the dataset
 */
unsigned char find_median(unsigned char* dataset, uint8_t size);


/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param[in] unsigned char *dataset - pointer to the first element of the array
 * @param[in] uint8_t size - size of the dataset
 *
 * @return unsigned char - mean of the dataset
 */
unsigned char find_mean(unsigned char *dataset, uint8_t size); 

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param[in] unsigned char *dataset - pointer to the first element of the array
 * @param[in] uint8_t size - size of the dataset
 *
 * @return unsigned char - maximum value in the dataset
 */
unsigned char find_maximum(unsigned char *dataset, uint8_t size);  

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param[in] unsigned char *dataset - pointer to the first element of the array
 * @param[in] uint8_t size - size of the dataset
 *
 * @return unsigned char - minimum value in the dataset
 */
 unsigned char find_minimum(unsigned char *dataset, uint8_t size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 *
 * The zeroth Element is the largest value, and the last element (n-1) is the smallest value.
 *
 * @param[in] unsigned char *dataset - pointer to the first element of the array
 * @param[in] uint8_t size - size of the dataset
 *
 * @return unsigned char* - pointer to the sorted dataset
 */
unsigned char* sort_array(unsigned char *dataset, uint8_t size); 

#endif /* __STATS_H__ */
