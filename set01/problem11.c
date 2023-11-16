#include <stdio.h>

struct Complexnum
{
    float real; float img;
};
typedef struct Complexnum com;

com input_complex(){
    com c1;
    printf("enter the real part for c\n");
scanf("%f",&c1.real);
printf("enter the img part for c\n");
scanf("%f",&c1.img);
return c1;
}

com add_complex(com c1,com c2){
    com add;
    add.real=c1.real+c2.real;
    add.img=c1.img+c2.img;
    return add;
}
void output(com add){
    printf("sum is %f + i%f\n",add.real,add.img);
}
int main()
{
    com c1,c2,add;
    c1=input_complex();
    c2=input_complex();
    add=add_complex(c1,c2);
    output(add);

    

}