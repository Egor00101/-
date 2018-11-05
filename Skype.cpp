
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
    cout << a;
  }
    else
    {
      cout << b;
    }
}
  void f3(int a, int b)
{
  if(a != b)
  {
    if(a>b)
    {
      b = a;
      cout << a << b;
    }
    else
    {
      a = b;
      cout << a << b;
    }
  }
    else
      a  = b = 0;
    cout << a << b;
}
  int main()
{
  int a;
  int b;
  cout << f1(4);
    f2(3,5);
    f3(5,7);
  return 0; 
}
