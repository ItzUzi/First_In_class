#include <stdio.h>
#include <time.h>

int main(int argc, double *argv[])
{
    double defaultPercentage = 0.10;
    double tax;
    double tip;
    double meal;

    if(argc < 4){
        tax = defaultPercentage;
        tip = defaultPercentage;
        meal = 20.99;
    }else
    {
        tax = *argv[1];
        tip = *argv[2];
        meal = *argv[3];
    }
    

    return 0;
}
