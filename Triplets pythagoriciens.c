//
// Created by drake on 27/09/2022.
//
#include <stdio.h>

int pythogarian_triplet(int a, int b, int c)
{
    if (a*a + b*b == c*c)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b, c;
    printf("Enter the value of a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (pythogarian_triplet(a, b, c))
        printf("OK : %d, %d et %d forment un triplet pythagoricien", a, b, c);
    else
        printf("KO : %d, %d et %d ne forment pas un triplet pythagoricien", a, b, c);
    return 0;
}

// Language: c
// Path: main.c
