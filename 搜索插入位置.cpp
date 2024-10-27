#include<iostream>
using namespace std;
#include<vector>



 int searchleft(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right)
        {
            int middle = left + ((right - left) / 2);
            if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else 
            {
                right = middle;
            }
        }
        if (right == nums.size())
        {
            return -1;
        }
        return right;
    }


    int searchright(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right)
        {
            int middle = left + ((right - left) / 2);
            if (nums[middle] <= target)
            {
                left = middle + 1;
            }
            else
            {
                right = middle;
            }
        }
        if (left == 0)
        {
            return -1;
        }
        return left - 1;
    }

int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);
    v.push_back(10);
    v.push_back(12);
    int ret = searchleft(v,9);
    int ret2 = searchright(v, 9);
    if (ret == -1 || ret2 == -1)
    {
        return{ -1,-1 };
    }
    else if (v[ret] != v[ret2])
    {
        return{ -1,-1 };
    }
    return { ret1,ret2 };
    cout << "×ó±ß½ç£º" << ret << endl;;
    cout << "ÓÒ±ß½ç£º" << ret2 << endl;
	system("pause");
	return 0;
}