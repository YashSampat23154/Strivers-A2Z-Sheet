// https://www.codingninjas.com/studio/problems/reverse-words_7037425?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

string revWords(string str) {
  int s = str.length()- 1;
  string ans = "";

  while (s >= 0) {

    while (s >= 0 && str[s] == ' ')
      s--;

    string word = "";

    while (s >= 0 && str[s] != ' ') 
      word.push_back(str[s--]);

    for (int i = word.length() - 1; i >= 0; i--)
      ans.push_back(word[i]);

    if (s >= 0)
      ans.push_back(' ');
  }

  return ans;
}