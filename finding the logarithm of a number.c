#include<stdio.h>
#include<math.h>

int main(){
int n;
float k;
printf("Enter the number\n");
scanf("%d",&n);
k=log10(n);
printf("log(%d)=%f",n,k);
getch();
return 0;
}
