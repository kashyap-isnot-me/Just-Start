#include<stdio.h>
#include<math.h>

int main(){

    // i = i + 1      i += 1        i++

    //  ++i  ==  { increas then use }    i++ == { use then increas }
    //  pre-increment                    post-increment
    for ( int i =0 ; i <=10 ; i++ ){

        printf("%d " , i );
    }

    return 0;
}