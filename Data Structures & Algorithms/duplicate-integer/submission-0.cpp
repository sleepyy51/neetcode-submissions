class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int x : nums){
            if(!set.contains(x)){
                set.insert(x);
            }else{
                return true;
            }
        }
        return false;
    }
};