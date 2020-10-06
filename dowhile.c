int dowhile1(){
    int i=1,j,sum=0;
    printf("Enter a NUmber");
    scanf("%d",&j);
    do{
        printf("%d",i);
        sum+=sum+i;
        i++;

    }
    while(i<=j);
    printf("\nSum=%d",sum);
        return 0;
}
