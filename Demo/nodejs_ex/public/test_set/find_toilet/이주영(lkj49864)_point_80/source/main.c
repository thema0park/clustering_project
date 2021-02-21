#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Man 9
#define Woman 8

int main()
{
 char C;
 int x, y;
 int ans1=0, ans2=0;
 int i, j;
 scanf("%c %d %d", &C, &y, &x);
 if(C=='M'){
     if(y==5){
         ans1 +=1;
         ans1 +=x;
         ans2 +=10;
     }
     else if(y%2==1){
         ans1 += (6-x);
         ans2 +=1;
         ans2 +=x;
     }
     else if(y%2==0){
         ans1 +=x;
         ans2 +=1;
         ans2 +=(6-x);
     }
 }
 else if(C=='W'){
     if(y==5){
         ans1 +=1;
         ans1 +=(6-x);
         ans2 +=10;
     }
     else if(y%2==1){
         ans1 += (6-x);
         ans1 +=1;
         ans2 +=x;
     }
     else if(y%2==0){
         ans1 +=x;
         ans1 +=1;
         ans2 +=(6-x);
     }
 }
  if(ans1>=ans2){
     printf("%d\n", ans2);
 }
 else printf("%d\n", ans1);
}