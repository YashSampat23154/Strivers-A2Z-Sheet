// https://www.codingninjas.com/studio/problems/traffic_6682625?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int traffic(int n, int m, vector<int> vehicle) {
	vector<int> posZero;

	for(int i=0; i<vehicle.size(); i++)
		if(vehicle[i] == 0) posZero.push_back(i); 

	if(posZero.size() <= m) return vehicle.size(); 
	
	int ans = posZero[m]-1;
	int temp  = n-posZero[posZero.size()-m-1]-1; 
	ans = max(ans, temp); 

	for(int i = 1; i+m < posZero.size()-1; i++)
		ans = max(ans, (posZero[i+m]-1) - (posZero[i-1]+1) + 1);

	return ans; 
}
