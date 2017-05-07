//
//  main.cpp
//  Unique Paths II
//
//  Created by Orson Lin on 6/6/15.
//  Copyright (c) 2015 Orson Lin. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;




class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        
        
        
        
        
        
        int n = obstacleGrid[0].size();
        int m = obstacleGrid.size();
        
        int map[m][n];
        

        cout<<"initial"<<endl;
        
        for(int i = 0;i<m;i++)
        {
            for(int j = 0; j<n; j++)
            {
                
                
                map[i][j] = -1;
                
                
                cout<<map[i][j]<<endl;
            }
        }
        
        cout<<"endl"<<endl;

        
        for(int i = 0;i<m;i++)
        {
            for(int j = 0; j<n; j++)
            {
                
               if (obstacleGrid[i][j] == 1)
                   map[i][j] = 0;
            }
        }

        
        cout<<"step1"<<endl;
        
        for(int i = 0;i<m;i++)
        {
            for(int j = 0; j<n; j++)
            {
                
                
                //map[i][j] = -1;
                
                
                cout<<map[i][j]<<endl;
            }
        }
        
        cout<<"endl"<<endl;
        
        
        if(map[0][0] == 0)
            return 0;
        


        
        
        map[0][0] = 1;
        
        

        
        int row = 0;
        cout<< "checker is " << obstacleGrid[0][1]<<endl;
        while(row < n && obstacleGrid[0][row] == 0)
        {
            map[0][row] = 1;
            row++;
        }
        
        cout<<"row is "<<row<<endl;
        cout<<"m is "<<m<<endl;
        while(row<n)
        {
            map[0][row]= 0;
            cout<<"hi"<<endl;
            row++;
        }
        
        
        cout<<"step2"<<endl;
        
        for(int i = 0;i<m;i++)
        {
            for(int j = 0; j<n; j++)
            {
                
                
                //map[i][j] = -1;
                
                
                cout<<map[i][j]<<endl;
            }
        }
        
        cout<<"endl"<<endl;
        
        cout<<"n is "<<n<<endl;

        
        int column = 0;
   
        
        while(column < m && obstacleGrid[column][0] == 0)
        {
            map[column][0] = 1;
            cout<<"hi"<<endl;
            column++;
        }
        
        while(column<m)
        {
            map[column][0]= 0;
            cout<<"fuck"<<endl;
            column++;
        }
        cout<<"wtf"<<endl;
   
        
        cout<<"step3"<<endl;
        
        for(int i = 0;i<m;i++)
        {
            for(int j = 0; j<n; j++)
            {
                
                
                //map[i][j] = -1;
                
                
                cout<<map[i][j]<<endl;
            }
        }
        
        cout<<"endl"<<endl;
        
        
        
        
        
        
        
        
        for(int i = 1;i<m;i++)
        {
            for(int j = 1; j<n; j++)
            {
                
                if( map[i][j] != 0)
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
    
    vector<vector<int>> blue = {{0,0,0},{0,1,0},{0,0,0}};
 //   vector<vector<int>> blue = {{0,0}};
  //  vector<vector<int>> blue = {{0},{0}};
    
    Solution* test = new Solution;
    test->uniquePathsWithObstacles(blue);
    
    
    
    
    return 0;
}