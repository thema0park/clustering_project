#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b,h;
	int out;
    float r;    //팔달관 밑면인 반원의지름 , 높이 입력받기
    //원주율은 3.14사용


	scanf("%d %d", &b, &h);
   // printf("%d",b);

	////////////////////////////////////////
    //r=(0.5)*(3.14)*(b/2)*(b/2)*h/3;
    //printf("%f",;
   // out=(int)r;

   r=(0.5)*(3.14)*(b/2)*(b/2)*h*0.333333333;
   printf("%d\n",(int)r);



	////////////////////////////////////////

	

	return 0;
}