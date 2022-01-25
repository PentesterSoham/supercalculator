/**
 * @file supercalculator.c    
 * @author soham biswas
 * @brief  this was a super calculator
 * @version 0.1
 * @date 2021-07-5 to 2022-01-05,2022
 * weather  It's cool and moderate inside the room
 * Health: Underweight 
 * Compromised: All the things (easy level)
 * @shoutout unknown vender
 * @copyright Copyright (c) 2022
 * @youtube Technology soham Link of a video:- https://youtu.be/AutqhzCBlYQ
 * @github pentestersoham
 */
#include <stdio.h>

#include <conio.h>

#include <math.h>
double sum(double a, double b)
{

    return a + b; //addition
}

double subtract(double a, double b)
{

    return a - b; //substrction
}

double multiply(double a, double b)
{

    return a * b; //multiplication
}

double divide(double a, double b)
{

    return a / b; //division
}

double square(double a)
{

    return a * a; //square
}

double root(double a)
{

    return sqrt(a); //square root
}

double percent(double a)
{

    return a / 100; //percentage
}

double arear(double a, double b)
{

    return a * b; //area of a rectangle
}

double areas(double a)
{

    return a * a; //area of a square
}
double areac(double a)
{

    return 22 / 7 * (a * a); //area of a circle
}

double params(double a)
{

    return 4 * a; //parameter of a square
}

double paramr(double a, double b)
{

    return 2 * (a + b); //parameter of a rectangle
}

double paramc(double a)
{

    return 2 * 22 / 7 * a; //parameter of a circle
}

double tri(double a, double b, double c)
{

    return a + b + c; //parameter of a triangle
}

double angle(double a, double b)
{

    return 1 / 2 * a * b; //area of a triangle
}

double cube(double a)
{

    return a * a * a; //cube
}

double cube_root(double a)
{

    return cbrt(a); //cube root
}

double volumer(double a, double b, double c)
{

    return a * b * c; //volume of the rectangle
}

double volumes(double a)
{

    return a * a * a; //volume of a square
}

double percentage(double a, double b)
{

    return a / 100 * b;
}

int main()
{

    double a, b, f, e;

    char c, op;

label:

    printf("\nsoham's calculator\n");

    printf("operators included in this calculator are:\n1.+\n2.-\n3.*\n4./\n5.square(type a)\n6.root(type #) \n7.percent like 20/100=0.20(type p)\n7.area of rectangle(type r)\n8.area of square(type s)\n9.area of circle(type c)\n10.parameter of a square(type 1)\n11.parameter of rectangle(type 2)\n12.parameter of a circle(type 3)\n13.area of a triangle(type 4)\n14.parameter of triangle(type t)\n15.cube of a number(type 5)\n16.cube root of a number(type 6)\n17.volume of a rectangle(type 7)\n18.volume of a square(type 8)\n19.percentage like 20 percent of 100(type 9)");

    printf("\ngive a masure of a side/give a number :");

    scanf("%lf", &a);

    printf("give an operator:");

    scanf("%s", &op);

    switch (op)

    {

    case '+':

        printf("give another number:");

        scanf("%lf", &b);

        printf("your answer is:%lf ", sum(a, b));

        break;

    case '-':

        printf("give another number:");

        scanf("%lf", &b);

        printf("your answer is:%lf ", subtract(a, b));

        break;

    case '*':

        printf("give another number:");

        scanf("%lf", &b);

        printf("your answer is:%lf ", multiply(a, b));

        break;

    case '/':

        printf("give another number:");

        scanf("%lf", &b);

        printf("your answer is:%lf ", divide(a, b));

        break;

    case 'a':

        printf("your answer is:%lf ", square(a));

        break;

    case '#':

        printf("your answer is:%lf ", root(a));

        break;

    case 'p':

        printf("your answer is:%lf ", percent(a));

        break;

    case 'r':

        printf("give another number:");

        scanf("%lf", &b);

        printf("your answer is:%lfunit square ", arear(a, b));

        break;

    case 's':

        printf("your answer is:%lfunit square ", areas(a));

        break;

    case 'c':

        printf("your answer is:%lfunit square ", areac(a));

        break;

    case '1':

        printf("your answer is:%lfunit ", params(a));

        break;

    case '2':

        printf("give another number:");

        scanf("%lf", &b);

        printf("your answer is:%lfunit ", paramr(a, b));

        break;

    case '3':

        printf("your answer is:%lfunit ", paramc(a));

        break;

    case 't':

        printf("give the measure of another side:");

        scanf("%lf", &b);

        printf("give the measure of the third side:");

        scanf("%lf", &f);

        printf("your answer is:%lfunit ", tri(a, b, f));

        break;

    case '4':

        printf("give another number:");

        scanf("%lf", &b);

        printf("your answer is:%lfunit square ", angle(a, b));

        break;

    case '5':

        printf("your answer is:%lf ", cube(a));

        break;

    case '6':

        printf("your answer is:%lf ", cube_root(a));

        break;

    case '7':

        printf("give another number:");

        scanf("%lf", &b);

        printf("give the third number:");

        scanf("%lf", &f);

        printf("your answer is:%lf ", volumer(a, b, f));

        break;

    case '8':

        printf("your answer is:%lf ", volumes(a));

        break;

    case '9':

        printf("give percent to calculate but do not include percent symbol:");

        scanf("%lf", &b);

        printf("your answer is:%lf ", percentage(a, b));

        break;

    default:

        printf("wrong operator.");

        break;
    }
special:

    printf("\nif you want to calculate again type y or else n:");

    scanf("%s", &c);

    if (c == 'y')

    {

        goto label;
    }

    else if (c == 'n')

    {

        goto end;
    }
    else

    {

        printf("wrong answer.");

        goto special;
    }

end:

    return 0;
}