//
// Created by drake on 27/09/2022.
//
#include <stdio.h>

int main(void)
{
    int num;

    printf("Entrez un nombre: ");
    scanf("%d", &num);

    printf("En Chiffre Maya: ");

    while(num != 0)
    {

        if (num >= 19)
        {
            printf(".... ---- ---- ----");
            num -= 19;
        }

        else if (num >= 18)
        {
            printf("... ---- ---- ----");
            num -= 18;
        }

        else if (num >= 17)
        {
            printf(".. ---- ---- ----");
            num -= 17;
        }

        else if (num >= 16)
        {
            printf(". ---- ---- ----");
            num -= 16;
        }

        else if (num >= 15)
        {
            printf("---- ---- ----");
            num -= 15;
        }

        else if (num >= 14)
        {
            printf(".... ---- ----");
            num -= 14;
        }

        else if (num >= 13)
        {
            printf("... ---- ----");
            num -= 13;
        }

        else if (num >= 12)
        {
            printf(".. ---- ----");
            num -= 12;
        }

        else if (num >= 11)
        {
            printf(". ---- ----");
            num -= 11;
        }

        else if (num >= 10)
        {
            printf("---- ----");
            num -= 10;
        }

        else if (num >= 9)
        {
            printf(".... ----");
            num -= 9;
        }

        else if (num >= 8)
        {
            printf("... ----");
            num -= 8;
        }

        else if (num >= 7)
        {
            printf(".. ----");
            num -= 7;
        }

        else if (num >= 6)
        {
            printf(". ----");
            num -= 6;
        }

        else if (num >= 5)
        {
            printf("----");
            num -= 5;
        }

        else if (num >= 4)
        {
            printf("....");
            num -= 4;
        }

        else if (num >= 3)
        {
            printf("...");
            num -= 3;
        }

        else if (num >= 2)
        {
            printf("..");
            num -= 2;
        }

        else if (num >= 1)
        {
            printf(".");
            num -= 1;
        }

        else if (num >= 0)
        {
            printf("<((>");
            num -= 0;
        }

    }

    return 0;
}

int roman(int n){
    
}

// Language: c
// Path: main3.c

