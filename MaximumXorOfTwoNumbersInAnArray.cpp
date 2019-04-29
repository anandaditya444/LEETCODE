//Q.421

class Solution {
public:
    //http://www.ritambhara.in/maximum-xor-value-of-two-elements/
typedef struct data
{
	data* bit[2];
	int cnt = 0;
}trie;

trie* head;

void insert(int x)
{
	trie* cur = head;
	for(int i=30;i>=0;i--)
	{
		int b = (x>>i) & 1;
		if(!cur->bit[b])
			cur->bit[b] = new trie();
		cur = cur->bit[b];
		cur->cnt++;
	}
}

// void remove(int x)
// {
// 	trie* cur = head;
// 	for(int i=30;i>=0;i--)
// 	{
// 		int b = (x>>i) & 1;
// 		cur = cur->bit[b];
// 		cur->cnt--;
// 	}
// }

int maxxor(int x)
{
	trie* cur = head;
	int ans = 0;
	for(int i=30;i>=0;i--)
	{
		int b = (x>>i)&1;
		if(cur->bit[!b] && cur->bit[!b]->cnt>0)
		{
			ans += (1LL<<i);
			cur = cur->bit[!b];
		}
		else
			cur = cur->bit[b];
	}
	return ans;
}
  int findMaximumXOR(vector<int>& nums) {
      int res = -1;
      head = new trie();
      for(int i=0;i<nums.size();i++)
      {
          insert(nums[i]);
          res = max(res,maxxor(nums[i]));
      }
    return res;
    }
};