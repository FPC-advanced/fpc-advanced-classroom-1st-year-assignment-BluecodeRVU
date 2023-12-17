#include <stdio.h>

//Write a C program to find the type of progression (arithmetic progression/geometric progression) and the next successive member of the three successive members of a sequence
void input(float a[3]){
  for(int i=0;i<3;i++){
    printf("pls enter value: ");
    scanf("%f",&a[i]);
  }
}
int sequenceidentify(float a[3]){

  if((a[1]-a[0])==(a[2]-a[1])){
    return 1;
  }
  else if((a[1]/a[0])==(a[2]/a[1])){
    return -1;
  }
    return 0;
}

void output(float a[3],int ans){
  if(ans==1){
    int d=a[1]-a[0];
    printf("the progression is arithimatic with next terms: %f, %f", a[0]+(3*d),a[0]+(4*d));
  }
  else if (ans==-1){
    float r=a[1]/a[0];
    printf("progression is arithimatic with next terms: %f,%f",a[2]*r,a[2]*r*r);
  }
  else{
    printf("the following is not a progression.");
  }
}

int main(){
  float a[3];
  input(a);
  int ans=sequenceidentify(a);
  output(a,ans);
}