//
//  main.cpp
//  exam2Pro
//
//  Created by tina_lias on 2022/5/4.
//

#include <iostream>
#include <stdio.h>
#include <vector>

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

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << sumOfCube(1) << "\n";
    std::cout << sumOfCube(2) << "\n";
//    std::cout << sumOfCube(2,) << "\n";
    return 0;
}
