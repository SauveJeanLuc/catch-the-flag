#include <stdio.h>
int main() {

    char a = 'p';
    int b = 12345;
    float c = 1.123456;
    double d = 1.0123456789013123;

    printf("\n my char: %c ", a);
    printf("\n my int: %i ", b);
    printf("\n my float: %f ", c);
    printf("\n my double: %.16g \n\n", d);
    
    return 0;
}