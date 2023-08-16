#include<stdio.h>
#include<math.h>

int main(){
int a,k,b;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
k=pow(a,b);
printf("The value of %d to the power of %d is %d",a,b,k);
getch();
return 0;
}

