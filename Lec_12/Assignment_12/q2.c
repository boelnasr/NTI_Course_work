#include <stdio.h>
#include "standard_types.h"

typedef struct complex {
    f32 real;
    f32 imag;
} c;

c add(c n1, c n2) {
    c result;
    result.real = n1.real + n2.real;
    result.imag = n1.imag + n2.imag;
    return (result);
}

int main() {
    c n1, n2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);

    printf("Sum = %.3f + %.3fi", result.real, result.imag);
    return 0;
}

