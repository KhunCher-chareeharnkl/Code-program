#include<stdio.h>
int main(void)
{
    char grade;
    int Age;
    float GPA;
    double NextGPA;
    printf("Enter Grade : ");
    scanf("%c",&grade);
    printf("Enter Age : ");
    scanf("%d",&Age);
    printf("Enter GPA : ");
    scanf("%f",&GPA);
    printf("Enter My Next GPA : ");
    scanf("%lf",&NextGPA);
    printf("My grade\t=%c\n",grade);
    printf("My Age\t\t=%d\n",Age);
    printf("My GPA\t\t=%.2f\n",GPA);
    printf("My Next GPA\t=%.4f",NextGPA);

    return 0;
}
