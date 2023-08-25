// https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void solve(int n, vector<int> &nums){
    if(nums.empty()) return; 
    int element = nums[0]; 
    nums.erase(nums.begin()); 
    solve(n, nums); 
    nums.push_back(element); 
}

vector<int> reverseArray(int n, vector<int> &nums)
{
//    solve(n, nums);
    reverse(nums.begin(), nums.end()); 
   return nums; 
}
