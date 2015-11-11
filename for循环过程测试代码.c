#include <stdio.h>
main(){
    int k;
    for(k=1,printf("%d:Hi!\n",k);printf("k=%d\n",k),k*k<18;k+=2,printf("Now k is %d\n",k)){
        printf("k is %d in the loop\n",k);
    }

}
