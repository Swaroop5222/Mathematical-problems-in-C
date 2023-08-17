#include<stdio.h>

int main(){
int h, k, x1, y1, a, b, c, d;
// a,b,c are coefficients of the linear equation ax+by+c=0
printf("Enter the coordinates x1 and y1\n");
scanf("%d %d",&x1,&y1);
printf("Enter the  values of coefficients of x and y along with the constant c for the linear equation\n");
scanf("%d %d %d",&a,&b,&c);
d=(-((a*x1)+(b*y1)+c))/((a*a)+(b*b));
h=(a*d)+x1;
k=(b*d)+y1;
printf("The foot of perpendicular(h,k) are (%d,%d)\n",h,k);
getch();
return 0;
}
