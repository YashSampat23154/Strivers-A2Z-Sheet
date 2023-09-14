// https://www.codingninjas.com/studio/problems/check-if-one-string-is-a-rotation-of-another-string_1115683?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int isCyclicRotation(string &p, string &q) 
{
    p = p + p; 
    if(p.find(q) != string::npos)
        return 1; 
    else 
        return 0;
}