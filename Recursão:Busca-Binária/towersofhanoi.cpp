// TowersOfHanoi problem
// O(2ˆn)

#include<iostream>
#include<cstdio>

using namespace std;

void hanoi(int n, bool left){
	if(n==0) return;
	hanoi(n-1, !left);

	if(left) cout<<n<<" left\n";
	else cout<<n<<" right\n";

	hanoi(n-1, !left);
}

int main(){
	int n;
	cin>>n;


	hanoi(n, true);
}
