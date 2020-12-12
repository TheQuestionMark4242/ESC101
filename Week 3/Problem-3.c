#include<stdio.h>
int main(){
    int N, M, temp, flag=0, jump=0,score=0;
    int x=0,y=0; //Store the position 
    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < N ; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &temp);
            if((i < y)||( j < x )){ //Skip to next position when we have jumped
                continue;
            }
            if (jump == 1){ //Check if moving to next row is possible
                if (((x == j)||(x == j-1))&&(temp ==0)){
                    x = j;
                    y = i;
                    jump=0;
                    continue;
                }
                else if (((j==(x+1)||(j==M-1))&&(temp!=0))){ //If not 
                    flag=1;
                    continue;
                }
                else{
                    continue;
                }
            }
            if (temp==0){
                x = j;
                y = i;
            }
            else {
                y++; //Move down when we can't move along row
            }
        }
        score+=(x*x*x);
        jump = 1;
    }
    if(flag==1){
        printf("WRONG MAZE");
    }
    else{
        printf("%d",score);
    }
    return 0;
}
