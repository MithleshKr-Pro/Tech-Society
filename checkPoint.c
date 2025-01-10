#include <stdio.h>
#include <stdlib.h>
int main(){
    int lenRoad,chkPts,spclChkPts,newchkPts,numItems,sumItems=0;
    scanf("%d%d%d",&lenRoad,&chkPts,&spclChkPts);
    if(lenRoad<=100 && chkPts<=lenRoad){
        printf("Enter Special CheckPoints :\n");
        for (int i=1;spclChkPts<=10 && i<=spclChkPts;i++){
            scanf("%d",&spclChkPts);
        }







        for(int i=1;(newchkPts<=lenRoad) && (i<=10 && i>=1);i++){
            newchkPts=chkPts*i;
                if(newchkPts<=lenRoad ){
                    printf("(at checkPoint %d)No of Items = ",newchkPts);
                    scanf("%d",&numItems);
                    for(int i=1; numItems>100 || numItems<1;i++){
                        printf("Enter gems b/w 1 to 100 \n");
                        scanf("%d",&numItems);
                        if(i>=3){
                        exit(0);
                        }
                    }
                    sumItems=sumItems+numItems;
                }
        }
        printf("total items = %d",sumItems);
    }else{
        printf("Error");
    }
    return 0;
}