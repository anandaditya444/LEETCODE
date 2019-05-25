//Q. 690

/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    unordered_map<int,Employee* >m;
    int sum = 0;
    int solve(int id)
    {
        int sum = m[id]->importance;
        for(auto x:m[id]->subordinates)
        {
            sum += solve(x);
        }
        return sum;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        for(auto x:employees)
        {
            m[x->id] = x;
        }
       int ans = solve(id);
        return ans;
    }
};