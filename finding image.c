#include<stdio.h>

int main(){
int h, k, x1, y1, a, b, c, d;
printf("Enter the coordinates x1 and y1\n");
scanf("%d %d",&x1,&y1);
printf("Enter the  values of coefficients of x and y along with the constant c for the linear equation\n");
scanf("%d %d %d",&a,&b,&c);
d=(-2((a*x1)+(b*y1)+c))/((a*a)+(b*b));
h=(a*d)+x1;
k=(b*d)+y1;
printf("The image of perpendicular(h,k) are (%d,%d)\n",h,k);
getch();
return 0;
}

