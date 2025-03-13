void fibonacciSeries(int n){
    if(n<=0){
            printf("Invalid input\n");
    }else{
    int a=0;
    int b=1;
    for(int i=1; i<=n; i++){
        if(i==1){
            printf("%d ",a);
            continue;
        }
        if(n==2){
            printf("%d ",b);
            continue;
        }
        int c= a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    printf("\n");}
}
