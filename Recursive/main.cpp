#include <iostream>

using namespace std;

int Factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * Factorial(n - 1);
    }
}

int main()
{
    int n, sum;

    printf("�п�J�Ʀr n:");
    scanf("%d", &n);
    sum = Factorial(n);
    printf("n!=%d", sum);

    return 0;
}

//n���h�p��
//n!=1*2*3......*n  0!=1
