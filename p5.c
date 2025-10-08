#include<stdio.h>

int main()
{

    int row=0,col=0;
    int arr[10][10];
    int choise;
    printf("\nEnter 1 for Create Array");
    printf("\nEnter 2 for View Array");
    printf("\nEnter 3 for Update Array");
    printf("\nEnter 0 for Exit");

    while (1)
    {
    
    printf("\n\nEnter Your Choise :- ");
    scanf("%d",&choise);

    if (choise==1)
    {
                    printf("\nEnter No Of Rows for Array :- ");
                    scanf("%d",&row);
                    printf("\nEnter No Of Columns for Array :- ");
                    scanf("%d",&col);

                     for(int i=0;i<row;i++)
                    {
                        for (int j=0;j<col;j++)
                        {
                            printf("\n\tEnter Element for %d Row & %d Column :- ",i+1,j+1);
                            scanf("%d",&arr[i][j]);
                        }
                    }
            }
            else if (choise==2)
            {
                    for(int i=0;i<row;i++)
                    {
                        for (int j=0;j<col;j++)
                        {
                            
                            printf(" %d ",arr[i][j]);
                        }
                        printf("\n");
                    }
            }
            else if (choise==3)
            {
                int ur,uc;
                printf("\nEnter Element for Update Row :- ");
                scanf("%d",&ur-1);
                printf("\nEnter Element for Update Column :- ");
                scanf("%d",&uc-1);
                
                printf("\nEnter Value for That Element :- ");
                scanf("%d",&arr[ur][uc]);
            }else if (choise==0)
            {   printf("\n\nExiting.........");

                break;

            }

            else{

                printf("Invalid Choise......");
                
            }
            
    }
  
};