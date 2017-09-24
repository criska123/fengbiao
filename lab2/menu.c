#include <stdio.h>
#include <stdlib.h>
void help();
void quit();
void hello();
void bigger();
void add();
void sub();
void multi();
void divi();

int main()
{
    char cmd[256];
    while(1)
    {
        scanf("%s",cmd);
        if(strcmp(cmd,"help") == 0)
        {
            help();
        }
        else if(strcmp(cmd,"quit") == 0)
        {
            quit();
        }
        else if(strcmp(cmd,"hello") == 0)
        {
            hello();
        }
        else if(strcmp(cmd,"bigger") == 0)
        {
            bigger();
        }
        else if(strcmp(cmd,"add") == 0)
        {
            add();
        }
        else if(strcmp(cmd,"sub") == 0)
        {
            sub();
        }
        else if(strcmp(cmd,"multi") == 0)
        {
            multi();   
        }
        else if(strcmp(cmd,"divi") == 0)
        {
            divi();
        }
        else
        {
            printf("error cmd!\n\n");
            help();
        }         
    }
    return 0;
}

void help()
{
printf("----------------------\n");
printf("-------help-----------\n");
printf("-------quit-----------\n");
printf("-------hello----------\n");
printf("-------bigger---------\n");
printf("-------add------------\n");
printf("-------sub------------\n");
printf("-------multi----------\n");
printf("-------divi-----------\n");
printf("----------------------\n");
}

void quit()
{
    exit(0);
}

void hello()
{
    printf("it is fengbiao de zuoye!\n");
}

void bigger()
{
    printf("2>1\n");
}

void add()
{ 
    double num1,num2,add;
    scanf("%lf %lf",&num1,&num2);
    add = num1 + num2;
    printf("%lf + %lf = %lf\n",num1,num2,add);
}

void sub()
{
    printf("sub a to b\n");
}

void multi()
{
    printf("multi sth to sth\n");
}

void divi()
{
    printf("a divi b equal c\n"); 
}

































