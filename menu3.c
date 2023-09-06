#include <stdio.h>

int main() 
{

    printf("1) Papaya Salad     Price 40 Bath\n");
    printf("2) Grilled Chicken  Price 80 Bathu\n");
    printf("3) Sticky Rice      Price 10 Bath\n");

    int me1,me2,me3;
    int p1,p2,p3;

    printf("Enter Menu Number 1:");
    scanf("%d",&me1);

    printf("Enter Menu Number 2:");
    scanf("%d",&me2);

    printf("Enter Menu Number 3:");
    scanf("%d",&me3);


    printf("First order is ");
    switch ( me1 ) {
        case 1:
            printf("Papaya Salad (40 Bath)\n");
            p1 = 40;
            break;
        case 2:
            printf("Grilled Chicken (80 Bath)\n");
            p1 = 80;
            break;
        case 3:
            printf("Sticky Rice (10 Bath)\n");
            p1 = 10;
            break;
        default:
            printf("Out of scope");
    }

    printf("Second order is ");
    switch ( me2 ) {
        case 1:
            printf("Papaya Salad (40 Bath)\n");
            p2 = 40;
            break;
        case 2:
            printf("Grilled Chicken (80 Bath)\n");
            p2 = 80;
            break;
        case 3:
            printf("Sticky Rice (10 Bath)\n");
            p2 = 10;
            break;
        default:
            printf("Out of scope");
    }

    
    printf("Third order is ");
    switch ( me3 ) {
        case 1:
            printf("Papaya Salad (40 Bath)\n");
            p3 = 40;
            break;
        case 2:
            printf("Grilled Chicken (80 Bath)\n");
            p3 = 80;
            break;
        case 3:
            printf("Sticky Rice (10 Bath)\n");
            p3 = 10;
            break;
        default:
            printf("Out of scope");
    }
    
    printf("\nTotal price is %d+%d+%d = %d", p1,p2,p3, p1+p2+p3);
    return 0;
}
