#include <stdio.h>
int input_side(){
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
}

int check_scalene(int a, int b, int c){
if(a!=b && b!=c && c!=a){
printf("tri is scalene");
}
else{
printf("tri is not scalane");
}}

int main(){
int a,b,c;
input_side();
check_scalene(a,b,c);
}