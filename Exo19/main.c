#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "fonction.h"

int main(int argc, char const *argv[])
{
    /* code */
    srand(time(NULL));

    double lambda = 2;
    int count = 20;
    double p = 0.5;
    double pBernoulli = 10;

    exp_density(lambda);
    echantillon_exp_density(lambda, count);

    clock_t begin = clock();
    geom_via_exp(p);
    clock_t end = clock();

    print_time(begin, end);

    clock_t begin2 = clock();
    geometric(pBernoulli);
    clock_t end2 = clock();

    print_time(begin2, end2);

    return 0;
}
