#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact (int f);
int num(int n,int p);
void afficher();
int main(){
afficher(0,0);
}
int fact(int f)
{
int fa;
if(f<=1)
{fa=1;}
else
{fa=f*fact(f-1);}
return fa;
}
int num(int n,int p){
return (float)fact(n)/((float)fact(p)*fact(n-p));
}
void afficher(int i,int j)
{
if(i<=19)
{
if(j<=i)
    {
      printf("%4d",num(i,j));
      afficher(i,j+1);
    }else
    {
        printf("\n");
        afficher(i+1,0);
    }
}
}
