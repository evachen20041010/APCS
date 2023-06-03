#include <iostream>
#include <vector>    //vector �O�@�ӥi�H���ܰ}�C�j�p���ǦC�e��

using namespace std;

void show(int n, vector <int> person, int now){
    //��ܥثe���C����
    printf("�� %d ���G", n+1);
    for(int i = now; i < now + person.size(); i++){
        int p = i % person.size();
        printf("%d ",person[p]);
    }
}

int main()
{
    int N, M, K;
    //printf("Input N�BM and K: ");
    //scanf("%d %d %d", &N, &M, &K);
    N = 5, M = 2, K = 4;

    vector <int> person;
    for(int i = 1; i <= N; i++){
        //�إߤH���s��
        person.push_back(i);    //�b�V�q���������J�ƾکΤ���
    }

    int now = 0;    //�ثe����H������
    for(int i = 0; i < K; i++){
        show(i, person, now);
        now = (now + M -1) % person.size(); //now + M - 1���U�@������H������(�Q���H��)
        //printf("\t%d/%d=%d", (now + M -1), person.size(), now);
        printf("\t�^�O %d ��", person[now]);
        person.erase(person.begin() + now); //��������H������
        printf("\n");
    }
    int ans = 0;
    if(person.size() == 1){
        ans = person[0];
    }else if(now == person.size()){
        ans = person[0];
    }else{
        ans = person[now];   //�R��person[now]��A�ثeperson[now]�Y���U�@�H
    }
    printf("���B�̡G %d ��\n", ans);

    return 0;
}
