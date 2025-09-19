#include <stdio.h>

int main(){

    int mark;
    char grade;
    
    printf("Enter your score : ");
    scanf("%d", &mark);

    if(mark<=100 && mark>=85){
        grade='A';
        printf("Your Grade is %c",grade);
    }
    else if(mark<=84 && mark>=71){
        grade='B';
        printf("Your Grade is %c",grade);
    }    
    else if(mark<=70 && mark>=51){
        grade='C';
        printf("Your Grade is %c",grade);
    }
    else if(mark<=50 && mark>=35){
        grade='D';
        printf("Your Grade is %c",grade);
    }
    
    else if(mark>100){
        grade='E';
        printf("PLEASE ENTER A VALID NUMBER");
    }
    else {
        grade='F';
        printf("You Are failed..!! ");
    }
    switch (grade){
        case 'A':
        printf("\tExellent work!\n");
        break;

        case 'B':
        printf("\tGood work!\n");
        break;

        case 'C':
        printf("\taverage work!\n");
        break;

        case 'D':
        printf("\tBad work!\n");
        break;

        case 'E':
        printf("\tNot valid\n");
        break;

        default:
        printf("\tFail\n");
        break;
    }

    if (grade=='F')
    {
       printf("\nYou are not eligible for next level....");
    }
    else if (grade=='E')
    {
       printf("\nplz,enter a valid number....");
    }
    else{
        printf("\nYou are eligible for next level....");   
    }
   return 0; 
}