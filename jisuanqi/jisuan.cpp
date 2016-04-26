#include "jisuan.h"
#include "iostream.h"
int jisuan::getxy(int a, int b)
{
	x=a;
	y=b;
	return 0;
}
int jisuan::jia()
{
   return x+y;
}
int jisuan::jian()
{
  return x-y;
}
int jisuan::cheng()
{
  return x*y;
}
double jisuan::chu()
{
   return (x*1.0)/(y*1.0);
}
