#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ID;
    int TWH;
    float ARH;
    printf("Enter an Employee's ID:");
    scanf("%d",&ID);
    printf("Enter total hours worked in a month:");
    scanf("%d",&TWH);
    printf("Enter the amount received per hour:");
    scanf("%f",&ARH);
    printf("The ID of an Employee is:%d\n",ID);
    printf("The Salary of an Employee is: %.2f",TWH*ARH);
}
