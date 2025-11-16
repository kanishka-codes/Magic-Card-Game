#include<stdio.h>
#include<string.h>
int main()
{
    int ar=0;

    int arr1[5][7]=
    
{ 
    {2,  3 , 6 , 7, 10, 11, 14},
    {15, 18 ,19 ,22 ,23 ,26, 27},
    {30 ,31 ,34 ,35 ,38 ,39 ,42},
    {43 ,46 ,47 ,50 ,51, 54 ,55},
    {58 , 59, 62, 63}
};

int arr2[5][7]=
{
    {16, 17, 18, 19, 20, 21, 22},
    {23, 24, 25, 26, 27, 28, 29},
    {30, 31, 48, 49, 50, 51, 52},
    {53, 54, 55, 56, 57, 58, 59},
    {60, 61, 62, 63}
};

int arr3[5][7]=
{
    {1, 3, 5, 7, 9, 11, 13},
    {15, 17, 19, 21, 23, 25, 27},
    {29, 31, 33, 35, 37, 39, 41},
    {43, 45, 47, 49, 51, 53, 55},
    {57, 59, 61, 63}
};

int arr4[5][7]=
{
    {4, 5, 6, 7, 12, 13, 14},
    {15, 20, 21, 22, 23, 28, 29},
    {30, 31, 36, 37, 38, 39, 44},
    {45, 46, 47, 52, 53, 54, 55},
    {60, 61, 62, 63}
};

int arr5[5][7]=
{
    {8, 9, 10, 11, 12, 13, 14},
    {15, 24, 26, 25, 27, 28, 29},
    {30, 31, 40, 41, 42, 43, 44},
    {45, 46, 47, 56, 57, 58, 59},
    {60, 61, 62, 63}

};

 int arr6[5][7]=
{
    {32, 33, 34, 35, 36, 37, 38},
    {39, 40, 41, 42, 43, 44, 45},
    {46, 47, 48, 49, 50, 51, 52},
    {53, 54, 55, 56, 57, 58, 59},
    {60, 61, 62, 63},
};

int i,j;
char ch;
   printf("\n------------Welcome to the card game------------\n");
   printf("\nRule to play this game:\n");
   printf("\n1.Select any 1 number from the card one and  keep the number in mind\n");
   printf("\n2.Now you will be show  cards and check if the number is in that card if yes than in prompt ans with 'y' and if no ans with 'n'\n ");
   printf("\n3.Your correct ans will be given to you\n");

   //card 1
        printf("\n------Here is the first card--------\n");

        for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%d\t",arr1[i][j]);
                 ar=arr1[0][0];
            }
            printf("\n");
        }
        printf("Is the number in this card (y /n):");
        scanf(" %c",&ch);
       

            // card 2
        printf("\n ------Here is your 2 card-------\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%d\t",arr2[i][j]);
            }
            printf("\n");
        }
        printf("Is the number in this card (y /n):");
        scanf(" %c",&ch);
       if(ch=='y'|| ch=='Y')
        {
            ar=ar+arr2[0][0];
        }
        
        // card 3
         printf("\n ------Here is your 3 card-------\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }    
             printf("Is the number in this card (y /n):");
        scanf(" %c",&ch);
        if(ch=='y' || ch=='Y')
        {
            ar=ar+arr3[0][0];
        }
        // card 4
        printf("\n ------Here is your 4 card-------\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%d\t",arr4[i][j]);
            }
            printf("\n");
        }    
        printf("Is the number in this card (y /n):");
        scanf(" %c",&ch);
         if(ch=='y'|| ch=='Y')
        {
            ar=ar+arr4[0][0];
        }

        // card 5
         printf("\n ------Here is your 5 card-------\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%d\t",arr5[i][j]);
            }
            printf("\n");
        }    
        printf("Is the number in this card (y /n):");
        scanf(" %c",&ch);
        if(ch=='y' || ch=='Y')
        {
            ar=ar+arr5[0][0];
        }

        // card 6
         printf("\n ------Here is your 6 card-------\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%d\t",arr6[i][j]);
            }
            printf("\n");
        }    
        printf("Is the number in this card (y /n:)");
        scanf(" %c",&ch);
          if(ch=='y'|| ch=='Y')
        {
            ar=ar+arr6[0][0];
        }
        printf("\nYour number is :%d\n",ar);
        return 0;
 }

