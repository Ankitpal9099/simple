//find the area of a rectangular prism formula : A=2(wl+hl+hw) 
#include<stdio.h>
#include<conio.h>
void main()
{
    int w,l,h;
    printf("enter the width of the prism\n");
    scanf("%d",&w);
    printf("enter the length of the prism\n");
    scanf("%d",&l);
    printf("enter the height of the prism\n");
    scanf("%d",&h);
    printf("the area of the prism is %d",2*(w*l+h*l+h*w));
    getch();
}
