class Solution {
public:
    bool isPalindrome(string data) {
        
        std::transform(data.begin(), data.end(), data.begin(),
                   [](unsigned char c){ return std::tolower(c); });
                   data.erase(std::remove_if(data.begin(), data.end(), [](unsigned char x) {
        return !std::isalnum(x);}), data.end());
        data.erase(std::remove_if(data.begin(), data.end(), [](unsigned char x) {
        return std::isspace(x);}), data.end());
        int l=0;
        int r=data.size() -1;
        while(l<r)
        {
            if(data[l] != data[r])
            {
                return false;
            }
            l++;
            r--;

        }
        return true;
        
    }
};
