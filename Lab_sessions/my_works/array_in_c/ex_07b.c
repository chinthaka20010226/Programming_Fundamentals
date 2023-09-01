#include <stdio.h>
#include <math.h>
int main(){

    double sum_xy=0,sum_xx=0,sum_yy=0,sum_x=0,sum_y=0,r,byx,fStep,sStep,tStep;
    double x[12]={1,0,3.2,4,1,5,7,0,2,1.1,-1,4.1};
    double y[12]={3,5,0,-1,0.5,-1,-2,3,4,1,8.1,2};

    for(int i=0;i<12;i++)
    {
        sum_xy+=(x[i]*y[i]);
        sum_x+=x[i];
        sum_y+=y[i];
        sum_xx+=pow(x[i],2);
        sum_yy+=pow(y[i],2);

    }
    fStep = sum_xy-((sum_x*sum_y)/12);
    sStep = sqrt(sum_xx-(pow(sum_x,2)/12)) ;
    tStep = sqrt(sum_yy-(pow(sum_y,2)/12));

    r = fStep /(sStep * tStep ) ;
    byx =fStep / (pow(sStep,2));

    printf("  r = %lf\n",r);
    printf("byx = %lf",byx);
    return 0;
}