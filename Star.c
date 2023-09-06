#include<stdio.h>
int main()
{
    int r;
    printf("Enter Row = ");
    scanf("%d",&r);
    int i,s;
    for (i=1; i<r+1 ;i++){
        for(s=0; s<r; s++){
            if (i+s>=r)
            printf("*");
            else
            printf(" ");
    	}
    	printf("\n");
  }
  return 0;
 }