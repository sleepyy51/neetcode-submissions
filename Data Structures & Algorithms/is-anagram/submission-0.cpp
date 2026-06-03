class Solution {
public:
    bool isAnagram(string s, string t) {
        string sortedS = s, sortedT = t;
        sort(sortedS.begin(), sortedS.end());
        sort(sortedT.begin(), sortedT.end());

        if(sortedS == sortedT){
            return true;
        }else{
            return false;
        }
    }
};
