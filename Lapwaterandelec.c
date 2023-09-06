#include<stdio.h>
int main(void)
{
    char name[101];
    int elec,water;
    float ec=10.25,wt=50.50;
    double electotalprice,watertotalprice,Total;
    printf("Enter customer name =");
    scanf("%s", name);
    printf("Enter elec unit =");
    scanf("%d",&elec);
    printf("Enter water unit =");
    scanf("%d",&water);
    
    printf("Customer name\t\t:%s\n",name);
    printf("elec price\t\t:%.2f\n",ec);
    printf("water price\t\t:%.2f\n",wt);
    printf("elec unit\t\t:%d\n",elec);
    printf("water unit\t\t:%d\n",water);

    electotalprice=elec*ec;
    printf("elec total price\t:%.2f\n",electotalprice);
    watertotalprice=water*wt;
    printf("water  total price\t:%.2f\n",watertotalprice);
    Total= electotalprice+watertotalprice;
    printf("Total\t\t\t:%.2f",Total);
    
    return 0;
}