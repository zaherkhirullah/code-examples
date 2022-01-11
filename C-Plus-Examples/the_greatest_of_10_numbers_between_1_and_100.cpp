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
 * @lang C Plus Plus (C++)
 *
 */

#include <iostream> //header definitions..
#include <time.h>

using namespace std;

/**
 * @brief 
 * define get max value function  
 * 
 * @return int 
 */
int getMaxValue(void);

/**
 * @brief 
 * Main is start program function 
 * @return int 
 */
int main()
{
    int maxValue = getMaxValue();

    system("pause"); // pause screen to show program results.

    return 0;
}

/**
 * @brief Get the Max Value object
 * 
 * @return int 
 */
int getMaxValue(void)
{
    srand(time(NULL)); // defined to generate random value

    int max = 0;
    int random_number;

    for (int j = 0; j < 10; j++)
    {
        random_number = rand() % 100;
        cout << random_number;
        if (j != 9)
        {
            cout << ", ";
        }

        if (max < random_number)
        {
            max = random_number;
        }
    }
    cout << "\n-----------------------------------\n";
    cout << "Max value :" << max << endl;

    return max;
}
