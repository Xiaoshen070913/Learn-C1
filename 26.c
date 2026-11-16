#include<stdio.h>
int main()
{
    const int size = 3;
    int broad[size][size];
    int i,j;
    int numOfx;
    int numOfO;
    int result = -1; //     -1：没人赢 1：X赢 O：o赢


    // 读入矩阵
    for( i = 0; i<size;i++) {
        for ( j = 0;j<size;j++) {
            scanf("%d",&broad[i][j]);
        }
    }
    //  检查行
    if (result == -1 ) {
        for ( i=0;i<size && result == -1; i++ ) {
            numOfx = numOfO = 0;
            for( j=0;j<size; j++) {
                if (broad[i][j] ==1 ) {
                    numOfx ++;
                } else {
                    numOfO ++;
                }
            }
            if ( numOfO == size ) {
                result = 0;
                break;
            } else if (numOfx == size ) {
                result = 1;
                break;
            }
        }
    }
   
    //检查列
    if ( result == -1 ) {
            for ( j=0;j<size && result == -1; j++ ) {
            numOfx = numOfO = 0;
            for( i=0;i<size; i++) {
                if (broad[i][j] ==1 ) {
                    numOfx ++;
                } else {
                    numOfO ++;
                }
            }
            if ( numOfO == size ) {
                result = 0;
                break;
            } else if (numOfx == size ) {
                result = 1;
                break;
            }
        }
    }  
   

    //检查对角线
    if (result == -1 ) {
        numOfO = numOfx = 0;
    for ( i=0; i<size; i++) {
        if ( broad[i][i] == 1) {
            numOfx ++;
        } else {
            numOfO ++;
        } 
        if ( numOfO == size ) {
            result = 0;
            break;
        } else if (numOfx == size ) {
            result = 1;
            break;
        } 
     }
    }
   


    if (result == -1 ) {
          numOfO = numOfx = 0;
    for ( i=0; i<size; i++) {
        if ( broad[i][size-i-1] == 1) {
            numOfx ++;
        } else {
            numOfO ++;
        }
        if ( numOfO == size ) {
        result = 0;
        break;
    } else if (numOfx == size ) {
        result = 1;
        break;
      } 
     }
    }

    printf("%d",result);


    return 0;
}    
