#include<stdio.h>
int main(void)
{
    int i;
    int s,e;
    printf("Enter start =");
    scanf("%d",&s);
    printf("Enter end =");
    scanf("%d",&e);
    for (i=s; i<=e; i++ ) 
        {   printf("2 x %d = %d \n",i, 2*i);  }
}