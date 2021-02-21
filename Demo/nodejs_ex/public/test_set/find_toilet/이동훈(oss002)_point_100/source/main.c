#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fourcmp(int d1, int d2, int d3, int d4) {
    int num[4];
    num[0] = d1;
    num[1] = d2;
    num[2] = d3;
    num[3] = d4;
    int i,j;
    int temp;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            if (num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = num[i];
            }

        }
    }

    return num[0];
}

int abs(int a) {
    if (a >= 0) {
        return a;
    }
    if (a < 0) {
        return -a;
    }
}




int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    //여자 : (1,0), (2,6), (3,0), (4,6)
    //남자 : (1,6), (2,0), (3,6), (4,0)

    int d1,d2,d3,d4;
    if (l == 3 && f < 5) {
        out = 3;
    }
    else if(l == 3 && f ==5) {
        out = 4;
    }
    else {
        if(gender == 'W') {
            d1 = abs(f-1) + (l-0);
            d2 = abs(f-2) + (6-l);
            d3 = abs(f-3) + (l-0);
            d4 = abs(f-4) + (6-l);
        }

        else if(gender == 'M') {
            d1 = abs(f-1) + (6-l);
            d2 = abs(f-2) + (l-0);
            d3 = abs(f-3) + (6-l);
            d4 = abs(f-4) + (l-0);
        }
        out = fourcmp(d1,d2,d3,d4);
    }

    


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}