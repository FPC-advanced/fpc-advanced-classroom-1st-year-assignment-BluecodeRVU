#include <stdio.h>
void input_camel_details(float *radius, float *height, float *length){
    printf("Enter the radius: ");
    scanf("%f", radius);
    printf("enter height: ");
    scanf("%f",height);
    printf("enter length:");
    scanf("%f",length);
}
int find_mood(float radius, float height, float length){
    
    /*if(radius<height && radius<length){
        return 1;
    }
    else if(height<length && height<radius){
        return 2;
    }
    else { return 3;

    }*/
}
void output(int mood){
    if(mood==1){
        printf("sick");
    }
    else if(mood==2){
        printf("happy");
    }
    else{
        printf("tense");
    }
}
int main(){
    float radius, height, length;
    input_camel_details(&radius,&height,&length);
    int mood = find_mood(radius,height,length);
    output(mood);

}