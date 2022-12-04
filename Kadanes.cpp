#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define pb push_back



int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
            
        }
        return maxi;
}

int main() {
    // your code goes here
#ifndef ONLINE_JUDGE
    //for getting input form the input.txt 
    freopen("input1.txt" ,"r",stdin);
    //for writting output form the output.txt
    freopen("output1.txt","w",stdout);
#endif

vector<int>v = {-2,1,-3,4,-1,2,1,-5,4};
cout<<maxSubArray(v);

// Time Complexity : O(N)
// Auxiliary Space : O(1)
}