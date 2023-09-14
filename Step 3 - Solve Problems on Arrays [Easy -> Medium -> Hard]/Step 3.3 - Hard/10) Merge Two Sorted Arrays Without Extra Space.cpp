// https://www.codingninjas.com/studio/problems/merge-two-sorted-arrays-without-extra-space_6898839?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	long long maxValue = 1e9+1; 

	int ansIndexA = 0, ansIndexB = 0; 

	int indexA = 0, indexB = 0;
	
	while(indexA < a.size() && indexB < b.size()){
		long long valueA = a[indexA] > maxValue? a[indexA]/maxValue : a[indexA]; 
		long long valueB = b[indexB] > maxValue? b[indexB]/maxValue : b[indexB]; 

		if(valueA < valueB){

			if(ansIndexA < a.size()){
				a[ansIndexA] = a[ansIndexA]*maxValue + valueA; 
				ansIndexA++; 
			}
			else{
				b[ansIndexB] = b[ansIndexB]*maxValue + valueA; 
				ansIndexB++;
			}

			indexA++; 
		}
		else{

			if(ansIndexA < a.size()){
				a[ansIndexA] = a[ansIndexA]*maxValue + valueB; 
				ansIndexA++; 
			}
			else{
				b[ansIndexB] = b[ansIndexB]*maxValue + valueB; 
				ansIndexB++;
			}

			indexB++;
		}
	}

	while(indexA < a.size()){
		long long valueA = a[indexA] > maxValue? a[indexA]/maxValue : a[indexA]; 
		if(ansIndexA < a.size()){
			a[ansIndexA] = a[ansIndexA]*maxValue + valueA; 
			ansIndexA++; 
		}
		else{
			b[ansIndexB] = b[ansIndexB]*maxValue + valueA; 
			ansIndexB++;
		}

		indexA++;
	}

	while(indexB < b.size()){
		long long valueB = b[indexB] > maxValue? b[indexB]/maxValue : b[indexB]; 
		if(ansIndexA < a.size()){
			a[ansIndexA] = a[ansIndexA]*maxValue + valueB; 
			ansIndexA++; 
		}
		else{
			b[ansIndexB] = b[ansIndexB]*maxValue + valueB; 
			ansIndexB++;
		}

		indexB++;
	}


	for(int i = 0; i<a.size(); i++)
		a[i] = a[i]%maxValue; 
	for(int i = 0; i<b.size(); i++)
		b[i] = b[i]%maxValue; 

	return; 
}