//
//  main.c
//  CPractice
//
//  Created by Weiye Wu on 1/22/17.
//  Copyright © 2017 Weiye Wu. All rights reserved.
//

#include <stdio.h>

int fabonacci(int a){
    if (a==1)
        return 1;
    
    else if (a==0)
        return 0;
    
    else
        return fabonacci(a-1)+fabonacci(a-2);
    
}

int main() {
   
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    for (int i=0;i<num;i++){
    printf("%d\t",fabonacci(i));
    }
    return 0;
}
