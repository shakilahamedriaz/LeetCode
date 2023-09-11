#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int ssize = s.length();
        int tsize = t.length();

        if (tsize != ssize) {
            return false;
        }

        vector<int> charCount(26, 0);

        for (int i = 0; i < ssize; i++) {
            charCount[s[i] - 'a']++;
            charCount[t[i] - 'a']--;
        }

        for (int i = 0; i < charCount.size(); i++) {
           if (charCount[i] != 0) {
          return false;
        }
     }


        return true;
    }
};
