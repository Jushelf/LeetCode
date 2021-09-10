struct pairLess
{
    inline bool operator() (const pair<int, int>& p1, const pair<int, int>& p2)
    {
        return p1.first < p2.first;
    }
};

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n = nums.size();
        vector<pair<int, int>> numsPair(n);

        for (int i = 0; i < n; ++i)
        {
            numsPair[i].first = nums[i];
            numsPair[i].second = i;
        }

        sort(numsPair.begin(), numsPair.end(), pairLess());

        for (int low = 0, high = n - 1; low < high;)
        {
            if (numsPair[low].first + numsPair[high].first > target)
            {
                high--;
            }
            else if (numsPair[low].first + numsPair[high].first < target)
            {
                low++;
            }
            else
            {
                if (numsPair[low].second < numsPair[high].second)
                {
                    return {numsPair[low].second, numsPair[high].second};
                }
                else
                {
                    return {numsPair[high].second, numsPair[low].second};
                }
            }
        }

        return {};
    }
};
