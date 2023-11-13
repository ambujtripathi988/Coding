
// https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1

class Solution
{
    private:
    vector<int> nextSmallerElement(long long arr[], int n)
    {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr)
                s.pop();

            ans[i] = s.top();

            s.push(i);
        }

        return ans;
    }

    vector<int> prevSmallerElement(long long arr[], int n)
    {
        stack<int> s;
        s.push(-1);

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            int curr = arr[i];

            while (s.top() != -1 && arr[s.top()] >= curr)
                s.pop();

            ans[i] = s.top();

            s.push(i);
        }

        return ans;
    }

    public:
    long long getMaxArea(long long arr[], int n)
    {
        vector<int> next(n);
        next = nextSmallerElement(arr, n);

        vector<int> prev(n);
        prev = prevSmallerElement(arr, n);

        long long area = 0;

        for (int i = 0; i < n; i++)
        {
            long long l = arr[i];

            if (next[i] == -1)
                next[i] = n;

            long long b = next[i] - prev[i] - 1;

            long long newAns = l * b;

            area = max(newAns, area);
        }

        return area;
    }
};
