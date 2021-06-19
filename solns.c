/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[],int k)
{
  int c,i;
  c=x[0];
  for(i=1;i<k;i++)
  {
    if(x[i]>c)
      c=x[i];
  }
  return(c);
  printf("%d",c);
}

int min(int a[],int n)
{
  int min=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]<min)
      min=a[i];
    else
      continue;
  }
  return min;
}

 float average(int a[],int n)
 {
   int i;
   float sum=0;
   for(i=0;i<n;i++)
   {
     sum=sum+a[i];
   }
   return(sum/n);
 }

 int mode(int a[],int n)
 {
   int maxvalue=0,maxcount=0,i,j;
   for(i=0;i<n;++i)
   {
     int count=0;
     for(j=0;j<n;++j)
     {
       if(a[j]==a[i])
         ++count;
     }
     if(count>maxcount)
     {
       maxcount=count;
       maxvalue=a[i];
     }
   }
   return(maxvalue);
 }

int factors(int num,int arr[])
{
  int cpy=num;
  int cnt=0;
  int cnt1=0;
  for(int i=2;i<num/2;i++)
  {
    if(num%i==0)
    {
      for(int j=2;j<=i;j++)
      {
        if(i%j==0)
          cnt+=1;
      }
      if(cnt==1)
      {
        while(cpy%i==0)
        {
          arr[cnt1]=i;
          cpy/=i;
          cnt1+=1;
        }
        cpy=num;
      }
        cnt=0;
      }
      else
        continue;
    }
    return cnt1;
}
  
      
  
