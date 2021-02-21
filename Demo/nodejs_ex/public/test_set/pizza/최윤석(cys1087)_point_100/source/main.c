#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int getdistance(int floor, int line, char gender);

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
out=getdistance(f, l, gender);
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}

int getdistance(int floor, int line, char gender) {
    int rowlen, columnlen;
    int distance=100, temp_d=100;
    if (gender=='M') {
    rowlen=abs(floor-2);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-4);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-1);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-3);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    }
    else if (gender=='W') {
    rowlen=abs(floor-3);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-1);
    columnlen=abs(line-0);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-2);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    rowlen=abs(floor-4);
    columnlen=abs(line-6);
    temp_d=rowlen+columnlen;
    if(temp_d<distance) distance=temp_d;
    }
    return distance;
}