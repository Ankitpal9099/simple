// 1 
// 1 0         
// 1 0 1       
// 1 0 1 0     
// 1 0 1 0 1   
// 1 0 1 0 1 0 
// #include <stdio.h>

// int main() {
//     int rows = 6;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             if (j % 2 == 1) {
//                 printf("1 ");
//             } else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


// A 
// B C
// D E F
// G H I J
// K L M N O
// P Q R S T U



// #include <stdio.h>

// int main() {
//     int row, col, count = 1;
//     char ch = 'A';

//     for (row = 1; row <= 6; row++) {
//         for (col = 1; col <= row; col++) {
//             printf("%c ", ch);
//             ch++;
//             count++;
//             if (count > 26) {
//                 break;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//  A
//  A B
//  A B C
//  A B C D
//  A B C D E



//
// #include<stdio.h>
// int main() {
//     char ch='A'-1;
//     int i,j,n=5;
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%c ",ch+j);
//         }
//         printf("\n");
//     }
// }




// 1 
// 2 3
// 4 5 6
// 7 8 9 10
 

// #include<stdio.h>
// int main()
// {
//   int i,j;
//   int n=1;
//   for(i=1;i<=4;i++)
//   {
//     for(j=1;j<=i;j++)
//     {
//       printf("%d ",n);
//       n++;
//     }
//     printf("\n");
//     }
//   return 0;
// }



//  * 
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  * 
//  *  *  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//   int size=5;
//   int i,j;
//   for(i=size;i>=-size;i--)
//   {
//     for(j=size;j>= abs(i);j--)
//     {
//       printf(" * ");
//     }
//     printf("\n");
//   }
//   return 0;
// }



//    *
//    ***
//   *****
//  *******
// *********

// #include<stdio.h>
// int main()
// {
//   int n=5;
//   int z=1;
//   int i,j,k;
//   for(i=1;i<=n;i++)
//   {
//     for(j=n-1;j>=i;j--)
//     {
//          printf(" "); 
//     }
//     for(k=0;k<z;k++)
//     {
//       printf("*");
//     }
//     z+=2;
//     printf("\n");
//   }
//   return 0;
// }



// spiral pattern
// 1 2 3 4 5 6 7 8 9 10
// 36 37 38 39 40 41 42 43 44 11
// 35 64 65 66 67 68 69 70 45 12
// 34 63 84 85 86 87 88 71 46 13
// 33 62 83 96 97 98 89 72 47 14
// 32 61 82 95 100 99 90 73 48 15
// 31 60 81 94 93 92 91 74 49 16
// 30 59 80 79 78 77 76 75 50 17
// 29 58 57 56 55 54 53 52 51 18 
// 28 27 26 25 24 23 22 21 20 19  



#include<stdio.h>
#include<conio.h>
int main()
{
    int size;
    printf("enter the size ");
    scanf("%d",&size);
    int arr[size][size];
    int row=0,col,num=1,end=size-1;
    for(row=0;row<=size/2;row++,end--)
    {
    for(col=row;col<=end;col++)
    {
        arr[row][col]=num++;
    }
    for(col=row+1;col<=end;col++)
    {
        arr[col][end]=num++;
    }
    for(col=end-1;col>=row;col--)
    {
        arr[end][col]=num++;
        }
        for(col=end-1;col>=row+1;col--)
        {
            arr[col][row]=num++;
        }
    }
    printf("print array:");
    for(row=0;row<size;row++){
        printf("\n");
        for(col=0;col<size;col++){
            printf("%d ",arr[row][col]);
        }
    }
}

