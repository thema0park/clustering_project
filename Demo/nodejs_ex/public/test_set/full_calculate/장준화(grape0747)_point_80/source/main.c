#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1];
    int i;
    int temp;
    int a,b,c,d,e,f,g,h,j,k,l,m,n,o,p,q;
    int n1,n2;
    int sum=0;
   
	scanf("%s %s", byte[0], byte[1]);
    a=byte[0][0]-48;
    b=byte[0][1]-48;
    c=byte[0][2]-48;
    d=byte[0][3]-48;
    e=byte[0][4]-48;
    f=byte[0][5]-48;
    g=byte[0][6]-48;
    h=byte[0][7]-48;
    a*=128;
    b*=64;
    c*=32;
    d*=16;
    e*=8;
    f*=4;
    g*=2;
    h*=1;
    n1=a+b+c+d+e+f+g+h;
    j=byte[1][0]-48;
    k=byte[1][1]-48;
    l=byte[1][2]-48;
    m=byte[1][3]-48;
    n=byte[1][4]-48;
    o=byte[1][5]-48;
    p=byte[1][6]-48;
    q=byte[1][7]-48;
    j*=128;
    k*=64;
    l*=32;
    m*=16;
    n*=8;
    o*=4;
    p*=2;
    q*=1;
    n2=j+k+l+m+n+o+p+q;
    sum=n1+n2;
    for(i=0;i<8;i++)
    {
        out[i]=sum%2;
        sum/=2;
    }
    for(i=0;i<4;i++)
    {
        temp=out[i];
        out[i]=out[7-i];
        out[7-i]=temp;

    }
    for(i=0;i<8;i++)
    printf("%d",out[i]);
    printf("\n");
    
	return 0;
}
