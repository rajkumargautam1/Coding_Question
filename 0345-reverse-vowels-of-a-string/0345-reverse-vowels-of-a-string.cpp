class Solution {
public:
bool isvowel(char &ch){
    if(ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||ch == 'O' || ch == 'U' ) {
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int n= s.length();

        int i=0 , j=n-1;

        while (i<j){
            if(!isvowel(s[i])){
                i++;
            }else if(!isvowel(s[j])){
                j--;
            }else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }

};