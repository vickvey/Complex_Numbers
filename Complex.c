// Complex.c

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Complex.h"

void Display(Complex *C, char _name[]){
    dash;
    printf("The complex number %s is: \n", _name);
    if(C->imag >= 0){
        printf("%.2f + %.2f i", C->real, C->imag);
        dash; 
    } else {
        printf("%.2f - %.2f i", C->real, (-1)*C->imag);
        dash;
    }
}

Complex *NewComplex (float real, float imag){
    Complex *C = (Complex*)malloc(sizeof(Complex));
    C->real = real;
    C->imag = imag;
    return C;
}

void freeComplex (Complex *C){
    free(C);
}

Complex *Conjugate (Complex *C){
    C->imag = (-1)*C->imag;
    return C;
}

Complex *Add (Complex *C1, Complex *C2){
    Complex *C = (Complex*)malloc(sizeof(Complex));
    C->real = C1->real + C2->real;
    C->imag = C1->imag + C2->imag;
    return C; 
}

Complex *Subtract (Complex *C1, Complex *C2){
    Complex *C = (Complex*)malloc(sizeof(Complex));
    C->real = C1->real - C2->real;
    C->imag = C1->imag - C2->imag;
    return C;
}

Complex *Multiply (Complex *C1, Complex *C2){
    Complex *C = (Complex*)malloc(sizeof(Complex));
    C->real = ((C1->real * C2->real) - (C1->imag * C2->imag));
    C->imag = ((C1->real * C2->imag) + (C1->imag * C2->real));
    return C;
}

// C1 is numerator & C2 is denominator
Complex *Divide (Complex *C1, Complex *C2){
    Complex *C = Multiply(C1, Conjugate(C2));
    C->real /= (float)(C2->real*C2->real);
    C->real /= (float)(C2->imag*C2->imag);
    return C;
}

float Abs (Complex *C){
    float res = sqrt((C->real*C->real) + (C->imag*C->imag));
    return res;
}


