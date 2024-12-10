#include<stdio.h>
int main (){
float marks[3], total;

printf("enter price:rice:");
scanf("%f", &marks[0]);
printf("enter price:egg:");
scanf("%f", &marks[1]);
printf("enter price: daal: ");
scanf("%f", &marks[2]);

total=marks[0]+marks[1]+marks[2];
printf("the gst is : %f ",.18*total);
return 0;



}