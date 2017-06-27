#include <stdio.h>
/*
//program to implement the euclid's algorithm
//find the gcd and covert the fraction to lowest terms
//euclid believe that the gcd of two numbers u and v is same as the gcd of u and u-v and that's what this algo does
*/


int gcd (int u, int v){
    int t;
    while(u>0){
        if(u<v){
            t =u;
            u = v;
            v =t;
        }
        u = u-v;
    }
        return v;
}

int main(){
    int num, den;
    while(scanf("%d %d", &num, &den) != EOF){
        if(num>0 && den>0){
            printf("%d %d %d\n", num, den, gcd(num, den));
        }
    }
    return 0;
}
