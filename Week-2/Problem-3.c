#include <stdio.h>
int sod();
int main() {
    int temp,count=0;
    scanf("%d",&temp);
    while(temp!=-1){
            if (temp<0){
                temp=0-temp;
            }
            if(sod(temp)>=7){
                count++;
            }
            scanf("%d",&temp);
        }
    printf("%d",count);
	return 0;
}
int sod(int N){
    int ret=0;
    while (N>0){
        ret+=(N%10);
        N=N/10;
    }
    return ret;
}
