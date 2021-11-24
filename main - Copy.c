#include <stdio.h>
#include <conio.h>
int main() {
    int Xa,Ya;
    printf("please enter Xa and Ya: \n");
    scanf("%d%d",&Xa,&Ya);
    if(Xa>=0 && Ya>=0){
        printf("A point is positive\n");
        printf("A(%d,%d)",Xa,Ya);
    }
    else if(Xa<=0 && Ya<=0)
    {
        printf("A point is negative\n");
        printf("A(%d,%d)",Xa,Ya);
    }
    else
    {
        printf("A(%d,%d)",Xa,Ya);
    }
    int Xb,Yb;
    printf("\nplease enter Xb and Yb: \n");
    scanf("%d%d",&Xb,&Yb);
    if(Xb>=0 && Yb>=0){
        printf("B point is positive\n");
        printf("B(%d,%d)",Xb,Yb);
    }
    else if(Xb<=0 && Yb<=0)
    {
        printf("B point is negative\n");
        printf("B(%d,%d)",Xb,Yb);
    }
    else
    {
        printf("B(%d,%d)",Xb,Yb);
    }
    printf("mahan chaghciah");
    getch();
    return 0;
}
