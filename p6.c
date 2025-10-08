#include <stdio.h>
int main()
{

    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    char name[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the value at index %d: ", i);
        scanf(" %c", &name[i]);
    }

    printf("\n");

    int choice;


        printf("1. for print\n");
        printf("2.update\n");
        printf("3. exit\n");
        scanf("%d", &choice);
    

    if (choice == 1)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%c", name[i]);
        }
        printf("\n");
    }

    else if (choice == 2)
    {

        for (int i = 0; i < size; i++)
        {
            printf("%c", name[i]);
        }
        printf("\n");

        int index;
        printf("enter the index: ");
        scanf("%d", &index);

        char newC;
        printf("enter the new character: ");
        scanf(" %c", &newC);

        name[index] = newC;
        printf("\n");

        for (int i = 0; i < size; i++)
        {
            printf("%c", name[i]);
        }
    }
    else
    {
       printf("exiting");
    }
    return 0;
}