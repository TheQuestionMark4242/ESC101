#include<stdio.h>
void recurse(int pre, int n, int len){
    if(n>1){
        recurse(10*pre + 5,n-1,len);
        recurse(10*pre + 0,n-1, len);
    }
    else if (n==1) {
        printf("%0*d\n",len, 10*pre +5);
        printf("%0*d\n",len, 10*pre);
    }
}
int main(){
    //int n;
    //scanf("%d", &n);
    recurse(0,3,3);
    return 0;
}
