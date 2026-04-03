#include <stdio.h>

long my_strtol(char *str, char **endptr){
    long res = 0;

    while('0'<=*str&&*str<='9'/*문자가 숫자인지 체크*/){
        res=res*10+(*str-'0');
        str++;
        /* 기존 숫자의 자릿수를 한 자리 키우고, 아스키코드 기준으로
        문자 숫자를 실제 정수값 기준으로 계산해 더하기*/
    }

    *endptr=str;
    //나머지 문자열을 endptr에 저장

    return res;
}

int main() {
    char str[] = "2026hello";
    char *end;

    long val = my_strtol(str,&end);

    printf("%ld %s\n",val, end);

    return 0;
}