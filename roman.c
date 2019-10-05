#include<stdio.h>
void roman(int);
int leap(int);
void word(int);
int num(int);
void main()
{
    int year,r;

    printf("enter year\n");
    scanf("%d",&year);
    printf("\nroamn conversion of %d is ;\n\n",year);
    roman(year);

    leap(year);

    printf(" %d in words ;\n\n",year);
    word(year);



}
void roman(int year)
{int a;
    a=year/1000;
    year%=1000;
    while(a!=0)
    {
        printf("m");
        a--;
    }
    a=year/500;
    year%=500;
    while(a!=0)
    {
        printf("d");
        a--;
    }
    a=year/100;
    year%=100;
    while(a!=0)
    {
        printf("c");
        a--;
    }
    a=year/50;
    year%=50;
    while(a!=0)
    {
        printf("l");
        a--;
    }
    a=year/10;
    year%=10;
    while(a!=0)
    {
        printf("x");
        a--;
    }
    a=year/5;
    year%=5;
    while(a!=0)
    {
        printf("v");
        a--;
    }
    while(year!=0)
    {
        printf("i");
        year--;
    }
}
int leap(int year)
{
  if(year%4==0)
    printf("\n\nleap year\n\n");
  else
    printf("\n\nnot a leapyear\n\n");
}
void word(int year)
{
    int a,b;

    a=year/1000;
    if(a){
    num(a);
    printf("thousand ");}
    year%=1000;

    a=year/100;
    if(a){
    num(a);
    printf("hundred ");}
    year%=100;

    a=year/10;
    {
        if(a==2)
            printf("twenty ");
        if(a==3)
            printf("thirty ");
        if(a==4)
            printf("forty ");
        if(a==5)
            printf("fifty ");
        if(a==6)
            printf("sixty ");
        if(a==7)
            printf("seventy ");
        if(a==8)
            printf("eighty ");
        if(a==9)
            printf("ninety ");

    }
    year%=10;

    if(year)
        num(year);

}
int num(int x)
{
    if(x==1)
        printf("one ");
    if(x==2)
        printf("two ");
    if(x==3)
        printf("three ");
    if(x==4)
        printf("four ");
    if(x==5)
        printf("five ");
    if(x==6)
        printf("six ");
    if(x==7)
        printf("seven ");
    if(x==8)
        printf("eight ");
    if(x==9)
        printf("nine ");
}
