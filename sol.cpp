#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int num;
	cin >> num;
	int k = 1, sum = 0, cnt = 0;
	while(1){
		for(int j = 1; j <= k; j++){
			sum += j;
		}
		k++;
		if(sum > num) break;
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
