#include <iostream>
#include <vector>
using namespace std;
class Solution {
private:
    bool areVectorsEqual(vector<int> a, vector<int> b){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;

        vector<int>freqS1(26,0);
        //making the vector to store thre frequencies of the characters
        for(char c:s1) freqS1[c-'a']++;

        //this is the way of doing the freq converting the char to number first
        vector<int>freqS2(26,0);

        int start=0,end=0;

        //now performing the algo till end<s2.size()
        while(end<s2.size()){
            //now increasing the freq of curr window by the char at end
            freqS2[s2[end]-'a']++;

            //checking if the len of the window which is calculated through
            //end-start+1
            if(end-start+1==s1.size()){
                //simply means the length of the curr string is equal to the s1
                //so we check if they r equal
                if(areVectorsEqual(freqS1,freqS2))  return true;
                //if both the frequencies matches then we return true
            }

            //checking if the window size is less than s1 so increment tehe end
            if(end-start+1<s1.size()) end++;

            else {
                //means the window should be smaller
                freqS2[s2[start]-'a']--;
                start++;
                end++;
            }
        }

        return false;
    }
};
class Solution {
private:
    bool areVectorsEqual(vector<int> a, vector<int> b){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;

        vector<int>freqS1(26,0);
        //making the vector to store thre frequencies of the characters
        for(char c:s1) freqS1[c-'a']++;

        //this is the way of doing the freq converting the char to number first
        vector<int>freqS2(26,0);

        int start=0,end=0;

        //now performing the algo till end<s2.size()
        while(end<s2.size()){
            //now increasing the freq of curr window by the char at end
            freqS2[s2[end]-'a']++;

            //checking if the len of the window which is calculated through
            //end-start+1
            if(end-start+1==s1.size()){
                //simply means the length of the curr string is equal to the s1
                //so we check if they r equal
                if(areVectorsEqual(freqS1,freqS2))  return true;
                //if both the frequencies matches then we return true
            }

            //checking if the window size is less than s1 so increment tehe end
            if(end-start+1<s1.size()) end++;

            else {
                //means the window should be smaller
                freqS2[s2[start]-'a']--;
                start++;
                end++;
            }
        }

        return false;
    }
};

//revised todaya again
int main()
{
//created by manik sharma

return 0 ;
}