//WAP to accept the height of a person in centimeters and categorize the
//person according to their height.
#include<stdio.h>
int main()
{
    int height;
    printf("Enter the height of the person in centimeters: \n");
    scanf("%d",&height);
    if(height>=150 && height<=160)
    {
        printf("The person is of average height.\n");
        }
        else if(height>=160 && height<=170)
        {
            printf("The person is of above average height.\n");
            }
            else if(height>=170 && height<=180)
            {
             printf("The person is of tall height.\n");
             }
             else if(height>=180 && height<=190)
             {
                printf("The person is of very tall height.\n");
                }
                else if(height>=190 && height<=200)
                {
                    printf("The person is of very very tall height.\n");
                    }
                    else
                    {
                        printf("Invalid input.\n");
                        }
                        return 0;
}