#include<stdio.h>
int main()
{
int qty_tea = 3;
int qty_samosa = 4;
int qty_chicken_roll = 2;
double price_tea = 60.00;
double price_samosa = 40.50;
double price_chicken_roll = 120.00;

double sub_tea = qty_tea * price_tea;
double sub_samosa = qty_samosa * price_samosa;
double sub_chicken_roll = qty_chicken_roll * price_samosa;

double bill_subtotal = sub_tea + sub_samosa + sub_chicken_roll;
double gst = 0.16 * bill_subtotal;
double grand_total = bill_subtotal + gst;

printf("                      FAST CAFETERIA RECEIPT                   \n");
printf("Item\t\tQty\t\tUnit Price (PKR)\tsubtotal (PKR)\n");
printf("                                                  \n");
printf("Tea\t\t\t\t%d\t\t%.2lf\t\t\t\t%.2lf\n", qty_tea, price_tea, sub_tea);
printf("Samosa\t\t\t%d\t\t%.2lf\t\t\t\t%.2lf\n", qty_samosa, price_samosa, sub_samosa);
printf("Chicken Roll\t%d\t\t%.2lf\t\t\t\t%.2lf\n", qty_chicken_roll, price_chicken_roll, sub_chicken_roll);
printf("                                                    \n");
printf("Subtotal:\t\t\t\t\t\t\t\tPKR %.2lf\n", bill_subtotal);
printf("GST (16%%):\t\t\t\t\t\t\t\tPKR %.2lf\n", gst);
printf("                                           \n");
printf("Grand Total:\t\t\t\t\t\t\tPKR %.2lf\n", grand_total);
printf("                     THANK YOU FOR YOUR VISIT               \n");
           return  0;
}
