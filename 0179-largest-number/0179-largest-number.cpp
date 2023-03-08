  bool lar(string&a ,string&b){
        return a+b>b+a;
    }
class Solution {
public:
  
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(int i=0;i<nums.size();i++){
            s.push_back(to_string(nums[i]));
        }
        
        sort(s.begin(),s.end(),lar);
        string ans="";
      //  vector<int>ans;
        for(auto it : s){
           ans+=it;
        }
        if(ans[0]=='0'){
            return "0";
        }
        return ans;
    }
};

// bool comp(string&a ,string&b){
//     return a+b>b+a;
// }

// class Solution {
// public:
//     string largestNumber(vector<int>& nums) {
//         vector<string> v;
//         for(auto it: nums){
//             string s =to_string(it);
//             v.push_back(s);
//         }
//         sort(v.begin(),v.end(),comp);
//         string ans="";
//         for(int i=0;i<v.size();i++){
//             ans+=v[i];
//         }
//         return ans[0]=='0'?"0":ans;
//     }
// };