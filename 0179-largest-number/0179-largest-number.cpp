bool comp(string&a ,string&b){
    return a+b>b+a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(auto it: nums){
            string s =to_string(it);
            v.push_back(s);
        }
        sort(v.begin(),v.end(),comp);
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans[0]=='0'?"0":ans;
    }
};

// bool compare(string a,string b){
//     return a+b > b+a;    
// }

// class Solution {
// public:
//     string largestNumber(vector<int>& nums) {
	
//         vector<string> container;
		
//         for(int i : nums)  container.push_back(to_string(i));
        
//         sort(container.begin(),container.end(),compare);
        
//         string result;
        
//         for(int i=0;i<container.size();i++)  result+=container[i];
        
//         return result[0]=='0'?"0":result;
//     }
// };