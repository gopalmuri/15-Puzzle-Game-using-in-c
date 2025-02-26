#include<stdio.h>
int main()
{
    printf("----------:15 NUMBER  PUZZLE  GAME-------------\n");
    int a[][4]= {1,4,15,7,8,10,2,11,14,3,6,13,12,9,5,0};
    int n=4;
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]==0)
            {
                printf("[]\t");
            }
            else

            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
    int ch;
    printf("          -----INSTRUCITIONS-----         \n");
    printf("1] Move zero box UP,DOWN,RIGHT,LEFT\n2] Total number will be count after sorting the number in ascending order \n");
    printf("If you start Game type 1 otherwise  type 2\n\n");
    //printf("\nMove box in right  or left or down or up\n");
    //        printf("1.Left\n2.Right\n3.Up\n4.Down\n");
     printf("If you want restart the game enter 5\nIf you want exit form the game enter 6\n\n");
    scanf("%d",&ch);
    if(ch==1)
    {
    printf("\n");
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[i][j]==0)
                {
                    printf("[]\t");
                }
                else

                {
                    printf("%d\t",a[i][j]);
                }
            }
            printf("\n");
        }
        printf("\nMove box in right  or left or down or up\n");
            printf("1.Left\n2.Right\n3.Up\n4.Down\n");
            printf("If you want restart the game enter 5\nIf you want exit form the game enter 6\n\n");
            
        for(;;)
        {
            static int  count=0;
            int choice ;
          /*printf("\nMove zero box in right  or left or down or up\n");
            printf("1.Left\n2.Right\n3.Up\n4.Down\n");
            printf("If you want restart the game enter 5\nIf you want exit form the game enter 6\n");*/

            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
            {
                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(i==0&&j==0&&a[i][j]==0)
                        {
                            break;
                        }
                        else if(j==0&&(i==0||i==1||i==2||i==3)&&a[i][j]==0)
                        {
                            break;
                        }
                        else if(a[i][j]==0)
                        {

                            int temp;
                            temp=a[i][j];
                            a[i][j]=a[i][j-1];
                            a[i][j-1]=temp;
                            count++;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }

                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[i][j]==0)
                        {
                            printf("[]\t");
                        }
                        else

                        {
                            printf("%d\t",a[i][j]);
                        }
                    }
                    printf("\n");
                }
              //  count++;
                printf("\nNumber of moves: %d\n\n",count);
            }
            break;

            case 2:
            {
            printf("\n");
                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {

                        if(j==3&&(i==0||i==1||i==2||i==3)&&a[i][j]==0)
                        {
                            break ;
                        }

                        else if(a[i][j]==0)
                        {
                            int temp;
                            temp=a[i][j];
                            a[i][j]=a[i][j+1];
                            a[i][j+1]=temp;
                            count++;
                            break;
                        }
                    }
                }
                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[i][j]==0)
                        {
                            printf("[]\t",a[i][j]);
                        }
                        else

                        {
                            printf("%d\t",a[i][j]);
                        }
                    }
                    printf("\n");
                }
            //    count++;
                printf("\nNumber of moves: %d\n\n",count);
            }
            break;

            case 3:
            {
            printf("\n");
                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(j==0&&(i==0||i==1||i==2||i==3)&&a[j][i]==0)
                        {
                            break;
                        }

                        else if(a[j][i]==0)
                        {
                            int temp;
                            temp=a[j][i];
                            a[j][i]=a[j-1][i];
                            a[j-1][i]=temp;
                            count++;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[i][j]==0)

                        {
                            printf("[]\t",a[i][j]);
                        }
                        else

                        {
                            printf("%d\t",a[i][j]);
                        }
                    }
                    printf("\n");
                }
             //   count++;
                printf("\nNumber of moves: %d\n\n",count);
            }
            break;
            case 4:
            {printf("\n");
                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(j==3&&(i==0||i==1||i==2||i==3)&&a[j][i]==0)
                        {
                            break;
                        }
                        else   if(a[j][i]==0)
                        {
                            int temp;
                            temp=a[j][i];
                            a[j][i]=a[j+1][i];
                            a[j+1][i]=temp;
                            count++;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
                for(int i =0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[i][j]==0)
                        {
                            printf("[]\t",a[i][j]);
                        }
                        else

                        {
                            printf("%d\t",a[i][j]);
                        }
                    }
                    printf("\n");
                }
                //count++;
                printf("\nNumber of moves: %d\n\n",count);
            }
            break;
            case 5:
            {
           printf("\n");
              int c=0;
              count=c;
                int  b[4][4]= {1,4,15,7,8,10,2,11,14,3,6,13,12,9,5,0};
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        a[i][j]=b[i][j];
                    }

                }

                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[i][j]==0)
                        {
                            printf("[]\t");
                        }
                        else
                        {
                            printf("%d\t",a[i][j]);
                        }

                    }
                    printf("\n");

                }
                printf("\nNumber of moves: %d\n\n",count);

            }
            break;


            default:
            {

                printf("You exit from the game\n");
                exit(0);

            }



            }
        }
    }

    else
    {
        printf("Thank you ");
    }
    return 0;

}
