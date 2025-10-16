#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main() {
    int fhar, celsius;
    int lower, upper, step;
    
    lower = 0;      //lower limit of temperature table
    upper = 300;    //upper limit
    step = 20;      // step size
    
    fhar = lower;
    
    printf("F\t°C\n");
    
    while (fhar <= upper){
        celsius = 5 * (fhar-32) / 9;
        
        printf("%d\t%d\n",fhar, celsius);
        fhar = fhar + step;
    }

    return 0;
}
