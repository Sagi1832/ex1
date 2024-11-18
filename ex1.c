/******************
Name:sgai esformes
ID: 328416219
Assignment:1
*******************/
#include<stdio.h>
#include<stdlib.h>
void task1();
void task2();
void task3();
void task4();
void task5();


int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();

}

void task1()
{
    int num = 0;
    int pos = 0;
    int bit = 0;
    printf("What bit:\n");
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Please enter a position: ");
    scanf("%d", &pos);
    bit = (num >> pos) & 1;
    printf("The bit in position %d of number %d is: %d\n\n\n", pos, num, bit);



}

void task2()
{
    int num = 0;
    int pos = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Please enter a position: ");
    scanf("%d", &pos);
    int new_num_on = num | (1 << pos);
    int new_num_off = num & ~(1 << pos);
    printf("Number with bit %d set to 1: %d\n", pos, new_num_on);
    printf("Number with bit %d set to 0: %d\n\n\n", pos, new_num_off);



}

void task3()
{
    int num = 0;
    int pos = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("Please enter a position: ");
    scanf("%d", &pos);
    int new_num = num ^ (1 << num);
    printf("Number with bit %d toggled: %d\n\n\n", pos, new_num);



}

void task4()
{
    int num = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);
    int last_bit_1 = ~((num >> 0) & 1);
    int last_bit_2 = (last_bit_1 >> 0 & 1);
    printf("%d\n\n\n", last_bit_2);



}

void task5()
{
    int num_1 = 0;
    int num_2 =0;
    int sum_of_nums = 0;
    printf("Please enter the first number (octal): ");
    scanf("%o", &num_1);
    printf("Please enter the second number (octal): ");
    scanf("%o", &num_2);
    sum_of_nums = num_1 + num_2;
    printf("The sum in hexadecimal: %x\n", sum_of_nums);
    int bit_3 = (sum_of_nums >> 3) & 1;
    int bit_5 = (sum_of_nums >> 5) & 1;
    int bit_7 = (sum_of_nums >> 7) & 1;
    int bit_11 = (sum_of_nums >> 11) & 1;
    printf("The 3,5,7,11 bits are: %d%d%d%d\n\n\n", bit_3, bit_5, bit_7, bit_11);



}
