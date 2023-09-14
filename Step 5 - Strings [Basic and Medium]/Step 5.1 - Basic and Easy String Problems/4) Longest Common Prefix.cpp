// https://www.codingninjas.com/studio/problems/longest-common-prefix_628874?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

string commonPrefix(vector<string>& arr,int n){
	string ans = ""; 

	for(int i = 0; i<arr[0].size(); i++){
		char ch = arr[0][i]; 

		bool check = true; 
		for(int j = 1; j<arr.size(); j++)
			if(i < arr[j].length() && arr[j][i] != ch){
				check = false; 
				break;
			}	
		if(check)
			ans += ch; 
		else break;
	}
	if(ans != "") return ans; 
	else return "-1"; 
}
