#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  for (int i=1;i<=n;i++)
  {
    if (i==1 || i%2!=0)
    {
      printf("I hate ");
    }
    else if(i%2==0)
    {
      printf("I love ");
    }
    if (i!=n)
    {
      printf("that ");
    }
    else
      printf("it ");
  } 
  printf("\n");  
}