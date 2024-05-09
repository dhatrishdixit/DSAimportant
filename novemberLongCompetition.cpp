#include <bits/stdc++.h>
using namespace std;
vector<int> countFreq(char arr[], int n)
{
    vector<int>v;
	
	vector<bool> visited(n, false);

	
	for (int i = 0; i < n; i++) {
		if (visited[i] == true)
			continue;
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
        v.push_back(count);
	}
	return v;
}

int main() {
	int t ;
	 cin >> t;
	 while(t--){
	    int n;
	    cin>>n;
	    char arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	  
	vector<int> v=countFreq(arr, n);
    bool b = true;
    	for(int i=0;i<v.size();i++){
	    if(v[i]%2!=0){
	        b = false;
	    }
	 
	}
	       if(b==true){
	        cout<<"YES"<<endl;
	    }else
	    {
	        cout<<"NO"<<endl;
	    } 
	 }
	return 0;
}
