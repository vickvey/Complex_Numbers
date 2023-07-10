// Complex.h

#ifndef COMPLEX_H
#define COMPLEX_H

#define dash printf("\n--------------------\n")

typedef struct Complex{
    float real;
    float imag;
} Complex;

Complex* NewComplex (float real, float imag); // constructor
void freeComplex (Complex *C); // destructor

void Display (Complex *C, char _name[]);

// Operations
Complex *Conjugate (Complex *C);
Complex *Add (Complex* C1, Complex* C2);
Complex *Subtract (Complex* C1, Complex* C2);
Complex *Multiply (Complex* C1, Complex* C2);
Complex *Divide (Complex* C1, Complex* C2);
float Abs (Complex *C);

#endif