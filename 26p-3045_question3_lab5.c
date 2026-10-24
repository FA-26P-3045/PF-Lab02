#include<stdio.h>
int main()
{
int laptop_price;
int current_savings;
int monthly_savings;
int month = 0;
printf("Enter the laptop price\n");
scanf("%d", &laptop_price);
printf("Enter the current savings\n");
scanf("%d", &current_savings);
printf("Enter the monthly savings\n");
scanf("%d", &monthly_savings);


while(current_savings<laptop_price)
{
current_savings=current_savings+monthly_savings;
printf("Month%d: savings = %d\n", month, current_savings);
month++;
}

printf("sara can buy laptop after%d months\n", month);

return 0;
}
