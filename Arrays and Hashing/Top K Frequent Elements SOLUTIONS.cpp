#include <bits/stdc++.h>
using namespace std;
//Sorting solution (using unordered_map) with time O(N log n)

class Solution1 
{
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> count;
            for (int num : nums) {
                count[num]++;
            }
    
            vector<pair<int, int>> arr;
            for (const auto& p : count) {
                arr.push_back({p.second, p.first});
            } //he is pushing the second pair first so when they are sorted its sorted based on the count
            sort(arr.rbegin(), arr.rend()); //this sorts in reverse meaning in descending order
    
            vector<int> res;
            for (int i = 0; i < k; ++i) {
                res.push_back(arr[i].second);
            } //he is returning the second because he pushed the {coun,value} in the array
            return res;
        }
};

class Solution2 {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> count;
            for (int num : nums) {
                count[num]++;
            } //like the other we have a map to keep a counter
    
            priority_queue< pair<int, int>,
            vector< pair <int, int> >, //this means the container is a vector<pair<>> which is the default
            greater< pair<int, int> > > heap; //we do greater<> so we keep the smallest elemnts first 
            for (auto& entry : count) 
            {
                heap.push({entry.second, entry.first});
                if (heap.size() > k) 
                {
                    heap.pop();
                }
            }
    
            vector<int> res;
            for (int i = 0; i < k; i++) {
                res.push_back(heap.top().second);
                heap.pop();
            }
            return res;
        }
    };