#include<stdio.h>
int swap(int &a,int &b);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){    /*WLOG let a<b*/
        swap(a,b);
    }
    while(a != 0){
        temp = b%a;
        b = a;
        a = temp; 
    }
    printf("%d",b);
    return 0;
}
int swap(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
}
