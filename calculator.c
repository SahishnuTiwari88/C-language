#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,option;

    while(1)
    {


    printf("\n1 sum");
    printf("\n2 difference");
    printf("\n3 multiply");
    printf("\n4 division");
    printf("\n5 modulus");
    printf("\n6 exit from program");

    printf("\n enter your option");
    scanf("%d",&option);
    printf("\n enter two number");
    scanf("%d %d",&a,&b);
    switch(option)
    {
       case 1: printf("\n sum of %d and %d is %d",a,b,a+b);
       break;
       case 2: printf("\n difference of %d and %d is %d",a,b,a-b);
       break;
       case 3: printf("\n multiply of %d and %d is %d",a,b,a*b);
       break;
       case 4: printf("\n division od%d and %d is %d",a,b,a/b);
       break;
       case 5: printf("\n modulus of %d and %d is %d",a,b,a%b);
       break;
       case 6:exit(0);
       default  : printf("invalid option entered");
    }
getch();
    }
}
