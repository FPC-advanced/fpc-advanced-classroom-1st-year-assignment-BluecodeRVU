#include <stdio.h>
int inp(){
    printf("pls enter n: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    int a[100];
        printf("Pls enter an array: ");
        scanf("%d",a[i]);
    }
    return n;

}
int target(int n, int a[100]){
    int t;
    printf("pls enter target val:");
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i]+a[j]==t){
                return 1;
            }
        }
    }
    return 0;
}