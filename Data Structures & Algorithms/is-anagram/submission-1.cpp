class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        int H[26] = {0};

        for (int i = 0; s[i] != '\0'; i++) {
            H[s[i] - 'a']++;
        }

        for (int i = 0; t[i] != '\0'; i++) {
            H[t[i] - 'a']--;

            if (H[t[i] - 'a'] < 0)
                return false;
        }

        return true;
    }
};
