#include<stdio.h>

int main(){
int n,max=0,index=0;

printf("Enter your array size :- ");
scanf("%d",&n);

int arr[n];

for(int i = 0 ; i<n ; i++){
    printf("Enter %d th element :- ",i);
    scanf("%d",&arr[i]);

}

for (int i =0 ; i<(n/2); i ++){

    int first = arr[i];
    int last  = arr[n-1-i];

    arr[i] = last ;
    arr[n-1-i] = first ;
}
for(int i = 0 ; i<n ; i++){
    printf("%d th element is %d \n",i,arr[i]);
}

for (int i=0 ; i<n ; i++){
    if(max<arr[i]){
        max = arr[i];
        printf("%d",arr[i]+1);
        index = i;
    }
}

printf("\n\n Max number = %d",max);
printf("Max number index = %d",index);

return 0;

}
