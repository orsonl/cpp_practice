//
//  main.cpp
//  two_sum
//
//  Created by Orson Lin on 5/25/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
    for(long index2 = nums.size()-1; index2 >= 0; index2--)
        {
            if (nums[index2]<target)
            {
                for(long index1 = index2 -1; index1 >=0;index1--)
                    {
                        if (nums[index1] == target - nums[index2])
                            {
                            cout<<"index1 is "<<index1+1<<endl;
                            cout<<"index2 is "<<index2+1<<endl;
                            return nums;
                            }
                    }
            }
        }
        
        cout<<"failed"<<endl;
        return nums;
    }
};

int main(int argc, const char * argv[]) {

    Solution *test = new Solution;
    vector<int> third = {2,3, 4};
    test->twoSum(third, 6);
    return 0;
}
