#include <stdio.h>

int main(){
    int i;
    int hap = 0;
    
    /*
     for문은 다음처럼 실행됩니다.
     
     1. i에 1을 초기값으로 설정합니다.
     2. i가 10보다 작거나 같을 때까지만 순환문은 반복됩나다.
     3. 현재의 hap의 값과 i값을 더하여 hap에 대입합니다.
     4. i는 1씩 증가합니다.
     */
    
    for(i = 1; i <= 10; i++){
        hap += i;
    }
    // "1부터 10까지의 합:55"가 화면에 표시됩니다.
    printf("1부터 10까지의 합:%d", hap);
}
