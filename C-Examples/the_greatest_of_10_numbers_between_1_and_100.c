/**
 * @file The greatest of 10 numbers between 1 and 100.c
 * @author Zahir Hayrullah (https://www.zaherr.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * @arabic أكبر 10 أعداد بين 1 و 100
 * @turksih 1 ile 100 arası 10 sayının en buyugu.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief 
 * define get max value function  
 * 
 * @return int 
 */
int getMaxValue(void);

/**
 * @brief  Main function to start project
 * 
 * @return int 
 */
int main()
{
    int y;

    y = getMaxValue();

    return 0;
}

/**
 * @brief Get the Max Value object
 * 
 * @return int 
 */
int getMaxValue(void)
{
    int random_number, max;

    srand(time(NULL));

    max = 0;

    for (int j = 0; j < 10; j++)
    {
        random_number = rand() % 100;
        printf("%d", random_number);
        if (j != 9)
        {
            printf(", ");
        }

        if (max < random_number)
        {
            max = random_number;
        }
    }
    printf("\n-----------------------------------\n");
    printf("Max value = %d\n", max);

    return max;
}
