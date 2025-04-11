int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }

    return fact;
}
void fibonacci(int n){
    int t1 = 0,t2 = 1, term;
    for(int i=1;i<=n;i++){
    printf("%d",t1);
    term = t1 + t2;
    t1=t2;
    t2=term;
}
printf("\n");
}

int perfect_number(int n) {
    int sum = 0;


    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        return 1; 
    else
        return 0; 
}