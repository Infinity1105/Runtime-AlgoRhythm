#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int Binary_Search(int key,int high,int low,vector<int>arr){
    //When low is greater or equal to high our search ends
    //till this condition is not satisfied will repeat the steps 
    while(low>=high){
        //comparing with middle element of array
        //from low to end subarray
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            //Exit the loop with "return" middle index;
            return mid;
        }else if(arr[mid]>key){
            //if(middle element is greater then will adjust high)
            //thus considering the first half of the sub-array
            high=mid-1;
        }else if(arr[mid]<key){
            //if(middle element is lesser than then will adjust low)
            //thus considering the second half of the sub-array
            low=mid+1;
        }
    }
    return -1;

    //Time complexity: O(log(n))
    //Space complexity:O(1)
}

int rec_Binary_Search(int key,int high,int low,vector<int>arr){
    //When low is greater or equal to high our search ends
    //elment if not found in this case thus return -1
    if(low>=high) return -1;
    int mid=low+(high-low)/2;
    // "return" middle index;
    if(arr[mid]==key) return mid;
    //if(middle element is greater then will adjust high)
    //thus considering the first half of the sub-array
    if(arr[mid]>key) return rec_Binary_Search(key,mid-1,low,arr);
    //if(middle element is lesser than then will adjust low)
    //thus considering the second half of the sub-array
    return rec_Binary_Search(key,high,mid+1,arr);


    //Time complexity: O(log(n))
    //Space complexity:O(log(n))
}

int main() {
	// your code goes here
#ifndef ONLINE_JUDGE
	//for getting input form the input.txt 
	freopen("input1.txt" ,"r",stdin);
	//for writting output form the output.txt
	freopen("output1.txt","w",stdout);
#endif



//array in binary search should be sorted
//if not sorted ,sort first.
vector<int>arr{1,5,5,6,8,10};
//Iterative method 
cout<<Binary_Search(5,arr.size()-1,0,arr)<<endl;


//Recursive method
cout<<rec_Binary_Search(5,arr.size()-1,0,arr)<<endl;
	return 0;

}
