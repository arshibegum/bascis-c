#include<stdio.h>
int main()
{
    int x,S,H,M;
    scanf("%d",&x);
    H=x/3600;
    M=(x-(3600*H))/60;
    S=x-(3600*H)-(M*60);
    printf("H:M:S-%d:%d:%d",H,M,S);
}