class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n < 3)
        {
                   return false;
        }
     int v = 0;
     int c = 0;
    for(auto i : s)
        {
            if(isalpha(i))
            {
                if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
       {
          v++;
                }
                else if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
       {
                    v++;
         }
                else
          {
                   c++;
                }
            }
            if(!(isalpha(i) || isdigit(i)))
            {
                return false;
            }
        }
        if(v >= 1 && c >= 1)
        {
            return true;
        }
        return false;
    }
};