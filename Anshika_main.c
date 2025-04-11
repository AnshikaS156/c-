#include <stdio.h>
#include "Anshika_headerc.h"
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    fibonacci(n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    if(perfect_number(n))
    printf("%d is a perfect number\n",n);
    else
    printf("%d is not a perfect number\n",n);
}
 