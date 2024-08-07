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