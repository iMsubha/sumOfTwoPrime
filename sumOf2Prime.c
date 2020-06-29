/*sum of two prime number
Enter a positive integer: 34
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17*/

#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int i,sroot,flag=0;
    sroot = sqrt(n);
    for(i=2 ; i <= sroot ; i++){
        if((n%i)==0){
            flag=1;
        }
    }
    if(flag==0){
            return 1;
            //printf("Prime");
    }else{
            return 0;
            //printf("Not Prime");
    }
}
int main(){
    int n,num,i,j,k;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    isPrime(n);
    for(i = 1; i <= n/2; i++){
           j = n-i;
            if(isPrime(i) && isPrime(j)){
              k = i + j;
              printf("%d + %d = %d\n",i,j,n);
            }
       }
}


