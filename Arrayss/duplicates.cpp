#include<vector>
#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 4};
    cout << findDuplicate(arr) << endl;
}