//Q. 860

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0,ten = 0,twenty = 0;
        
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i] == 5)
                five++;
            else if(bills[i] == 10)
            {
                ten++;
                if(five > 0)
                    five--;
                else
                    return false;
            }
            else
            {
                if(ten > 0 && five > 0)
                {
                    ten--;
                    five--;
                }
                else if(five > 2)
                {
                    five -= 3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};