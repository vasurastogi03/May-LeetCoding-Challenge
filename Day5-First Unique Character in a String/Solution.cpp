class Solution {					//Both approaches use Hashing technique
public:
//     int firstUniqChar(string s) {
//         ios_base::sync_with_stdio(false);              //Fast I/O for Competitive Programming. Lookit up on GeeksforGeeks
//     cin.tie(NULL);					  //This code gave runtime of 88ms
//         cin.tie(NULL);
        
//         int index = 0;				
//         unordered_map<char, int> um;
//         for(char c: s){			         //Did not use auto to minimise runtime- It gave only a difference of 10ms
//             um[c]++;					 //Here we load the elements and their frequencies
//         }

//         for(char x : s){
//             if(um[x]==1)
//                 return index;			 //Here we check the frequency of each character in the order they come and
//             index++;					 //if it is equal to 1 we return its index
//         }
//         return -1;
//     }
    
        int firstUniqChar(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int m[26] = {0};                                 //This code gave runtime of 40ms
        for(char &c: s)
            m[c-'a']++;
        for(int i=0; i<s.size(); ++i)
            if(m[s[i]-'a'] == 1)
                return i;
        return -1;
    }  
};

//We should also include #include <bits/stdc++.h> to include 
//the standard template library (STL) with a single include
