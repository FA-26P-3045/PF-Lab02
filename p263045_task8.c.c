#include<stdio.h>
int main()
{
double principal = 250000.00;
float rate = 8.5;
int time = 3;

double interest = (principal * rate * time) / 100.0;
double total_amount = principal + interest;
double monthly_installment = total_amount / (time * 12.0);

printf("             BANK LOAN INTEREST SUMMARY              \n");
printf("Principal Amount:   PKR %.2lf\n", principal);
printf("Annual Interest Rate:   %.2f%%\n", rate);
printf("Loan Duration:          %d years(36 Months)\n", time);
printf("                                                       \n");
printf("Total  Accrued Interest:  PKR %.2lf\n", interest);
printf("Total Payable Amount:     PKR %.2lf\n", total_amount);
printf("Monthlly Installment:     PKR %.2lf\n", monthly_installment);
        return. 0;
}