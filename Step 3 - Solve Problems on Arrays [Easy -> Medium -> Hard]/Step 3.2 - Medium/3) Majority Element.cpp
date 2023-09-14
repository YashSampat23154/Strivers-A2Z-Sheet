// https://www.codingninjas.com/studio/problems/majority-element_6783241?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int majorityElement(vector<int> v) {
	int major = v[0], count = 1; 
	for(auto ele : v){
		if(ele == major) count++; 
		else{
			count--; 
			if(count == 0){
				major = ele; 
				count = 1; 
			}
		}
	}
	return major; 
}