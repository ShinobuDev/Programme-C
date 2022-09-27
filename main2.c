//
// Created by drake on 27/09/2022.
//
#include <stdio.h>

int return_first_numeral_of_a_number(int number)
{
    int first_numeral = 0;
    int number_of_digits;
    for (int i = 1; i <= number; i *= 10)
    {
        number_of_digits++;
    }
    while (number > 0)
    {
        first_numeral = number % 10;
        number /= 10;
    }
    return first_numeral;
}

int main()
{
    int number;
    int number_of_digits;
    printf("Entrez un nombre ");
    scanf("%d", &number);
    while(number!=0)
    {
        number=number/10;
        number_of_digits++;
    }
    printf("Le premier chiffre %d est %d et il a %d chiffre.", number, return_first_numeral_of_a_number(number), number_of_digits);
    return 0;
}

// Language: c
// Path: main3.c
