//
// Created by oota1 on 2023/03/20.
//
#include<stdio.h>

void ans(){
    int a = 0, b = 0, c = 0;
    char s[101];

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);

    printf("%d %s\n", a+b+c, s);
}