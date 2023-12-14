#include <stdio.h>
#include <stdlib.h>

int f(int n){
    if (n <= 0){
        return 0;
    }else if (n == 1){
        return 0;
    }else if(n == 2){
        return 1;
    }else{
        return f(n-1)+f(n-2);
}
}
int main(){
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf("Fibonacci series for n=%d ",n);
    for (int i=1;i <=n; i++){
        printf("%d ",f(i));
    }printf("\n");
    return 0;
   }
