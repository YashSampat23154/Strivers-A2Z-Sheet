// https://www.codingninjas.com/studio/problems/reverse-bits_2181102?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

long reverseBits(long n) {
    
    long newNumber = 0; 

    for(long i = 0; i<32; i++){
        newNumber *=2; 
        bool isBitSet = (n&(1<<i)) != 0 ? 1 : 0;
        newNumber += isBitSet;
    }

    return newNumber; 
}
