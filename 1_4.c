#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main() {
    int fhar, celsius;
    int lower, upper, step;
    
    lower = -20;      //lower limit of temperature table
    upper = 180;    //upper limit
    step = 20;      // step size
    
    celsius = lower;
    
    printf("°C\tF\n");
    
    while (celsius <= upper){
        fhar = 9.0/5.0 * celsius + 32; 
        
        printf("%d\t%d\n",celsius, fhar);
        celsius = celsius + step;
    }

    return 0;
}
