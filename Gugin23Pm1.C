#include <stdio.h>
#include <math.h>
int main(){
double x=0.2;
double y=1;
double z=0;
double a=0;
double b=0;
for(y=1;y<3;y+=1.2){
for(x=0.2;x<1;x+=0.5){
if(x*y*y<2){
a=1-sin(x*x+y*y*y);
b=sqrt(x*x);
if(a<b){
z=a;
}
else {
z=b;
}
}
else {
z=sqrt(x*x*y+8);
};
printf("x=%f, y=%f, z=%f\n",x,y,z);
}
}
return 0;
}
