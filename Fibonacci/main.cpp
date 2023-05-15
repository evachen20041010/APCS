#include <iostream>

using namespace std;

int Fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main()
{
    int n, sum;

    printf("½Ð¿é¤J¼Æ¦r n:");
    scanf("%d", &n);
    sum = Fibonacci(n);
    printf("F(%d)=%d", n, sum);

    return 0;
}

//F(0)=0, f(1)=1
//F(n)=F(n-1)+F(n-2),n >= 2
//Fibonacci¡G0 1 1 2 3 5 8 13 21 34 55 89 144 233...
