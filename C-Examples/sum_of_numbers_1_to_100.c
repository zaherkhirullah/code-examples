/**
 * @file Sum of Numbers 1 to 100.c
 * @author Zahir Hayrullah (https://www.zaherr.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * @arabic مجموع الأعداد من 1 إلى 100
 * @turksih 1 ile 100 Arasi Sayilarin Toplami.c
 *
 */

#include <stdio.h> //header definitions..
#include <stdlib.h>

/**
 * @brief 
 * Program that gives the sum of numbers from 1 to 100
 * @return int 
 */
int main()
{
    int sum = 0;
    // Increment the numbers one by one up to 100 with the for loop
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    printf("sum of numbers from 1 to 100 = %d.", sum);

    fflush(stdin); //Emptying system input parameters..
    getchar();     //It waits until the value is entered from the screen.
    return 0;
}
