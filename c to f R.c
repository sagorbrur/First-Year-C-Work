#include<stdio.h>
/*print Celsius-Farenheit table for fahr=0,20,...,300;floating-point version*/
main()
{
    float  celsius,fahr;
    float lower, upper,step;
    lower=0;    /*lower limit of temperature scale*/
    upper=300;  /*upper limit*/
    step=20;    /*step size*/
    celsius=lower;
    while(celsius<=upper) {
    fahr=(celsius*9.0)/5.0+32.0;
    printf("%3.0f%6.1f\n",celsius,fahr);
    celsius=celsius+step;

    }
    return 0;
}


