#include <stdio.h>
void findStringLength() {
    char str[100];
    char *ptr = str;
    int length = 0;

    printf("\nEnter any string: ");
    fflush(stdin);
    gets(str);

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("The length of the string is: %d\n", length);
}
void findCubes(int *ptr, int size) {
    printf("\nCubes of all elements:\n");
    for (int i = 0; i < size * size; i++) {
        printf("%d ", (*ptr) * (*ptr) * (*ptr));
        ptr++;
        if (i % size == size - 1)
            printf("\n");
    }
}

void cubeGenerator() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);
   int arr[size][size];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    findCubes(&arr[0][0], size);
}

int main() {
    int choice;
    while (1) {
        printf("\n\n===== MENU =====\n");
        printf("1. Length Finder (Q1)\n");
        printf("2. Cubes Generator (Q2)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                findStringLength();
                break;
            case 2:
                cubeGenerator();
                break;
            case 0:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
