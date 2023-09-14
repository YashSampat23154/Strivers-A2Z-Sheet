// https://www.codingninjas.com/studio/problems/team-contest_6840309?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Strivers solution is better

void countTeamHelper(vector<int>&a, int start, int mid, int end, int &count){
   
    int leftIndex = start, rightIndex = mid+1; 
    vector<int> temp(end-start+1); 
    int tempIndex = 0; 

    while(leftIndex <= mid && rightIndex <= end){
        if(a[leftIndex] <= a[rightIndex])
            temp[tempIndex++] = a[leftIndex++];

        else if(a[leftIndex] > a[rightIndex]){
            int index = lower_bound(a.begin()+leftIndex, a.begin()+mid+1, 2*a[rightIndex] + 1) - a.begin();
            temp[tempIndex++] = a[rightIndex++];
            count+=mid-index+1; 
        }
    }

    while(leftIndex <= mid)
        temp[tempIndex++] = a[leftIndex++];
    while(rightIndex <= end)
        temp[tempIndex++] = a[rightIndex++]; 

    tempIndex = 0;
    for(int i = start; i<=end; i++)
        a[i] = temp[tempIndex++]; 
    
    return; 
}

void countTeam(vector<int>&a, int start, int end, int &count){
    if(start >= end) return; 

    int mid = start + (end - start)/2; 

    countTeam(a, start, mid, count); 
    countTeam(a, mid+1, end, count); 
    countTeamHelper(a, start, mid, end, count); 
    return; 
}

int team(vector <int> & skill, int n)
{
    int count = 0; 
    countTeam(skill, 0, n-1, count);
    
    return count;
}
