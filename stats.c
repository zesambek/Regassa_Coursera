/******************************************************************************
 * Copyright (C) 2020 by Samson Bekele
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Samson Bekele is  not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 *@brief a combination of functions that performs the statistical analytics on a dataset.
 *  and prints out statistics to the command line.
 *
 *
 * @author Samson Bekele
 * @date 17-may-2020
 *
 *
 * a couples of functions that can anlyze an array of unsigned char data items 
 * and report analytics on the maximum,minimum,mean,and median of the data set.
 * reordering the data set from large to small and printing the data to the screen in nicely formatted  presentation.
 *
 *********************************************************************/



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

  /* Other Variable Declarations Go Here */
  /* Statistics and  printing Functions Go Here */
/*unsigned char min = find_minimum(test,SIZE);
unsigned char max = find_maximum(test,SIZE);
unsigned char  mean = find_mean(test,SIZE);
unsigned char  median = find_median(test,SIZE);

printf("mean %d ",mean);*/

     print_statistics(test,SIZE);
// sort_array(test,SIZE);
// print_array(test,SIZE);
/* for(unsigned int i=0;i<SIZE;i++)
 {
	 printf("%d",test[i]);

 }
*/ 
}
/* Add other Implementation File Code Here */

 
/******************************************************************************
 *Function: print_statistics
 *Description:
 *       a function that prints the statistics of an array icluding minimum,maximum,mean,and median.
 *
 *Parameters:
 *          
 *       unsigned char  * ptr: A unsigned char pointer to an n-element data array
 *        unsigned int count: Number of items in data set
 *         
 *
 *Return:
 *      print the statistics of an array 
*******************************************************************/
void  print_statistics (unsigned char * ptr, unsigned int count){
	unsigned char max;
	unsigned char min;
	unsigned char median;
	         min = find_minimum(ptr,count);
		  max = find_maximum(ptr,count);
        unsigned char mean = find_mean(ptr,count);
		 median = find_median(ptr,count);
		   printf("The maximum value %d\n",max);
		   printf("The minimum  value %d\n",min);
		   printf("The mean  value %d\n",mean);
		   printf("The median value %d\n",median);
}

/**************************************************************************
 * function: print_array
 *    Description:given an array of data and a length,prints the array to the screen
 *    Parameters:
 *             unsigned char  * ptr: A unsigned char pointer to an n-element data array
 *             unsigned int count: Number of items in data set
 *     Return: 
 *          prints the array to the screen.
 ************************************************************************************/
 void print_array (unsigned char * ptr, unsigned int count){
            for(unsigned int i = 0;i<count;i++)
	    {
		    printf(" %d\t ", ptr[i]);
				   
            }
 }
 
/**************************************************************
 *function: find_median
 *Description:given an array of data and a length,returns the median value 
 *Parameters:
 *          unsigned char  * ptr: A unsigned char pointer to an n-element data array
 *          unsigned int count: Number of items in data set
 *Return:
 *     returns the median
 *************************************************************************************/
 unsigned char find_median(unsigned char * ptr, unsigned int count){
                             sort_array(ptr,count);
			     unsigned char  median=0;
	  if(count%2 == 0) median = (ptr [(count/2)-1] + ptr [count/2])/2;
		           else median=ptr [count/2];	  
	            return median;
 }
 
/**************************************************************
 *function: find_mean
 *Description:given an array of data and a length,returns the mean  
 *Parameters:
 *          unsigned char  * ptr: A unsigned char pointer to an n-element data array
 *          unsigned int count: Number of items in data set
 *Return: 
 *      returns the mean
 * *************************************************************************************/
  unsigned char find_mean(unsigned char * ptr, unsigned int count){
                      unsigned char mean=0;
		      for(unsigned char i=0;i < count;i++) mean += ( ptr[i]/count);
		   return   mean;
	      
           }

/**************************************************************
 *function: find_maximum
 *Description:given an array of data and a length,returns the mean  
 *Parameters
 *          unsigned char  * ptr: A unsigned char pointer to an n-element data array
 *                 unsigned int count: Number of items in data set
 *Return: 
 *         returns the maximution: 
  *******************************************************************************/
unsigned char find_maximum(unsigned char * ptr,unsigned int count){

        unsigned char max;
	max=ptr[0];
               for(unsigned char i=0;i < count;i++)
		  {
                     if(max < ptr[i]) max = ptr[i];

                   }
	       return max;

	      
    
     }
/**************************************************************
 *function: find_minimum
 *description:given an array of data and a length,returns the minimum   
 *Parameters
 *          unsigned char  * ptr: A unsigned char pointer to an n-element data array
 *          unsigned char  char  count: Number of items in data set
 *Return: 
 *         returns the minimum
****************************************************************/
 unsigned char find_minimum(unsigned char * ptr, unsigned int count){
             unsigned char min = ptr[0];
	    for(unsigned char i=0;i < count;i++)
	       {
                  if( min > ptr[i]) min = ptr[i];

               }

	    return min;
 
 }
/**************************************************************
 *function:sort_array
 *description:given an array of data and a length,sorts the array from largest to smallest  
 *    
 *Parameters
 *               unsigned char  * ptr: A unsigned char pointer to an n-element data array
 *               unsigned int count: Number of items in data set
 *Return: 
 *      sorts the array from the largest to smallest
 *****************************************************************/
 void sort_array(unsigned char * ptr, unsigned int count){
                        
	               unsigned int i;
		       int j;
		       unsigned char temp;
		   for(i=0;i<count;i++)
		      {
		         temp=ptr[i];
		         j=i-1;	
			while(j>=0 && ptr[j] < temp)
		            {
		              ptr[j+1]=ptr[j];
	                      j--;
	                     }
                        ptr[j+1]=temp;
                      }			
	  }

