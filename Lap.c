#include<stdio.h>
int main(void){
    char grade = 'A';
    int Age = 19;
    float GPA = 3.99;
    double NextGPA = 4.000;
    printf("My grade\t=%c\n",grade);
    printf("My Age\t\t=%d\n",Age);
    printf("My GPA\t\t=%.2f\n",GPA);
    printf("My Next GPA\t=%.4f",NextGPA);
    return 0;
}