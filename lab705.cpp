#include <stdio.h>

long convert(long h, long m, long s);

int main() {

    long h,m,s;
    long total;

    scanf("%ld %ld %ld",&h,&m,&s);

    total = convert(h,m,s);

    printf("%ld",total);

    return 0;
}

long convert(long h, long m, long s){

    long seconds;

    seconds = h*3600 + m*60 + s;

    return seconds;
}
