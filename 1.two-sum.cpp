/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indice;
        for(int k = 0; k < nums.size(); k++){
            indice[k] = nums[k];
        }
        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size()-1;
        vector<int> ans;
        while(i < j){
            if(nums[i] + nums[j] == target){
                for(auto index : indice){
                    if(nums[i] == index.second){
                        ans.push_back(index.first);
                        break;
                    }
                }
                for(auto index : indice){
                    if(nums[j] == index.second && index.first != ans[0]){
                        ans.push_back(index.first);
                        break;
                    }
                }
                break;
            }else if(nums[i] + nums[j] < target){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};
// @lc code=end

