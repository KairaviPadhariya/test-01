#include<stdio.h>
int main()
{
int burger=150,pizza=200,pasta=120,sandwich=100,frenchfries=80,total;
int ch;
printf("1.Burger       - 150/-\n");
printf("2.Pizza        - 200/-\n");
printf("3.Pasta        - 120/-\n");
printf("4.Sandwich     - 100/-\n");
printf("5.French Fries - 80/-\n");
do
{
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
burger = 150;
total+=burger;
printf("Total cost of burger = %d\n",total);
break;
case 2:
pizza = 200;
total+=pizza;
printf("Total cost of pizza = %d\n",total);
break;
case 3:
pasta = 120;
total+=pasta;
printf("Total cost of pasta = %d\n",total);
break;
case 4:
sandwich = 100;
total+=sandwich;
printf("Total cost of sandwich = %d\n",total);
break;
case 5:
frenchfries = 80;
total+=frenchfries;
printf("Total cost of french fries = %d\n",total);
break;
case 0:
printf("Total coast = %d\n",total);
break;
default:
printf("enter a valid number\n\n.");
break;
}
}
while(ch!=0);
printf("your total bill is: %d\n\n",total);
    printf("ID : 24DCS041_Chandni Kothari\n\n");

return 0;
}
