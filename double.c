#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double maximum:%g\n",DBL_MAX);
    printf("double minimum:%g\n",DBL_MIN);
    printf("double precision:%d\n",DBL_DIG);
    printf("double maximum:%d\n",INT_MAX);
    printf("double minimum:%d\n",INT_MIN);
    printf("long maximum:%ld\n",LONG_MAX);
    printf("long minimum:%ld\n",LONG_MIN);
    printf("long double maximum:%lf\n",LONG_MIN);
    printf("long double minimum:%lf\n",LONG_MIN);
    
    return 0;
}