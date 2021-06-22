#include "holberton.h"

/**
 * _abs- this computes the absolute value of an integer
 * 
 * *val: this is the value to be amde absolute
 */

int _abs(int val)
{
    if(val >= 0)
    {
        return (val);
    }
    else if (val < 0)
    {
        return (-1 * val);
    }
    return (0);
}
