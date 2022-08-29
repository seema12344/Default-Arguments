// A C++ Program using Default Arguments

#include<iostream.h>
#include<conio.h>

int sum(int a, int b = 20)
{
  int result;
  result = a + b;
  cout<<"\nSum= " << result;
}
void main()
{
  int result;
  clrscr();
  result = sum(10, 10);
  result = sum(10);
  getch();
}
