#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
  
    bool isSafe(int x,int y, vector<vector<int>>&visited,vector<vector<int>>&maze)
    {
        int n=maze.size();
        if(x>=0&&x<n&&
            y>=0&&y<n&&
            maze[x][y]==1&&
            visited[x][y]==0
        ) 
        {
            return true;
        }
        return false;
    }
    void solve(int x,int y,string path,vector<string>&ans,
    vector<vector<int>>&maze,vector<vector<int>>&visited)
    {
        int n=maze.size();
        //if the x==n-1 and y==n-1 that means the rat has reached the destination
        //so we much push that path into ans
        if(x==n-1&&y==n-1)
        {
            ans.push_back(path);
            return;
        }
        
        //mark that cell as visited
        visited[x][y]=1;
        
        //Down ka call
        if(isSafe(x+1,y,visited,maze))
        {
            solve(x+1,y,path+'D',ans,maze,visited);
        }
        
        //Left ka call
        if(isSafe(x,y-1,visited,maze))
        {
            solve(x,y-1,path+'L',ans,maze,visited);
        }
        //Right ka call
        if(isSafe(x,y+1,visited,maze))
        {
            solve(x,y+1,path+'R',ans,maze,visited);
        }
        //Up ka call
        if(isSafe(x-1,y,visited,maze))
        {
            solve(x-1,y,path+'U',ans,maze,visited);
        }
        
        visited[x][y]=0;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        int n=maze[0].size();
        vector<vector<int>>visited(n,vector<int>(n,0));
        string path;
        solve(0,0,path,ans,maze,visited);
        return ans;
    }
};
class Solution {
  public:
  
    bool isSafe(int x,int y, vector<vector<int>>&visited,vector<vector<int>>&maze)
    {
        int n=maze.size();
        if(x>=0&&x<n&&
            y>=0&&y<n&&
            maze[x][y]==1&&
            visited[x][y]==0
        ) 
        {
            return true;
        }
        return false;
    }
    void solve(int x,int y,string path,vector<string>&ans,
    vector<vector<int>>&maze,vector<vector<int>>&visited)
    {
        int n=maze.size();
        //if the x==n-1 and y==n-1 that means the rat has reached the destination
        //so we much push that path into ans
        if(x==n-1&&y==n-1)
        {
            ans.push_back(path);
            return;
        }
        
        //mark that cell as visited
        visited[x][y]=1;
        
        //Down ka call
        if(isSafe(x+1,y,visited,maze))
        {
            solve(x+1,y,path+'D',ans,maze,visited);
        }
        
        //Left ka call
        if(isSafe(x,y-1,visited,maze))
        {
            solve(x,y-1,path+'L',ans,maze,visited);
        }
        //Right ka call
        if(isSafe(x,y+1,visited,maze))
        {
            solve(x,y+1,path+'R',ans,maze,visited);
        }
        //Up ka call
        if(isSafe(x-1,y,visited,maze))
        {
            solve(x-1,y,path+'U',ans,maze,visited);
        }
        
        visited[x][y]=0;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string>ans;
        int n=maze[0].size();
        vector<vector<int>>visited(n,vector<int>(n,0));
        string path;
        solve(0,0,path,ans,maze,visited);
        return ans;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}