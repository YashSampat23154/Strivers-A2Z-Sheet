// https://www.codingninjas.com/studio/problems/k-th-element-of-2-sorted-array_1164159?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    int flower = 0, fhigher = arr1.size()-1, fmid; 
    int slower = 0, shigher = arr2.size(), smid; 

    while(flower <= fhigher && slower <= shigher){
        fmid = flower + (fhigher - flower)/2; 
        smid = slower + (shigher - slower)/2;

        int numberCoveredTillNow = fmid + smid + 1;

        if(arr1[fmid] > arr2[smid]){
            
            if(numberCoveredTillNow >= k)
                fhigher = fmid - 1; 
            
            else if(numberCoveredTillNow < k)
                slower = smid + 1; 
            
        } 

        else{
    
            if(numberCoveredTillNow >= k)
                shigher = smid - 1;
            
            else 
                flower = fmid + 1; 
            
        }
    }

    if(flower > fhigher)
        return arr2[slower+(k-flower-slower)-1];

    else   
        return arr1[flower+(k-flower-slower)-1];
}