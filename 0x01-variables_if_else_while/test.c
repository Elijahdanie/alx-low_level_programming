#include<stdio.h>

/**

*/

int main(void)
{
    int a = 97;
    int z = 122;
    int size = 122 -97;
    int iterator =0;
    char alphabets = [size];
    while(a < z)
    {
        alphabets[iterator] = char(a);
        iterator++;
        a++;
    }
    printf("%c", alphabets);
}
