#include<stdio.h>
#include<math.h>

int main(){
int a, x1,x2,y1,y2;
printf("Enter the coordinate x1\n");
scanf("%d",&x1);
printf("Enter the coordinate x2\n");
scanf("%d",&x2);
printf("Enter the coordinate y1\n");
scanf("%d",&y1);
printf("Enter the coordinate y2\n");
scanf("%d",&y2);
a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("Distance between 2 points is %d",a);
return 0;
}
