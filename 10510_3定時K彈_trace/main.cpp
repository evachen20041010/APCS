#include <iostream>
#include <vector>    //vector 是一個可以改變陣列大小的序列容器

using namespace std;

void show(int n, vector <int> person, int now){
    //顯示目前的遊戲者
    printf("第 %d 次：", n+1);
    for(int i = now; i < now + person.size(); i++){
        int p = i % person.size();
        printf("%d ",person[p]);
    }
}

int main()
{
    int N, M, K;
    //printf("Input N、M and K: ");
    //scanf("%d %d %d", &N, &M, &K);
    N = 5, M = 2, K = 4;

    vector <int> person;
    for(int i = 1; i <= N; i++){
        //建立人員編號
        person.push_back(i);    //在向量的末尾插入數據或元素
    }

    int now = 0;    //目前輪到人員索引
    for(int i = 0; i < K; i++){
        show(i, person, now);
        now = (now + M -1) % person.size(); //now + M - 1為下一次輪到人員索引(被炸人員)
        //printf("\t%d/%d=%d", (now + M -1), person.size(), now);
        printf("\t淘汰 %d 號", person[now]);
        person.erase(person.begin() + now); //移除輪到人員索引
        printf("\n");
    }
    int ans = 0;
    if(person.size() == 1){
        ans = person[0];
    }else if(now == person.size()){
        ans = person[0];
    }else{
        ans = person[now];   //刪除person[now]後，目前person[now]即為下一人
    }
    printf("幸運者： %d 號\n", ans);

    return 0;
}
