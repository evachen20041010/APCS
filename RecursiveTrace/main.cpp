#include <iostream>
#include <conio.h>

using namespace std;

int Factorial(int n){
    if(n == 0){
        return 1;
    }else{
        //printf("F(%d)*F(%d) = %d*%d = %d", n, n-1, n, Factorial(n-1), n*Factorial(n-1));
        printf("F(%d) = %d", n-1, Factorial(n-1));
        printf("\t按任意鍵繼續...\n");
        getch();    //停下來 直到按下任意鍵之後繼續
        return n * Factorial(n-1);
    }
}

int main()
{
    int n, Total;

    //printf("請輸入數字n：");
    //scanf(" %d", &n);
    n = 5;
    Total = Factorial(n);
    printf("n! = %d", Total);

    return 0;
}
