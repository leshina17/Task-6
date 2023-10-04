#include <stdio.h>
#include <math.h>

int main(){
    double x1,x2,x3,y1,y2,y3,c1,c2,c3,p,s;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    c1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    c2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    p=c1+c2+c3;
    s=sqrt(p/2*(p/2-c1)*(p/2-c2)*(p/2-c3));
    printf("%lf %lf",p,s);
return 0;
}