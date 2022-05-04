//
//  sumOfCube.cpp
//  exam2Pro
//
//  Created by tina_lias on 2022/5/4.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int sumOfCube(int n){
    if(n<=0){
        return 0;
    }else if(n ==1){
        return 1;
    }else{
        return n*n*n + sumOfCube(n-1);
    }
}
