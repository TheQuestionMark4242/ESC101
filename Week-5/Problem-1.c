#include<stdio.h>
int is_valid(int d, int m, int y){
    //Function to check if the given date is valid.
    //Do not remove these comments.
    if(d>31||m>12||d<1||m<1||y<0){
        return 0;
    }
    if (m==2){
        if (d==29){
            if (is_leap(y)){
                return 1;
            }
            else {
                return 0;
            }
        }
        else if((d==30)||(d==31)){
                return 0;
            }
        else {
                return 1;
            }
    }
    if (is_big(m)){
        return 1;
    }
    else {
        if(d==31){
            return 0;
        }
        else return 1;
    }
}
int is_leap(int y){
     if (y%400==0) return 1;
     if (y%100==0) return 0;
     if (y%4==0)   return 1;
     else return 0;
}
int is_big(int m){
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 1;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
        default:    
            return 0;
    }
}
int main(void) {
  
 //Insert your code
  int d, m, y;
  scanf("%d %d %d", &d, &m, &y);
  if (is_valid(d,m,y)){
      printf("Valid");
  }
  else {
      printf("Not Valid");
  }
  return 0;
}
