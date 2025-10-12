// 1. Create a C program to check if a character entered by the user is a vowel or consonant using is switch statement.

#include <stdio.h>
int main() 
{
    char alphabet;

    printf("Enter a character: ");
    scanf(" %c", &alphabet);

    switch (alphabet)
     {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", alphabet);
            break;
        default:
            if ((alphabet>='a' && alphabet<='z') || (alphabet>='A' && alphabet<='Z'))
                printf("%c is a consonant.\n", alphabet);
            else
                printf("Invalid input!\n");
    }

// OUTPUT
// Enter a character: w
// w is a consonant.
// Enter a character: a
// a is a vowel.


// 2.2. Create a C program to find the largest element in an ID array


    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest element = %d\n", largest);

// OUTPUT
// Enter number of elements: 3
// Enter 3 elements:
// 1
// 2
// 3
// Largest element = 3

// 3.3. Write a C program that defines a function to reverse a string without using any library functions

void reverseString(char str[]) {
    int length = 0, i;
    while (str[length] != '\0')
        length++;

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

}
// OUTPUT
// Enter a string: vasudev
// Reversed string: vedusav

// 4. Write a C program to find square of each elements of an 10 array using Pointer

 {
    int arr[10], i;
    int *ptr;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    ptr = arr; 

    printf("Square of each element:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", (*ptr) * (*ptr));
        ptr++; 
    }

    printf("\n");
    
}


// OUTPUT
// Enter 10 elements:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// Square of each element:
// 1 4 9 16 25 36 49 64 81 100


//5. print abelow pattern using nested for loop in c language

// 1

// 4 4

// 9 9 9

// 16 16 16 16 

// 25 25 25 25 25 

 {
    int i, j;
    
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i * i); 
        }
        printf("\n");
    }
    
    return 0;
}
}

// OUTPUT
// 1
// 4 4
// 9 9 9
// 16 16 16 16
// 25 25 25 25 25





