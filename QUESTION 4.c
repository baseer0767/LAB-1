#include <stdio.h>
#include <stdlib.h>

int decToBinary(int n){
    if  (n == 0){
        return 0;
    }else{
        decToBinary(n/2);
        printf("%d",n%2);
    }
}
int main(){
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf("Decimal to Binary Converter:");
    decToBinary(n);
}
