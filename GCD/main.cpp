#include <iostream>

using namespace std;

int GCD(int a, int b){
    if(a%b == 0){
        return b;
    }else{
        return GCD(b, a%b);
    }
}

int main()
{
    int a, b;

    printf("輸入兩個數字：");
    scanf("%d %d", &a, &b);
    int result = GCD(a, b);
    printf("GCD(%d,%d)=%d",a, b, result);

    return 0;
}

//求最大公因數
