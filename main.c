// main.c

#include <stdio.h>
#include <string.h>
#include "Complex.h"

void Welcome();
void Tasks();

int main(){
    // code here
    Welcome();

    Complex *C1, *C2, *add, *sub1, *sub2, *mult, *div1, *div2;
    float abs1, abs2; 

    char A[] = "A", B[] = "B", sum[] = "A+B";
    char diff1[] = "A-B", diff2[] = "B-A";
    char M[] = "A*B", D1[] = "A/B", D2[] = "B/A";
    char absA[] = "|A|", absB[] = "|B|";

    float real1,real2,imag1,imag2;
    printf("Now, For A, Enter the real part: ");
    scanf("%f", &real1);
    printf("Now, Enter the imaginary part: ");
    scanf("%f", &imag1);
    printf("Now, For B, Enter the real part: ");
    scanf("%f", &real2);
    printf("Now, Enter the imaginary part: ");
    scanf("%f", &imag2);
    C1 = NewComplex(real1, imag1);
    C2 = NewComplex(real2, imag2);
    
    int task;
    here:
    Tasks();
    printf("Enter the task you want to do: \n");
    scanf("%d", &task);

    switch (task){
    case 1:
        dash;
        printf("Here is your entered Complex numbers: \n");
        Display(C1, A);
        Display(C2, B);
        goto here; break;

    case 2:
        dash;
        printf("Here is the Addition of A and B: \n");
        add = Add(C1, C2);
        Display(add, sum);
        goto here; break;
    
    case 3:
        dash;
        printf("Here is the Subtraction of A from B: \n");
        sub1 = Subtract(C2, C1);
        Display(sub1, diff2);
        goto here; break;

    case 4:
        dash;
        printf("Here is the Subtraction of B from A: \n");
        sub2 = Subtract(C1, C2);
        Display(sub2, diff1);
        goto here; break;

    case 5:
        dash;
        printf("Here is the Multiplication of A by B: \n");
        mult = Multiply(C1, C2);
        Display(mult, M);
        goto here; break;

    case 6:
        dash;
        printf("Here is the Division of A by B: \n");
        div1 = Divide(C1, C2);
        Display(div1, D1);
        goto here; break;

    case 7:
        dash;
        printf("Here is the Division of B by A: \n");
        mult = Divide(C2, C1);
        Display(div2, D2);
        goto here; break;

    case 8: 
        dash;
        printf("Here is |A| and |B| :\n");
        printf("|A| = %.2f\n", Abs(C1));
        printf("|B| = %.2f\n", Abs(C2));
        goto here; break;

    case 9:
        dash;
        printf("So you want to Update the values of A and B:\n");
        printf("For A, Enter the real part: ");
        scanf("%f", &real1);
        printf("Now, Enter the imaginary part: ");
        scanf("%f", &imag1);
        printf("For B, Enter the real part: ");
        scanf("%f", &real2);
        printf("Now, Enter the imaginary part: ");
        scanf("%f", &imag2);
        C1->real = real1; C1->imag = imag1;
        C2->real = real2; C2->imag = imag2;
        printf("Now, you have successfully updated the values.\n");
        goto here; break;

    case 0:
        dash;
        printf("Thanks for using the project.\n");
        printf("Have a good day:)\n");
        dash; break;
    
    default:
        dash;
        printf("Invalid Input!!!");
        dash; goto here; break;
    }
    return 0;
}

// here
void Welcome(){
    dash;
    printf("This Project is made for writing and"); 
    printf(" performing different on operations Complex Numbers.\n");
    printf("Now, You have to enter the Complex Numbers A and B.\n");
    dash;
}

void Tasks(){
    dash;
    printf("Press 1: to View your Complex Numbers A and B! \n");
    printf("Press 2: to Add A and B! \n");
    printf("Press 3: to Subtract A from B! \n");
    printf("Press 4: to Subtract B from A! \n");
    printf("Press 5: to Multiply A to B! \n");
    printf("Press 6: to Divide A by B! \n");
    printf("Press 7: to Divide B by A! \n");
    printf("Press 8: to Print Absolute values of A and B! \n");
    printf("Press 9: to Update the Complex Number values! \n");
    printf("Press 0: to Exit.\n");
    dash;  
}
