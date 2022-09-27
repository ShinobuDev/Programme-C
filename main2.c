//
// Created by drake on 27/09/2022.
//
#include <stdio.h>

int return_first_numeral_of_a_number(int number)
{
    int first_numeral = 0;
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
    printf("Entrez un nombre ");
    scanf("%d", &number);
    printf("Le premier chiffre %d est %d", number, return_first_numeral_of_a_number(number));
    return 0;
}

// Language: c
