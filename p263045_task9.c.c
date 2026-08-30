#include<stdio.h>
int main()
{
double basic_salary = 85000.00;

double hra = 0.20 * basic_salary;
double ma = 0.10 * basic_salary;
double gross_salary = basic_salary + hra + ma;
double tax_deduction = 0.05 * gross_salary;
double net_salary = gross_salary - tax_deduction;

printf("                  MONTHLY SALARY SLIP                  \n");
printf("Basic Salary:\t\t\tPKR %.2lf\n", basic_salary);
printf("House Rent Allowance (20%%):\tPKR %.2lf\n", hra);
printf("Medical Allowance (10%%):\tPKR %.2lf\n", ma);
printf("                                                         \n");
printf("Gross salary:\t\t\tPKR %.2lf\n", gross_salary);
printf("Tax Deduction (5%%):\t\tPKR %.2lf\n", tax_deduction);
printf("                                                         \n");
printf("Net Payable Salary:\t\tPKR %.2lf\n", net_salary);
       return  0;
}
