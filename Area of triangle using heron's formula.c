#include<stdio.h>
#include<math.h>

int main(){
int a, b, delta, c;
int s;
printf("Enter the value of length of the sides a, b, c\n");
scanf("%d %d %d",&a,&b,&c);
s=((a+b+c)/2);
delta=sqrt((s)*(s-a)*(s-b)*(s-c));
printf("The area of triangle is %d",delta);
getch();
}
