#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
int a,b,ans;
while(cin>>a){
	ans=0;
	for(b=1;b<a;b++){	//注意題目是寫說除了自己以外的因數，所以b<a的情況下跑這個for loop 
		if(a%b==0){
			ans+=b;
		}
	}
	if(ans>a){
		cout<<"盈數";
	}
	else if(ans<a){
		cout<<"虧數"; 
	}
	else if(ans==a){
		cout<<"完全數";
	}
	cout<<"\n";

}



   return 0;
}

