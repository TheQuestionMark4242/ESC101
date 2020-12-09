#include<stdio.h>
int main(){
    int a,b,max=1,len=1; 
    scanf("%d %d", &a, &b);   
    while(b!= -1){ 
        if(b>a){
            len++;
        }   
        else {
            if(len>max){
                max=len;
            }
            len=1;
        }
        a=b;
        scanf("%d", &b);
    }
    printf("%d",max);
    return 0;
}
