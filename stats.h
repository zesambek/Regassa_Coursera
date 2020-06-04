 /***************************************************
 *Copyright (C)17-May-17-May-2020
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software Samson Bekele is not  liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief the declaration and documntion for the functions from the stats.c
 *
 * @author Samson Bekele
 * @date 17-May-20202
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/******************************************************************************
 *@brief     a function that prints the statistics of an array icluding minimum,maximum,mean,and median.
 *@param unsigned char  * ptr: Pointer to a data set
 *@param unsigned char count: Number of items in data set
 *           
 *@return print the statistics of an array 
 ***************************************************************************/
void  print_statistics (unsigned char * ptr, unsigned int  count);

/**************************************************************************
 *@brief given an array of data and a length,prints the array to the screen

 *@param unsigned char  * ptr: Pointer to a data set
 *@param unsigned int  count: Number of items in data set

 *@return prints the array to the screen.
 *         ************************************************************************************/
 void print_array (unsigned char * ptr, unsigned int  count);

  /**********************************************************************
 *@brief given an array of data and a length,returns the median value 
  *
  *
   *@param unsigned char  * ptr: Pointer to a data set
   *@param unsigned int  count: Number of items in data set
   *
   *@return returns the median
   ***********************************************************************************************/
    unsigned char find_median(unsigned char * ptr, unsigned int  count);
/**************************************************************
 *@brief given an array of data and a length,returns the mean  
 *
 *@param unsigned char  * ptr: Pointer to a data set
 *@param  unsigned int  count: Number of items in data set
 *
 *@return returns the mean
 *************************************************************************************/
      unsigned char find_mean(unsigned char * ptr, unsigned int  count);
      /**************************************************************
       *
       *@brief given an array of data and a length,returns the mean  
       *
       *@param unsigned char  * ptr: Pointer to a data set
       *@param unsigned int  count: Number of items in data set
       *        
       *@return   returns the maximum
       ********************************************************************************/
      unsigned char find_maximum(unsigned char * ptr, unsigned int  count);
/**************************************************************
 *@brief  given an array of data and a length,returns the minimum   
 *
 *@param  unsigned char  * ptr: Pointer to a data set
 *@param  unsigned int  count: Number of items in data set
 *        
 *@return  returns the minimum
 *****************************************************************/
 unsigned char find_minimum(unsigned char * ptr, unsigned int  count);
/**************************************************************
 *@brief given an array of data and a length ,sorts the array from te largest to smallest 
 *@param unsigned char  * ptr: Pointer to a data set
 *@param  unsigned int  count: Number of items in data set
 *         
 *@return  sorts the array from the largest to smallest
 ******************************************************************/
 void sort_array(unsigned char * ptr, unsigned int  count); 
 
#endif /* __STATS_H__ */
