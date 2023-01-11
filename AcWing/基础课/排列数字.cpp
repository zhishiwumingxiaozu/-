#include<iostream>
using namespace std;
const int N=10;
int n;
int path[N];
bool st[N];

void dfs(int u){//u表示当前处理到第几个位置
	if(u==n){//已经处理完了
		for(int i=0;i<n;i++)printf("%d",path[i]);//输出所有的数
		puts("");
		return ;
	}
	
	for(int i=1;i<=n;i++){//枚举1~n
		if(!st[i])//如果i还没有被使用过
		{
			path[u]=i;//将i放到第u个位置
			st[i]=true;//标记i已经被使用过
			dfs(u+1);//处理下一个位置
			st[i]=false;//恢复现场(回溯)（当前的值不可以使用 ）
		}
	}
}

int main()
{
	cin>>n;
	dfs(0);
	
	return 0;
}