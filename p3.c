#include<stdio.h>

int main(){

    // FIRST PROGRAM

    char ALPHABET='a';
    do
    {
     printf("%c ",ALPHABET);
     ALPHABET+=4;
    } while (ALPHABET<='z');
    

    // SECOND PROGRAM

    int count=0,number; 
    printf("\nENTER ANY NUMBER : ");
    scanf("%d",&number);
    do{
        number=number/10;
        count++;
    }while(number>=1);
    
    printf("\nTOTAL NUMBER OF DIGITS : %d",count);


    // THIRD PROGRAM

    int DIGIT,first_digit,last_digit,sum=0;
    
    printf("\nENTER ANY NUMBER : ");
    scanf("%d",&DIGIT);

    first_digit=DIGIT/100;
    last_digit=DIGIT%10;
    sum=first_digit + last_digit;

    printf("%d %d",first_digit,last_digit);
    printf("\nTHE SUM OF THE FORST AND LAST DIGITS: %d",sum);
};