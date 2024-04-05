#include <iostream>
using namespace std;
bool isp(int n){
	if(n<=1) return 0;
	for(long long i=2;i<n;i++) if(n%i==0) return 0;
	return 1;
}
int main(){
	long long min,max;
	cout<<"请输入范围（从？到？）：";
	cin>>min>>max;
	cout<<endl;
	cout<<"结果："<<endl; 
	for(long long i=2;i<=n;i++) if(isp(i)) cout<<i<<' ';
} 
