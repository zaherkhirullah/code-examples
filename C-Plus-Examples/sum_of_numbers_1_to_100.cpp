/**
 * @file Sum of Numbers 1 to 100.cpp
 * @author Zahir Hayrullah (https://www.zaherr.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 * @arabic مجموع الأعداد من 1 إلى 100
 * @turksih 1 ile 100 Arasi Sayilarin Toplami.c
 * @lang C Plus Plus (C++)
 * 
 */

#include <iostream> //header definitions..

using namespace std;

/**
 * @brief 
 * Main is start program function 
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

    std::cout << "sum of numbers from 1 to 100 =" << sum << endl;

    system("pause"); // pause screen to show program results.
    return 0;
}
