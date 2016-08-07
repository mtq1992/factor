//
// Created by u410 on 2016/8/7.
//
#include <stdio.h>

void function(){
    int var = 5;
    static int static_var = 5;

    printf("\t[in fuction]var @ %p = %d\n",&var,var);
    printf("\t[in fuction]static_var @ %p = %d\n",&static_var,static_var);
    var++;
    static_var++;
}

int main(){
    int i;
    static  int static_var = 1337;
    for(i=0;i<5;i++){
        print("[in main]static_var @ %p = %d\n ",&static_var,static_var);
    }
}
