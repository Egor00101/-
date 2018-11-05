
  #include <iostream>
  using namespace std;
  int f1 (int a)
{
     if(a>0)
     {
       return a+1;
     }
    else
    {
      return a;
    }
}
  void f2 (int a,int b)
{
  if(a>b)
  {
    cout << a <<"\n";
  }
    else
    {
      cout << b << "\n";
    }
}
  void f3(int a, int b)
{
  if(a != b)
  {
    if(a>b)
    {
      b = a;
    }
    else
    {
      a = b;
    }
  }
    else
    {
      a  = b = 0;
    }
    cout << a << " " << b <<"\n";
}
int f4(int a, int b, int c)
{
 if(a>b&&a>c)
 {
  return a ; 
 }
  if(b>a&&b>c)
  {
   return b ; 
  }
  if(c>a&&c>b)
  {
   return c; 
  }
}
  int main()
{
  int a;
  int b;
  int c;
  cout << f1(4)<<"\n";
    f2(3,5);
    f3(5,7);
   cout<<f4(1,3,5)<<"\n";
  return 0; 
}
