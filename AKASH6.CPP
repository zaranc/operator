#include<stdio.h>
#include<conio.h>
main()
{
  int X=5,Y=15,Z=35,c;
   clrscr();
   c=X^3-Y^3-Z^3-3*X^2-Y^2+X^3+Y^2-Y^3-Z^2-Y^3-Y^2+X^3+Z^2-X^2-Z^2+6*X*Y*Z;
   printf("c=%d",c);
   getch();


}