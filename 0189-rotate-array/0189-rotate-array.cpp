class Solution {
public:
    void rotate(vector<int>& arr, int k) {
       int n =arr.size();
        
        k =k%n;
        // reverse the entire arrays

    int i=0;
    int j=n-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // reverse the first kth element 

    i=0; 
    j=k-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // reverse the last kth element 

    i=k; 
    j=n-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    }
};