#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int main()
{
	int b, h;
	double answer = 0;
    double r = 0;

    int cast = 0;

	scanf("%d %d", &b, &h);

 //   printf("%f %d\n",answer,cast);

    r = b/2.0;
    answer = pow(r,2.0) / 2 * 3.14 * h / 3;
    //answer = 0.5 * 3.14 * r * r * h / 3;
 //   printf("%f %d\n",answer,cast);

    //DEBUG2
    printf("%.lf\n",answer);

    answer *= 10;
    cast = answer;
//    printf("%f %d\n",answer,cast);

    if( ( cast % 10) >= 5 ){
        answer += 10;
    }

    answer /= 10;
    cast = answer;
    //DEBUG1
    //printf("%d\n",cast);
    

	////////////////////////////////////////

/*
    answer *= 10;
    if(((int)answer % 10) >= 5){
        answer += 10;
    }
    answer /= 10;
*/
    //printf("%.lf\n",answer);
	//printf("%.lf\n", answer);

	return 0;
}