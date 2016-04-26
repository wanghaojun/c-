
#include "jisuan.h"
#include "iostream.h"
int main()
{
	jisuan j;
  int a,b,c;
  double f;
  char i;
  cout<<"请输入要进行的运算，目前可以进行+，-，*，/四种运算\n"<<endl;
  cin>>a>>i>>b;
  j.getxy(a,b);
  if (i=='+')
  {
     c=j.jia();
	 	cout<<c<<endl;
  }
  if (i=='-')
  {
     c=j.jian();
	 	cout<<c<<endl;
  }
  if (i=='*')
  {
    c=j.cheng();
		cout<<c<<endl;
  }
  if (i=='/')
  {
    f=j.chu();
	cout<<f<<endl;
  }
return 0;
}