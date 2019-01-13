#include<stdio.h>
#include<conio.h>
int main ()
{
    int main();
    printf("Kelipatan 7 yang habis di bagi 2 (1-50).\n\n");
    int i=7;
    while(i<50)
    {
        if(i%2==0&&i%7==0)
        {
            printf("\n%d",i);
        }i++;
    }
    getch();
}
