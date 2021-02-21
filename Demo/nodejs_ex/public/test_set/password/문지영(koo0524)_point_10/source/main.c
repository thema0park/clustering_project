#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define TEXT_MAX 100

int fibo(int num){
if(num==1||num==2) return 1;
else return fibo(num-1)+fibo(num-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX]={'\0'};

	scanf("%d", &fibo_n);
	scanf("%s", text);

int k =0;
k=fibo(fibo_n);

int i=0;

if(k<=26) k +=0;
else {while(k>=26) {k -= 26;}}

int changeapbnum=0;
changeapbnum=92-k;

int sub=0;
sub=text[i]-changeapbnum;


for(i=0; (int)text[i]!=NULL; i++){



if(text[i]==changeapbnum){
    text[i]='A';
}
else if(text[i]>changeapbnum){
    
    text[i]=65+sub;
}
else text[i]+=k;


}





	printf("%s\n", text);
	return 0;


}