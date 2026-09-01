#include<stdio.h>

int main (){

int arr[5][4];

for (int i = 0 ; i<5 ; i++){
    printf("Enter %dth student CP marks : ",(i+1));
    scanf("%d",&arr[i][0]);
}
printf("\n");

for (int i = 0 ; i<5 ; i++){
    printf("Enter %dth student CS marks : ",(i+1));
    scanf("%d",&arr[i][1]);
}
printf("\n");

for (int i = 0 ; i<5 ; i++){
    printf("Enter %dth student Maths marks : ",(i+1));
    scanf("%d",&arr[i][2]);
}
printf("\n");

for (int i = 0 ; i<5 ; i++){
    printf("Enter %dth student Physics marks : ",(i+1));
    scanf("%d",&arr[i][3]);
}

printf("\n");
float s1=0,s2=0,s3=0,s4=0,s5=0;
float cp=0,cs=0,mat=0,phy=0;

for(int i = 0 ,j = 0 ; i<5,j<5 ; i++,j++){
    s1 = s1 + arr[0][i];
    s2 = s2 + arr[1][i];
    s3 = s3 + arr[2][i];
    s4 = s4 + arr[3][i];
    s5 = s5 + arr[4][i];

    cp  = cp  + arr[j][0];
    cs  = cs  + arr[j][1];
    mat = mat + arr[j][2];
    phy = phy + arr[j][3];
}

printf("Total of 1th student = %f\n",s1);
printf("Total of 2th student = %f\n",s2);
printf("Total of 3th student = %f\n",s3);
printf("Total of 4th student = %f\n",s4);
printf("Total of 5th student = %f\n\n",s5);

printf("AVG of CP = %f\n",cp/5);
printf("AVG of CS = %f\n",cs/5);
printf("AVG of Mat = %f\n",mat/5);
printf("AVG of PHY = %f\n",phy/5);

return 0;

}
