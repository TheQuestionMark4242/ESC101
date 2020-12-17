#include <stdio.h>
int main()
{
    char run;
    scanf("%c",&run);
    int res ,block ,r , flag=0;
    if (run=='*'){
        res = 0;
        do {    
            block = 1;
            do {
                scanf ("%d", &r);
                if((r<0)||(r>9)){
                    flag=1;
                    break;
                }   
                block*=r;
                //printf("Block: %d\n r: %d\n",block,r);
                if((run!='+')&&(run!='*')&&(run!=';')||(scanf ("%c", &run)!=1)){
                    flag = 1;
                    break;
                }  
            }while((run != '+')&&(run != ';'));
            
            res+=block;
            //printf("Block: %d\n Res: %d\n",block,res);
        } while((run != ';')&&(!flag));
    }
    else if (run=='+'){
        res = 1;
        do {    
            block = 0;
            do {
                scanf ("%d", &r);
                if((r<0)||(r>9)){
                    flag = 1;
                    break;
                }
                block+=r;
                if((run!='+')&&(run!='*')&&(run!=';')||(scanf ("%c", &run)!=1)){
                    flag = 1;
                    break;
                }   
            }while((run != '*')&&(run != ';'));
             
            res*=block;
        } while((run != ';')&&(!flag));
    }
    if (flag){
        printf("-1");
    }
    else{
        printf("%d",res);
    }
	return 0;
}


    


