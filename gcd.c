#include<stdio.h>
int main()
{
//find gcd to reduce the fraction

    int num, den, rem=0, quo, numt, dent, gcd=0;

    printf("Enter the numerator and denominator: \n");
    scanf("%d", &num); //48
    scanf("%d", &den); //18

    numt = num;
    dent = den;
    quo = numt/dent; // 2
    rem = numt%dent; // 12

    while(rem != 0)
    {
        numt = dent;
        dent = rem;
        quo = numt/dent;
        rem = numt%dent;
        if(rem == 0)
        {
            gcd = dent;
            break;
        }
    }
    printf("The gcd is %d\n", gcd);

    num=num/(int)gcd;
    den=den/(int)gcd;

    printf("The fraction in lowest terms is: %d/%d", num, den);
    return 0;
}
