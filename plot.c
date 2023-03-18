#include <stdio.h>
#include <math.h>
void main(){
    float a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
    float b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
    float angle[6]={0.78,0.89,1.35,9.00,1.25,1.75};
    int i,p;
    float area[6];
    for(i=0;i<6;i++){
        area[i]=(1.0/2)*a[i]*b[i]*sin(angle[i]);
        printf("Area of plot no.%d= %.2f\n",i+1,area[i]);
    }
    p=0;
    for(i=0;i<6;i++){
    if(area[i]>area[p])
    p=i;}
    printf("The largest plot is plot no. %d with area %.2f\n",p+1,area[p]);
}
