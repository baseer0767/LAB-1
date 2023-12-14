#include <stdio.h>
#include <stdlib.h>

int main(){
   float height;
   float width;
   printf("Enter the height of a Rectangle:");
   scanf("%f",&height);
   printf("Enter the width of a rectangle:");
   scanf("%f",&width);
   printf("The Perimeter of Rectangle is:%f\n",2*(height+width));
   printf("The Area of Rectangle is:%f",height*width);

}
