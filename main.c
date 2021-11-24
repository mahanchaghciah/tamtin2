#include <stdio.h>
#include <conio.h>
int main() {
    int a,b;
    double r;
    char c;
    printf("please enter an integer and a character:");
    scanf("%d %c",&a,&c);
    if(a==1&&c=='m')
    {
        printf("environment of square by this formula P=a*4");
        printf("please enter value of a: ");
        scanf("%d",&a);
        printf("P is =%d",a*4);
    }
    else if(a==1&&c=='n')
    {
        printf("area of square by this formula S=a*a");
        printf("please enter value of a: ");
        scanf("%d",&a);
        printf("S is =%d",a*a);
    }
    else if(a==2&&c=='n')
    {
        printf("environment of rectangle by this formula P=(a+b)*2");
        printf("please enter value of a and b: ");
        scanf("%d%d",&a,&b);
        printf("P is =%d",(a+b)*2);
    }
    else if(a==2&&c=='m')
    {
        printf("area of rectangle by this formula S=a*b");
        printf("please enter value of a and b: ");
        scanf("%d%d",&a,&b);
        printf("S is =%d",a*b);
    }
    else if(a==3&&c=='n')
    {
        printf("environment of circle by this formula P=(3.14*r)*2");
        printf("please enter value of r: ");
        scanf("%lf", &r);
        printf("P is =%f", (3.14 * r) * 2);
    }
    else if(a==3&&c=='m')
    {
        printf("area of circle by this formula S=(3.14*r*r)");
        printf("please enter value of r: ");
        scanf("%lf", &r);
        printf("S is =%f", 3.14 * r * r);
    }
    printf("MAHAN CHAGHCIAH");
    getch();
    return 0;
}