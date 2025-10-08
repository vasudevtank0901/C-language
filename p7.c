#include <stdio.h>
#include <conio.h>

int sum(int a, int b)
{
    int c;
    c = a + b;
    printf("\n\tAddition is %d\n", c);
}
int minus(int a, int b)
{
    int c;
    c = a - b;
    printf("\n\tSubtraction is %d\n", c);
}
int multiply(int a, int b)
{
    int c;
    c = a * b;
    printf("\n\tMultiplication is %d\n", c);
}
int divide(int a, int b)
{
    int c;
    c = a / b;
    printf("\n\tDivision is %d\n", c);
}
int squre(int a)
{
    int b;
    b = a * a;
    printf("\n\tSquare is %d\n", b);
}

int cube(int a)
{
    int b;
    b = a * a * a;
    printf("\n\tCube is %d\n", b);
}

    int main()
    {
        printf("welcome to our calculator............. \n");

        while (1<2)
        {
            printf("\nEnter 1 for the Addition");
            printf("\nEnter 2 for the Subtraction");
            printf("\nEnter 3 for the Multiplication");
            printf("\nEnter 4 for the Division");
            printf("\nEnter 5 for the Square");
            printf("\nEnter 6 for the Cube");
            printf("\nEnter 0 for the exit");
            int choice;

            printf("\nEnter your choice ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                int a, b;
                    printf("\nEnter First Number ");
                    scanf("%d",&a);
                    printf("Enter Second Number ");
                    scanf("%d",&b);
                    sum(a,b);
            }
            else if (choice == 2)
            {
                int a, b;
                    printf("\nEnter First Number ");
                    scanf("%d",&a);
                    printf("Enter Second Number ");
                    scanf("%d",&b);
                    minus(a,b);
            }
            else if (choice == 3)
            {
                int a, b;
                    printf("\nEnter First Number ");
                    scanf("%d",&a);
                    printf("Enter Second Number  ");
                    scanf("%d",&b);
                    multiply(a,b);
            }
            else if (choice == 4)
            {
                int a, b;
                    printf("\nEnter First Numbers ");
                    scanf("%d",&a);
                    printf("Enter Second Numbers  ");
                    scanf("%d",&b);
                    divide(a,b);
            }
            else if (choice == 5)
            {
                int a;
                printf("\nEnter a Number For Square  ");
                scanf("%d",&a);
                squre(a);
            }
            else if (choice == 6)
            {
                int a;
                printf("\nEnter a Number For Cube  ");
                scanf("%d",&a);
                cube(a);
            }
            else if (choice==0)
            {
                printf("\n\tExiting");
                break;
            }
            else
            {
                printf("invalid input");
            }
        }
        return 0;
    }