#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
}
int main() {
	
	vector<int>nums={0, 1, 2, 1, 0, 2, 1, 0};
  sortColors(nums);
  for(int i=0 ; i<nums.size() ; i++){
      cout<<nums[i]<<" ";
  }
  return 0;  

}
