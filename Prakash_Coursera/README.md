#Introduction to Embedded systems Software and Development Environments

- Author: Aditi Prakash
- Date: 02-04-2025

##Module1 - Exercise

###Implementation File Guidelines - stats.c

You are to write a couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. In addition, you will need to reorder this data set from large to small. All statistics should be rounded down to the nearest integer. After analysis and sorting is done, you will need to print that data to the screen in nicely formatted presentation. You will need to submit a version controlled repository of these 3 files.

- stats.c - Implementation file for your C-programming code

- stats.h -  Header file for your C-programming code

- README.md -  Includes information on the author and the project

You will need to write eight functions in the stats.c implementation file:

- main() - The main entry point for your program

- print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.

- print_array() -  Given an array of data and a length, prints the array to the screen

- find_median() - Given an array of data and a length, returns the median value

- find_mean() -  Given an array of data and a length, returns the mean

- find_maximum() -  Given an array of data and a length, returns the maximum

- find_minimum() -  Given an array of data and a length, returns the minimum

- sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )

To print data to the screen, you can use the printf function provided by the standard IO library (stdio.h). Each printed value should be nicely formatted with an indicator of the variable or index for each statistic value printed. 

Most of the functions in the stats.c file require 2 input parameters and one return value:

Input: A unsigned char pointer to an n-element data array

Input: An unsigned integer as the size of the array

Output: An unsigned char result from the function

###Header File Guidelines - stats.h

The stats.h header file needs to include declarations and documentation for the functions from the stats.c file. You will add function declarations for all required functions except main. With each declaration you need to provide comments with a description of the function, the inputs, and return value.
