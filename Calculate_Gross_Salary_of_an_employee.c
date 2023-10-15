#include<stdio.h>
int main()
{
    float PF,BS,GS,DA,HRA;
    scanf("%f%f%f",&BS,&HRA,&DA);
    PF=(12.0/100.0)*BS;
    GS=BS+HRA+DA+PF;
    printf("%.2f
",PF);
    printf("%.2f",GS);
}