/*  07.c

    Rafael Bonilla
    March 23, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Exercise 7

    Using the shortcuts described in Section 8.2. shrink the initializer for the segments array
    (Exercise 6) as much as you can.

*/

#include <stdio.h>

int main(void)
{

    const int segments[10][7] = {

    {1, 1, 1, 1, 1, 1}, /* 0 */
    {[2] = 1, [3] = 1}, /* 1 */
    {[0] =  1, [1] = 1, [3] = 1, [4] = 1, [6] = 1}, /* 2 */
    {[0] = 1, [1] = 1, [2] = 1, [3] = 1, [6] = 1}, /* 3 */
    {[1] = 1, [2] = 1, [5] = 1 ,[6] = 1}, /* 4 */
    {[0] = 1, [2] = 1, [3] = 1, [5] = 1, [6] = 1}, /* 5 */
    {[0] = 1, [2] = 1, [3] = 1, [4] = 1, [5] = 1, [6] = 1}, /* 6 */
    {1, 1, 1}, /* 7 */
    {1, 1, 1, 1, 1, 1}, /* 8 */
    {[0] = 1, [1] = 1, [2] = 1, [4] = 1, [5] = 1, [6] = 1} /* 9 */

};

}