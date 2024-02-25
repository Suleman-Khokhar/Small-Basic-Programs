#include <stdio.h>
// #include<math.h>
int factorial(int num1, int fact);
void table(int num2, int from, int to);
float distance(int x1, int x2, int y1, int y2);
float Area(float length, float width);
int Reverse(int num3, int reverse, int remainder);
void triangle(int rows);
void triangle1(int rows);
int prime(int numb,int p);
void main()
{
    // programs list :
    /*
    1. Function of fictorial
    2. Function of Table
    3. Function of Distance
    4. Function of Area_Of_Triangle
    5. Function of Reversing numbers
    6. Function of Pattern
    7.Prime number
    */
    int pro;
    printf("Number of programs : \n1.Function of fictorial\n2.Function of Table\n3.Function of Distance\n4.Function of Area_Of_Triangle\n5.Function of Reversing numbers\n6.Function of Pattern\n7.Prime number \n");
    printf("Enter number of program to proform : ");
    scanf("%d", &pro);
    if (pro == 1)
    {
        // 1. Function of fictorial
        int num1, fact = 1, f;
        printf("Enter number : ");
        scanf("%d", &num1);
        if (num1 == 1 || num1 == 0)
        {
            f = fact;
        }
        else
        {
            f = factorial(num1, fact);
        }
        printf("Fcatorial of number %d ! = %d", num1, f);
    }
    else if (pro == 2)
    {
        //     2. Function of Table
        int num2, from, to;
        printf("Enter number : ");
        scanf("%d", &num2);
        printf("Enter number from : ");
        scanf("%d", &from);
        printf("Enter number to : ");
        scanf("%d", &to);
        table(num2, from, to);
    }
    else if (pro == 3)
    {
        // 3. Function of Distance
        float x1, x2, y1, y2, dis;
        printf("Enter value of x1 : ");
        scanf("%d", &x1);
        printf("Enter value of x2 : ");
        scanf("%d", &x2);
        printf("Enter value of y1 : ");
        scanf("%d", &y1);
        printf("Enter value of y2 : ");
        scanf("%d", &y2);
        dis = distance(x1, x2, y1, y2);
        printf("Distance = %f ", dis);
    }
    else if (pro == 4)
    {
        //  4. Function of Area_Of_Triangle
        float length, width, area;
        printf("Enter length : ");
        scanf("%f", &length);
        printf("Enter width : ");
        scanf("%f", &width);
        area = Area(length, width);
        printf("Area of triangle : %f ", area);
    }
    else if (pro == 5)
    {
        // 5. Function of Reversing numbers
        int num3, reverse = 0, remiander, r;
        printf("Enter number : ");
        scanf("%d", &num3);
        r = Reverse(num3, reverse, remiander);
        printf("Reverse of %d is %d", num3, r);
    }
    else if (pro == 6)
    {
        // 6. Function of Pattern
        int n;
        printf("Enter number of triangle : \n1.Straight\n2.Reverse Triangle\n");
        printf("Enter number : ");
        scanf("%d", &n);
        if (n == 1)
        {
            int rows;
            printf("Enter number of rows : ");
            scanf("%d", &rows);
            triangle(rows);
        }
        else if (n == 2)
        {
            int rows;
            printf("Enter number of rows : ");
            scanf("%d", &rows);
            triangle1(rows);
        }else
        {
            printf("Wrong input ");
        }
    }
    else if (pro == 7)
    {
        // Program of prime number 
        int numb ;
        int   p = 1;
        printf("Enter number :");
        scanf("%d",&numb);
        if(numb == 1 || numb == 0)
        {
            printf("Not prime !");
            
        }
        else
        {
          
           p = prime( numb,p);
            if(p == 1)
            {
                printf("Prime number !");
            }
            else if(p == 0)
            {
                printf("Prime not !!");
            }
        }
        

    }
    else
    {
        printf("Wrong input !!! ");
    }
}


// program function  of 1
int factorial(int num1, int fact)
{
    for (int i = num1; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}
// program function of 2
void table(int num2, int from, int to)
{
    for (int i = from; i <= to; i++)
    {
        printf("%d x %d = %d\n", num2, i, num2 * i);
    }
}
// program function of 3
float distance(int x1, int x2, int y1, int y2)
{
    // return sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
    return ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
}
// Program function of 4
float Area(float length, float width)
{
    return (0.5 * length * width);
}
// program function of 5
int Reverse(int num3, int reverse, int remainder)
{
    while (num3 != 0)
    {
        remainder = num3 % 10;
        reverse = reverse * 10 + remainder;
        num3 /= 10;
    }
    return reverse;
}
// program of triangle
void triangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// reverse triangle
void triangle1(int rows)
{
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
// prime number program function
int prime(int numb,int p)
{
     int i ;
            for(i=2;i<numb;i++)
            {
                if(numb%i == 0)
                {
                    p =0;
                    break;
                }
            }
    return p ;     
}