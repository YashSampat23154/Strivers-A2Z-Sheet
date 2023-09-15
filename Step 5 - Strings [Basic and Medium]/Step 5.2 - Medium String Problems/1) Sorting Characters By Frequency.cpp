// https://www.codingninjas.com/studio/problems/sorting-characters-by-frequency_1263699?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

string sortByFrequency(int n, string& s)
{
	unordered_map<char, int> mp;
	for(auto &ch : s)
		mp[ch]++; 

	priority_queue<pair<int, char>> pq; 
	for(auto it: mp)
		pq.push({it.second, it.first});

	string ans = ""; 

	while(!pq.empty()){
		int noOfIterations =  pq.top().first; 
		char ch =  pq.top().second; 
		pq.pop(); 

		for(int i = 0; i<noOfIterations; i++)
			ans += ch; 
	}  

	return ans; 
}

