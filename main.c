//
//  main.c
//  CPractice
//
//  Created by Weiye Wu on 1/23/17.
//  Copyright © 2017 Weiye Wu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int findPrime(int num,int i){
    while(num%i==0){
        num=num/i;
        printf("%d ",i);
    }
    return num;
}

int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    printf("1 ");
    if (num==1){
        return 0;
    }
        
    int i=2,tempNum=num;
    while (tempNum!=1&&i<=num){
        tempNum=findPrime(tempNum,i);
        i++;
    }
    printf("\n");
    return 0;
}
