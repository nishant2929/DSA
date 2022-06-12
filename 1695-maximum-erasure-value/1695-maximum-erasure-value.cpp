class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        // ekk map banaloooo
        
        //  hum ekk map bana lengeeeee uske baad max lenge so jo sabse longest side ka map hogaaa wo le lengeeeeeeeee............
        map<int,int>harsh;
        int maxi=INT_MIN;
        int i=0,j=0;
        int sum=0;
        while(i<nums.size())
        {
           while(j<i && harsh[nums[i]] !=0 )
           {
              // ye hum shuru se substring ka size dekh rahe haiiiiii agar humko repetated element dikh raha haiii tohhh hum map se erase kardenge in short uske size ko 0 kardengeeeee
             harsh[nums[j]]=0;
               sum-=nums[j++];
           }
            // normal agar wo repeated nhi haiii bss usme add kardete haiiii substring ke side ko badhate jaooooo matlab sum add karlooooo
            if(harsh[nums[i]]==0)
            {
               harsh[nums[i]]=1;
                sum+=nums[i++];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
        }
};