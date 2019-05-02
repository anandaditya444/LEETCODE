//Q. 925

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       int i = 0,j = 0;
        
        while(i < name.size() || j < typed.size())
        {
            char curr = name[i];
            if(name[i] != typed[j])
                return false;
            i++,j++;
            if(name[i] != typed[j])
            {
                while(curr == typed[j])
                    j++;
            }
        }
        return true;
    }
};