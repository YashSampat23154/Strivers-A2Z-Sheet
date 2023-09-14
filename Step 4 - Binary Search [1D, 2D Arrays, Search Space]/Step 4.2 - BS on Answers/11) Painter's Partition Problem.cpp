// https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int partitionIntoK(vector<int> &boards, int maxPaintableArea){
    int totalPainters = 1; 
    int currArea = 0;

    for(int i = 0; i<boards.size(); i++){
        currArea += boards[i]; 
        if(currArea > maxPaintableArea){
            totalPainters++; 
            currArea = boards[i];
        }
    }
    return totalPainters; 
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int lower = *max_element(boards.begin(), boards.end());
    int higher = accumulate(boards.begin(), boards.end(), 0);

    while(lower <= higher){
        int mid = lower + (higher - lower)/2; 
      
        if(partitionIntoK(boards, mid) > k)
            lower = mid + 1; 
        
        else
            higher = mid - 1; 
    }
    return lower; 
}