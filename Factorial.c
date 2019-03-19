#include <stdio.h>
long factorial(int);
int main()
{
    int number;
    long fac; //factorial variable
    do{
    printf("type the factorial you wanna find:");
    scanf("%d",&number);
    if(number<0)
        printf("please enter a positive number (>=0)\n");
    }while(number<0);
    fac=factorial(number);
    printf("\nthe factorial of %d! is %d",number,fac);

}
long factorial(int num){
    if(num==0)
        return 1;
    else
        return num*factorial(num-1);
}
