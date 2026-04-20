#include <stdio.h>//표준 입출력 상자

int main(void) {//프로그램의 시작점
    int N;//입력될 문자의 개수 변수 선언
    scanf("%d", &N);//입력될 문자의 개수 입력

    int maxalphabet = 0, countalphabet = 0;//연속된 소문자의 최대 개수와 소문자가 연속적으로 나타나고 있음을 count하는 변수 선언 후 초기화
    int maxnumber = 0, countnumber = 0;//연속된 숫자의 최대 개수와 숫자가 연속적으로 나타나고 있음을 count하는 변수 선언 후 초기화

    for (int i = 0; i < N; i++) {
        char ch;//숫자 문자와 영어 소문자로 이루어진 문자 변수 선언
        scanf(" %c", &ch);//숫자 문자와 영어 소문자로 이루어진 문자열 입력

        if (ch >= 'a' && ch <= 'z') {//소문자가 'a'와 'z' 사이에 있는 경우
            countalphabet++;//소문자가 연속적으로 나타나고 있음을 count하는 변수가 1씩 증가
            countnumber = 0;//숫자가 연속적으로 나타나고 있음을 count하는 변수는 0
            
            if (countalphabet > maxalphabet) {//소문자가 연속적으로 나타나고 있음을 count하는 변수가 연속된 소문자의 최대 개수 보다 큰 경우
                maxalphabet = countalphabet;//연속된 소문자의 최대 개수=소문자가 연속적으로 나타나고 있음을 count하는 변수
            }
        } else if (ch >= '0' && ch <= '9') {//숫자가 '0'과 '9' 사이에 있는 경우
            countnumber++;//숫자가 연속적으로 나타나고 있음을 count하는 변수가 1씩 증가
            countalphabet = 0;//소문자가 연속적으로 나타나고 있음을 ocount하는 변수는 0
            
            if (countnumber > maxnumber) {//숫자가 연속적으로 나타나고 있음을 count하는 변수가 연속된 숫자의 최대 개수 보다 큰 경우
                maxnumber = countnumber;//연속된 숫자의 최대 개수=숫자가 연속적으로 나타나고 있음을 count하는 변수
            }
        } else {//소문자가 'a'와 'z'사이에 없고 숫자가 '0'과 '9' 사이에 없는 경우
            countalphabet = 0;//소문자가 연속적으로 나타나고 있음을 count하는 변수=0
            countnumber = 0;//숫자가 연속적으로 나타나고 있음을 count하는 변수=0
        }
    }

    printf("%d\n%d\n", maxalphabet, maxnumber);//연속된 소문자의 최대 개수와 연속된 숫자 문자의 최대 개수 출력

    return 0;//프로그램의 정상 종료
}//함수의 시작과 끝인 Scope
