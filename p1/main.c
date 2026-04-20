#include <stdio.h>//표준 입출력 상자

int main(void) {//프로그램의 시작점
    int answer, x;//정답과 정답을 추측하는 값 변수 선언
    int count = 0;//시도 횟수 변수 선언

    scanf("%d", &answer);//정답 입력

    do {//do while문 이용
        scanf("%d", &x);//정답을 추측하는 값 입력
        count++;//시도 횟수 1씩 증가

        if (x > answer) {//정답을 추측하는 값이 정답 보다 더 큰 경우
            printf("%d>?\n", x);//대소 관계 출력
        } 
        else if (x < answer) {//정답이 정답을 추측하는 값 보다 더 큰 경우
            printf("%d<?\n", x);//대소 관계 출력
        } 
        else {//정답과 정답을 추측하는 값이 같은 경우
            printf("%d==?\n", x);//대소 관계 출력
        }
    } while (x != answer);//정답을 추측하는 값이 정답과 같지 않는 한 계속 실행


    printf("%d\n", x);//시도횟수 

    return 0;//프로그램의 정상 종료
}//함수의 시작과 끝인 Scope
