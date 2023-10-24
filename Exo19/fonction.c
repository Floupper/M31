#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "fonction.h"

double exp_density(double lambda)
{
    double x;
    double y = (double)rand() / (double)RAND_MAX;
    x = log(1 - y) / (-lambda);
    printf("Valeur de x = %f\n", x);
    return x;
}

double echantillon_exp_density(double lambda, int count)
{
    double x;
    double somme;
    double moyenne;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        x = exp_density(lambda);
        somme += x;
    }
    moyenne = somme / count;
    printf("Espérence de lambda = %f, Moyenne = %f\n", 1 / lambda, moyenne);
    return moyenne;
}

unsigned int geom_via_exp(double p)
{
    echantillon_exp_density((-log(1 - p)), 1000000);
    return 0;
}

void print_time(clock_t begin, clock_t end)
{
    unsigned long temps1;
    temps1 = (unsigned long)(end - begin) * 1000 / CLOCKS_PER_SEC;
    printf("Temps d'execution de geom_via_exp = %lu ms\n", temps1);
}