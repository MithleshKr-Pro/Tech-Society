#include<stdio.h>
int main(){
    int rows,spaceCount1,spaceCount2=0;
    scanf("%d",&rows);
    spaceCount1=((rows*2)-1)/2;
    for(int i=1;i<=(rows*2)-1;i++){
        if(i==2 || i==(rows*2)-2){
            spaceCount2=1;
        }
        for(int j=1;j<=spaceCount1;j++){
            printf(" ");
        }
        printf("*");
        for(int k=1;k<=spaceCount2;k++){
            printf(" ");
        }
        if(i!=1 && i!=(rows*2)-1){
            printf("*");
        }
        if(spaceCount1 > 0 && spaceCount2<(rows*2)-3 && i<rows){
            // printf("   (if)spaceCount1 = %d,spaceCount2 = %d",spaceCount1,spaceCount2);

            spaceCount1-=1;
            spaceCount2+=2;
            // printf("   (if)spaceCount1 = %d,spaceCount2 = %d",spaceCount1,spaceCount2);

            // printf("spaceCount1 = %d\n",spaceCount1);
            // printf("spaceCount2 = %d\n",spaceCount2);
        }else{
            // printf("  (Else)spaceCount1 = %d,spaceCount2 = %d",spaceCount1,spaceCount2);

            spaceCount1+=1;
            spaceCount2-=2;
            // printf("   (Else)spaceCount1 = %d,spaceCount2 = %d",spaceCount1,spaceCount2);

            // printf("spaceCount2 = %d\n",spaceCount2);
        }
        printf("\n");
    }
    return 0;
}