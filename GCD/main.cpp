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

    printf("��J��ӼƦr�G");
    scanf("%d %d", &a, &b);
    int result = GCD(a, b);
    printf("GCD(%d,%d)=%d",a, b, result);

    return 0;
}

//�D�̤j���]��
