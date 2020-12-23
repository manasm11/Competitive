// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int great(int a, int b){
	return a < b;
}

int main() {
//--------------------------------------START----------------------------------------//
	int n, n2; cin >> n;
	int cnt=0;
	n2 = n;
	cnt++;
	vector<int> arr;
	for(int i=9; i>=2; i--){
		cnt++; great(i, i+1);
		while(n%i == 0){
			cnt++;
			n /= i;
			cnt++;
			arr.push_back(i);
			cnt++;
		}
		great(i, i+1);
	}
	sort(arr.begin(), arr.end());
	great(n, n2);
	cnt++;
	string s = "";
	int temp=1;
	for(int i=0; i<arr.size(); i++) {
		s += to_string(arr[i]);
		temp *= arr[i];
	}
	if(temp == n2) cout << s << endl;
	else cout << "Not Possible" << endl;
	
return 0;
// ------------------------------------  END -------------------------------------//
}

 /*
 https://www.overleaf.com/project/5f6d66b08984cd0001f9862f
 https://docs.google.com/presentation/d/1GZxCRTTcGTfBsMpXvX9QfmqrV95XCspZX4HVaS_ExFY/edit?ts=5f9c3c4a#slide=id.ga663b7375c_2_19
 */

