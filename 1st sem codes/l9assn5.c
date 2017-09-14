#include <stdio.h>

main()
{
    struct complex
    {
        float real;
        float imaginary;
    } c1, c2, sum, sub;
    printf ("Enter the first complex number:");
    scanf ("%f+%fi", &c1.real, &c1.imaginary);
    printf ("Enter the second complex number:");
    scanf ("%f+%fi", &c2.real, &c2.imaginary);
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    sub.real = c1.real - c2.real;
    sub.imaginary = c1.imaginary - c2.imaginary;
    printf ("The result of addition is:\t%.1f+%.1fi\n", sum.real, sum.imaginary);
    printf ("The result of subtraction is:\t%.1f+%.1fi\n", sub.real, sub.imaginary);

    return 0;
}
