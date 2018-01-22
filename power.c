#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,p;
    
    printf("Enter the no\n");
    scanf("%d",&n);
    
    printf("Enter the expoent\n");
    scanf("%d",&x);
    
     p=pow(n,x);
      printf("The power of no=%d",p);
      return 0;
      }