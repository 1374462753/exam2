//
//  tail_sumOfCube.cpp
//  exam2Pro
//
//  Created by tina_lias on 2022/5/4.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int sumOfCube_helper(int n, int acc);

int sumOfCube(int n){
    return sumOfCube_helper(n,1);
}

int sumOfCube_helper(int n, int acc){
    if(n<=0){
        return 0;
    }else if(n == 1){
        return acc;
    }else{
        return sumOfCube_helper(n-1, n*n*n + acc);
    }
}
