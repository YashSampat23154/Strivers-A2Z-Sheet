// https://www.codingninjas.com/studio/problems/4sum_5713771?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector<vector<int>> fourSum(vector<int>& nums, int target) {

    sort(nums.begin(), nums.end()); 
    vector<vector<int>> ans;

    for(int i = 0; i<nums.size()-3; i++){

        if(i!=0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1; j<nums.size()-2; j++){

            if(j!= i+1 && nums[j] == nums[j-1]) continue;

            int lower = j+1, higher = nums.size()-1; 

            while(lower < higher){
                if(nums[i] + nums[j] + nums[lower] + nums[higher] < target)
                    lower++;
                
                else if (nums[i] + nums[j] + nums[lower] + nums[higher] > target)
                    higher--;
                
                else{
                    ans.push_back({nums[i], nums[j], nums[lower], nums[higher]}); 
                    lower++; 
                    higher--; 

                    while(lower < higher && nums[lower] == nums[lower-1]) lower++; 
                    while(lower < higher && nums[higher] == nums[higher+1]) higher--; 
                }
            }
        }
    }

    return ans; 
}