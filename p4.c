// pattern 1

#include <stdio.h>
int main()
{ 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d",j+1);
        }
        printf("\n");
    }
    printf("\n");

// OUTPUT
// 1
// 12 
// 123
// 1234
// 12345

// pattern 2

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    printf("\n");

// OUTPUT
// A    
// AB   
// ABC  
// ABCD
// ABCDE

// pattern 3

  for (int i = 0; i < 5; i++) {

        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
  printf("\n");

  
// OUTPUT
// *
// **
// ***
// ****
// *****

// pattern 4

 for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
    printf("\n");

// OUTPUT
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// pattern 5

 for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

// OUTPUT
// *****
// ****
// ***
// **
// *

// pattern 6

 for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
        printf("%c ", 'A' + j);
     }
        printf("\n");
    }
    printf("\n");

// OUTPUT
// A B C D E
// A B C D
// A B C
// A B
// A

// pattern 7

    for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",i%2);
        }
        printf("\n"); 
    }
    printf("\n"); 

    // output
    // 11111
    // 0000
    // 111
    // 00
    // 1
 
    // pattern 8

      for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n"); 
    }
    printf("\n"); 

    // output
    // 55555
    // 4444
    // 333
    // 22
    // 1

    // pattern 9
   
      char alpa='A';
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%C",alpa);
            alpa++;
        }
        printf("\n"); 
    }
    printf("\n"); 
    // output
    // A
    // BC
    // DEF
    // GHIJ
    // KLMNO

    
      // pattern 10

for (int i=1;i<=5;i++)
    {
        for (int k=5;k>=i;k--)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n"); 
    }
    printf("\n"); 
}

    // output
    //      1
    //     12
    //    123
    //   1234
    //  12345

