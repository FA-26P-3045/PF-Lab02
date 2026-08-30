#include<stdio.h>
int main()
{
char char_value = 'M';
int int_value = 42;
float float_value = 3.141590;
double double_value = 98.765432;
printf("Type Name\tVariable Value\tSize in memory\n");
printf("                                          \n");
printf("Char\t\t'%c'\t\t\t\t%zu byte(s)\n", char_value, sizeof(char));
printf("int\t\t\t%d\t\t\t\t%zu byte(s)\n", int_value, sizeof(int));
printf("float\t\t%f\t\t%zu byte(s)\n", float_value, sizeof(float));
printf("double\t\t%lf\t\t%zu byte(s)\n", double_value, sizeof(double));
                return  0;
}