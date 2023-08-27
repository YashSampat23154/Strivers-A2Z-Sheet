// https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int> unionArray; 

    int indexA = 0, indexB = 0; 

    while(indexA < a.size() && indexB < b.size()){

        // current element of a is less
        if(a[indexA] < b[indexB]){
            unionArray.push_back(a[indexA++]); 
            while(indexA < a.size() && a[indexA] == unionArray[unionArray.size()-1]) indexA++; 
        }

        // current element of b is less
        else if (a[indexA] > b[indexB]){
            unionArray.push_back(b[indexB++]); 
            while(indexB < b.size() && b[indexB] == unionArray[unionArray.size()-1]) indexB++;
        }

        // current element of a and b are equal
        else{
            unionArray.push_back(a[indexA++]); 
            while(indexA < a.size() && a[indexA] == unionArray[unionArray.size()-1]) indexA++; 
            while(indexB < b.size() && b[indexB] == unionArray[unionArray.size()-1]) indexB++;
        }
    }

    // remaining elements in a 
    while(indexA < a.size()){
        unionArray.push_back(a[indexA++]); 
        while(indexA < a.size() && a[indexA] == unionArray[unionArray.size()-1]) indexA++; 
    }   

    // remaining elements in b
    while(indexB < b.size()){
        unionArray.push_back(b[indexB++]); 
        while(indexB < b.size() && b[indexB] == unionArray[unionArray.size()-1]) indexB++;
    } 


    return unionArray;
}