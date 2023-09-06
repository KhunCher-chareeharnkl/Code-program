#include<stdio.h>
int main(void)
{
    int b;
    int base,s,e;
    printf("Enter base =");
    scanf("%d",&base);
    printf("Enter start =");
    scanf("%d",&s);
    printf("Enter end =");
    scanf("%d",&e);
    for (b=s;  b>=e; b-- ) 
        {   printf(" %d x %d = %d \n",base,b, base*b);  }
    return 0;
}