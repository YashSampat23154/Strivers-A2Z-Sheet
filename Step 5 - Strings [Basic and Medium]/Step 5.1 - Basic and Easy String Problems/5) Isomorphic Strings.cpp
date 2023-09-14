// https://www.codingninjas.com/studio/problems/isomorphic-strings-_1117636?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool areIsomorphicHelper(string &str1, string &str2){
    if(str1.length() != str2.length()) return 0; 
    
    char check[26]; 
    for(int i=0; i<26; i++) check[i] = ' '; 

    for(int i=0; i<str1.length(); i++){
        if(check[str1[i]-97] == ' '){
            check[str1[i]-97] = str2[i];
        }
            
        else if(check[str1[i]-97] != str2[i])
            return 0; 
    } 

    return 1;
}

bool areIsomorphic(string &str1, string &str2)
{
    return areIsomorphicHelper(str1, str2) && areIsomorphicHelper(str2, str1);   
}