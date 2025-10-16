#include <stdio.h>

// copy input to output; 2st version
int main() {
    int c;
    
    while (c = (getchar() != EOF)){
        printf("%d\n",c);
    }
    return 0;
}

//getchar() != EOF is 1 if it is true
