#include<stdio.h>
#include<conio.h>

main()
{
   float celsius,fehrenhit;
   clrscr();
   printf("enter tempreture in celsius");
   scanf("%f",&celsius);
   fehrenhit=(celsius*9/5)+32;
   printf("%.3f celsius=%.3f fehrenhit", celsius,fehrenhit);
   getch();

}