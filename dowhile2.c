int dowhile2(){
    int i=1;
    char c;
    int choice,dummy;
    do{
        printf("Please Enter Choice: ");
        printf("\n  1.Print Hello");
        printf("\n  2.Print Java ");
        printf("\n  3.Exit ");
        printf("\nselect Choice : ");
        scanf("%d",&choice);
        i++;
        switch(choice){
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("Java");
            break;
        case 3:
            exit(0);
            default:
            printf("Please enter valid choice");

        }
        printf("\nDo you want to enter more? : ");
        scanf("%d",&dummy);
        scanf("%d",&c);
    }

    while(c=='y');
    return 0;
}
