//
//  main.cpp
//  3 sum
//
//  Created by Orson Lin on 5/29/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;



class Solution{

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        sort(nums.begin(), nums.end());
        int first = 0;
        int second = 1;
        
        
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int bound =0;
        while(nums[bound]<0)
        {
            bound++;
        }
        
        
        if(nums[bound+2]==0)
        {
            vector<int> solution = {0, 0 ,0};
            return solution;
        }
        
//        if(i>0)
//        {
        
        
//        }
        
        if(bound>1)
        {
            for(int i1=0; i1<bound-1; i1++)
            {
                for(int i2=1; i2<bound; i2++)
                {
                    int record = nums[i1] + nums[i2];
                    
                    for(int i3 = bound; i3< nums.size();  )
            
            
            
                }
            
            }
        
        }
        
        
    
    
    
    
    
    }
    
    
    
    
    
    
    







};















int main(int argc, const char * argv[]) {
    int a[5] = {4, 3, 2, 1, 0};
    
    cout<< a[0] << endl;
    cout<< a[1] << endl;
      cout<< a[2] << endl;
      cout<< a[3] << endl;
      cout<< a[4] << endl;
    sort(a, a+5);

    cout<< a[0] << endl;
    cout<< a[1] << endl;
    cout<< a[2] << endl;
    cout<< a[3] << endl;
    cout<< a[4] << endl;
    
    
    return 0;
}
