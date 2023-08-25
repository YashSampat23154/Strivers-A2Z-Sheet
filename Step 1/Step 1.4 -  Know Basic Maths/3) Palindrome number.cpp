// https://www.codingninjas.com/studio/problems/palindrome-number_624662?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool palindrome(int n)
{
    int rNumber = 0, temp = n; 

    while(temp != 0){
        rNumber *= 10; 
        rNumber += temp%10; 
        temp = temp/10; 
    }

    return rNumber == n; 
}