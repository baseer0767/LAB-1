#include <stdio.h>
#include <stdlib.h>

int main(){
   float height;
   printf("Enter the height of a Person:");
   scanf("%f",&height);
   if (height < 150){
        printf("Dwarf");
}else if (height == 150){
        printf("Average");
}else if (height >= 165){
    printf("Tall");
}
}
