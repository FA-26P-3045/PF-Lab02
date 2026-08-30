#include<stdio.h>
int main()
{
float pf_marks = 88.0; 
float calc_marks = 76.5; 
float phy_marks = 82.0;
int pf_cred = 3;
int calc_cred = 3;
int phy_cred = 2;

float total_weighted_score = (pf_marks * pf_cred) + (calc_marks * calc_cred) + (phy_marks * phy_cred);
int total_cred = pf_cred + calc_cred + phy_cred;
float weighted_average = total_weighted_score / total_cred;

Printf("                     SEMESTER ACADEMIC REPORT                \n");
printf("Course\t\t\tCredit Hours\tObtained Marks\n");
printf("                                            \n");
printf("Programming Fund.\t   %d\t\t  %.2f\n", pf_cred, pf_marks);
printf("Calculus\t\t   %d\t\t  %.2f\n", calc_cred, calc_marks);
printf("Applied Physics\t\t   %d\t\t   %.2f\n", phy_cred, phy_marks);
printf("                                              \n");
printf("Totall Credits:  %d\t\tWeighted Average:  %.2f%%\n", total_cred, weighted_average);
      return  0;
}