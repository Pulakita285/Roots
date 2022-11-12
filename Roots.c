/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2,imaginary;
    float discriminant;
    printf("Enter the required numbers in the quadratic equation ax^2 + bx + c=");
    scanf("%f%f%f",&a,&b,&c);
    
    discriminant=(b*b)-(4*a*c);

    /*if determinant is greater than zero*/
    switch(discriminant>0)
    {
        case 1:
            root1=(-b+sqrt(discriminant))/(2*a);
            root2=(-b+sqrt(discriminant))/(2*a);
            printf("The distinct and real roots exist: %.2f and %.2f",root1,root2);
            break;
        case 0:
        /*if determinant is negative*/
        switch(discriminant<0)
            {
                case 1:
                    root1=root2=-b/(2*a);
                    imaginary=sqrt(-discriminant)/(2*a);
                    printf("Two imaginary roots exist: %.2f+i%.2f and %.2f-i%.2f",root1,imaginary,root2,imaginary);
                    break;

                case 0:
                    /*if discriminant is equal to zero*/
                    root1=root2=-b/(2*a);
                    printf("Two distinct and real roots exist: %.2f and %.2f",root1,root2);
                    break;
            }
    }
    return 0;
}
