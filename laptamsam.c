#include <stdio.h>
int main()
{
    int c = 2;
    int i = 1;
    while (i <= 12) {
        int result = c * i;
        printf("%d * %d = %d\n", c , i, result);
        i++;
    } 
    return 0;
}