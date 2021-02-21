#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int b, h;
	int out;
    float half;

	scanf("%d %d", &b, &h);
    if(h>100) {printf("Input Error\n"); return 0;}
   
    half = b/2;
   //  printf("%f\n",half);
 //   printf("half %f",half);

    float v=0;
	////////////////////////////////////////
    float ze;
    ze = pow(half,2);
  //  printf("%f",ze);
  //  printf("%f\n",v);
  //printf("ze %f h %d\n",ze,h);
    v = 0.52333333*ze*h;
    

	////////////////////////////////////////
    out = (int)v;
    printf("%d\n",out);
	//printf("%0.f\n", v);

	return 0;
}