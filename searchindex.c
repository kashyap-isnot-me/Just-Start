#include<stdio.h>

int linear(int a[] , int s ,         int r);
int binary(int a[] , int s , int l , int r);

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10,11};

    int linearindex = linear(a,9,10);
    printf("\nLinear index = %d\n",linearindex);

    int binaryindex = binary(a,5,0,10);
    printf("\nBinary index = %d\n",binaryindex);



    return 0;
}

int linear(int a[] , int s , int r){

    for (int i = 0 ; i <= 10 ; i++){
        if (a[i] == s) 
            return i;
    }

}


int binary(int a[] , int s , int l , int r){

    int mid = l + (r-l) / 2;

    if (s == a[mid])
        return mid;
    
    else if (s < a[mid])
        return binary(a,s,l,mid-1);

    else 
        return binary(a,s,mid+1,r);

}
