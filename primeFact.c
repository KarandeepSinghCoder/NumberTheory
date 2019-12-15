//karandeep Singh
//vitVellore 
#include <stdio.h>
#include <math.h>
void primefact(int n)
{
   
   while(n%2==0)
   {
       printf("%d ",2);
       n=n/2;
   }
    
    for(int i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        
    }
if (n > 2) 
    printf ("%d ", n);
   
}
int main()
{
    int n;
    printf("Input the numbers\n");
    scanf("%d",&n);
    printf("Prime factors are\n");
    primefact(n);
    return 0;
}