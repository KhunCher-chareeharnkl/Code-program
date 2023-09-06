#include<stdio.h>
int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age >=18)
        printf("OK\n");
    else
        printf("Kook Kook!!!\n");
    return 0;
}