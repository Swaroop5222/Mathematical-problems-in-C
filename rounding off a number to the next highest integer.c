#include<stdio.h>
#include<math.h>

int main(){
float a;
printf("Enter the value of a\n");
scanf("%f",&a);
printf("nearest value of %f is %.f",a,ceil(a));
getch();
return 0;
}
