class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int s = skill.size()/2;
        long long ans = 0;
        int add=skill[0]+skill[skill.size()-1];
        if(skill.size()==2){
            return skill[0]*skill[1];
        }
        int i=0;
        int j=skill.size()-1;
        while(i<j){
            if(skill[i]+skill[j]!=add){
                return -1;
            }else{
              ans= ans + skill[i]*skill[j];
        }
            i++;
            j--;
        }
       return ans;
    }
};