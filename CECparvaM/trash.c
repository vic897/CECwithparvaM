#include<stdio.h>
int main(){
    int a;
    printf("Enter integers:");
    scanf("%d",&a);
   // scanf("%d",&b);
if(a % 10 == 0 && a % 5 == 0){
    printf("The Entered Integer is Divisible by 5 & 10");}
    else if(a % 10 == 0 && a % 5 != 0){printf("The Entered Integer is Divisible by 10 but not by 5");}
    else if(a % 10 != 0 && a % 5 == 0){printf("The Entered Integer is Divisible by 5 but not by 10");}
    else
    {
            printf("The Above Enterd Integer is not Divisible by 5 or 10");}
   
return 0;
}