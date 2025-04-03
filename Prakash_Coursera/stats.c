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
 * @brief Source file to calculate statistics of the given data
 *
 * Analyzes given data set and calculate mean, median, max, min, rounds down the result to 
 * the nearest integer and sorts the data in descending order
 *
 * @author Aditi Prakash
 * @date 02-04-2025
 *
 */

#include <stdio.h>
#include <stdint.h>
#include "stats.h"

/* Size of the Data Set */
#define DATASET_SIZE (40)

void print_statistics(unsigned char max, unsigned char min, unsigned char mean, unsigned char median)
{
  printf("\n------- Dataset statistics -------\n");
  printf("Maximum = %d\n", max);
  printf("Minimum = %d\n", min);
  printf("Mean = %d\n", mean);
  printf("Median = %d\n", median);
  printf("-------------------------------------\n");
}

void print_array(unsigned char *dataset, uint8_t size)
{
  printf("Sorted dataset in descending order\n");
  for (int i = 0; i < size; i++)
  {
    printf("dataset[%d] = %d\n",i, dataset[i]);
  }
}

unsigned char find_median(unsigned char* dataset, uint8_t size)
{ 
  float median = 0;
  if(size % 2 == 0)
  {
    median = (dataset[size/2] + dataset[size/2 - 1])/2;
  }
  else
  {
    median = dataset[size/2 - 1];
  }
  
  return (unsigned char)median;
}

unsigned char find_mean(unsigned char *dataset, uint8_t size)
{
  float mean = 0;
  float sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += dataset[i];
  }
  mean = sum/size;
  
  return (unsigned char)mean;
}

unsigned char find_maximum(unsigned char *dataset, uint8_t size)
{
  unsigned char maximum = dataset[0];
  
  for (int i = 0; i < size; i++)
  {
    if (maximum < dataset[i])
    {
      maximum = dataset[i];
    }
  }
  return maximum;
}

unsigned char find_minimum(unsigned char *dataset, uint8_t size)
{
  unsigned char minimum = dataset[0];
  
  for (int i = 0; i < size; i++)
  {
    if (minimum > dataset[i])
    {
      minimum = dataset[i];
    }
  }
  return minimum;
}

unsigned char* sort_array(unsigned char *dataset, uint8_t size)
{
  unsigned char temp = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (dataset[j] < dataset[j+1])
      {
        temp = dataset[j+1];
        dataset[j+1] = dataset[j];
        dataset[j] = temp;
      }
      else
      {
        continue;
      }
    }
  }
  return dataset;
}

void main() {

  unsigned char dataset[DATASET_SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char mean, median, maximum, minimum = 0;
  unsigned char *sorted_dataset;
  
  /* Statistics and Printing Functions Go Here */
  mean = find_mean(dataset, DATASET_SIZE);
  maximum = find_maximum(dataset, DATASET_SIZE);
  minimum = find_minimum(dataset, DATASET_SIZE);
  
  sorted_dataset = sort_array(dataset, DATASET_SIZE);
  median = find_median(sorted_dataset, DATASET_SIZE);
  
  print_array(sorted_dataset, DATASET_SIZE);
  print_statistics(maximum, minimum, mean, median);
  
}

/* Add other Implementation File Code Here */
