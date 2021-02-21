#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>

#define WEEK_DAYS 7
#define STRING_MAX 10

int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
int A=(m+1)*26/10;
int B=K/4;
int C=J/4;

int D;
int E;
int F;

int gau=0;
int i=0;

for(i=0;i<=A;i++)
 {
     gau++;
 }
    
D=gau; 
gau=0;
i=0;

for(i=0;i<=B;i++)
 {
     gau++;
 }
    
E=gau; 
gau=0;
i=0;

for(i=0;i<=C;i++)
 {
     gau++;
 }
    
F=gau;
gau=0; 
i=0;

h=(q+(m+1)*26/10+K+(K/4)+(J/4)+5*J)%7;
//h=(q+D+K+E+F+5*J)%7-3;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
