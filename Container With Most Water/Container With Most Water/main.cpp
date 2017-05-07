//
//  main.cpp
//  Container With Most Water
//
//  Created by Orson Lin on 5/29/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int start = 0;
        int end = height.size()-1;
        int maxv =0;
        int volume=0;
        
        //volume = min(height[start], height[end])*(end-start);
        maxv = max(maxv, volume);
        
        while(end > start)
        {
            volume = min(height[start], height[end])*(end-start);
            maxv = max(maxv, volume);
            
            if(height[start]>=height[end])
                end--;
            else
                start++;
        }
        return maxv;
        
    }
};







int main(int argc, const char * argv[]) {
   
    cout << max(2, 6)<<endl;
    return 0;
}
