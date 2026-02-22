#include<stdio.h>
int main(){
    int n, oddsum=0 ,evensum=0;
    scanf("%d",&n);
    for(int i=0; i<=n;i++){
        if(i%2==0){
            evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }
    
    printf("the sum of odd numbers is   %d\n",oddsum);
    printf("the sum of even numbers is  %d\n",evensum);
    return 0;
    
}