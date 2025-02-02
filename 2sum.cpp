#include<iostream>
#include<vector>
#include<algorithm>//sort
using namespace std;
vector<vector<int>> findsum(int *arr,int n,int key){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));//means dono me jo small hoga wo pahle jayega bcz output should be in sorted list
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }sort(ans.begin(),ans.end());// for sort the ans
    }return ans;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=5;//compare this with sum of 2 indexes
    vector<vector<int>> sum= findsum(arr,5,key);
   for(auto pair : sum) {
        cout << pair[0] << " " << pair[1] << endl;
    }
    

}