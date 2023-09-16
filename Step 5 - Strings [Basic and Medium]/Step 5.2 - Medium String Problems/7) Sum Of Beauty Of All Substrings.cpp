// https://www.codingninjas.com/studio/problems/sum-of-beauty-of-all-substrings_8143656?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int sumOfBeauty(string s) {
	int ans = 0; 

	for(int i = 0; i<s.length(); i++){
		unordered_map<char, int> mp; 
		int mini = 1; 
		int maxi = 1; 

		for(int j = i; j<s.length(); j++){
			mp[s[j]]++; 
			maxi = max(maxi, mp[s[j]]);
			mini = maxi;

			for(auto it: mp)
				mini = min(mini, it.second);

			ans += maxi-mini; 
		}
	}
	return ans; 
}
