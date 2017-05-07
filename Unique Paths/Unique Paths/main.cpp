//
//  main.cpp
//  Unique Paths
//
//  Created by Orson Lin on 6/6/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
using namespace std;




class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int map[m][n];
        
        map[0][0] = 0;

    
        
        for(int i = 1; i<m; i++)
            map[i][0]=1;
        for(int i = 1; i<n; i++)
            map[0][i]=1;
        
        
        
        for(int i = 1;i<m;i++)
        {
            for(int j = 1; j<n; j++)
            {
                
                
                
                
                
                map[i][j]= map[i-1][j] + map[i][j-1];
            }
        }
        
        
        for(int i = 0;i<m;i++)
        {
            for(int j = 0; j<n; j++)
            {
                
                
                
                
                
                cout<<map[i][j]<<endl;
            }
        }
        
        cout<<map[m-1][n-1]<<endl;
        cout<<"ends here"<<endl;
        
        return map[m-1][n-1];
    }
};











int main(int argc, const char * argv[]) {

    Solution* test = new Solution;
    test->uniquePaths(1, 1);
    
    
    
    
    return 0;
}
