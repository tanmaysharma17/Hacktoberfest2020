/*Given a Boolean 2D matrix (0-based index), find whether there is a path from (0,0) to (x,y)
and if there is one path, print the minimum no of steps needed to reach it, else print -1
if the destination is not reachable. Moves are possible in only four directions i.e. up, 
down, left and right. The path can only be created out of a cell if its value is 1.*/


  #include<bits/stdc++.h>
  using namespace std;
  #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  #define max(a,b) (a>b?a:b)
  
  int32_t main()
  {
       IOS  //for fast IO
       int n,m,u,v;
       cin>>n>>m;   //n,m are the dimension of the boolean matrix entered
       int matrix[n][m];
       bool reached = false; //flag variable to know if the search reaches destination or not
       for(int i = 0;i<n;i++)
       {
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
       }
       cin>>u>>v;  //{u,v} is the destination to reach
       //BFS is the ideal algo to use in this case
       if(!matrix[0][0] or !matrix[u][v]) {cout<<"-1"; return 0;}        //the corner case where start/end itself if a wall
       int dx[4] = {-1,+1,0,0}; //4-direction arrays
       int dy[4] = {0,0,-1,+1};
       int ways[n][m];  //this matrix stores minimum number of ways/steps to reach a cell
       memset(ways,-1,sizeof(ways));
       queue<pair<int, int>> q;
       q.push({0,0});
       ways[0][0] = 0;
       while(!q.empty())
       {
         auto t = q.front();
         q.pop();
         if(t.first == u && t.second == v)
         {
            reached = true;
            break;
         }
         for(int i = 0;i<4;i++)
         {
            int x = t.first + dx[i];
            int y = t.second + dy[i];
            if(x>=0 && x<n && y>=0 && y<m)
            {
                //its a valid cell state
                if(matrix[x][y])
                {
                    if(ways[x][y]==-1)
                    {
                        ways[x][y] = ways[t.first][t.second] + 1;
                    }
                    else
                    {
                        if(ways[t.first][t.second] + 1 < ways[x][y])
                            ways[x][y] = ways[t.first][t.second] + 1;
                    }
                    q.push({x,y});
                }       
            }
         }
       }
       if(!reached)
       {
        cout<<"-1";
       }
       else
       {
        cout<<ways[u][v]<<"\n";
       }
       return 0;
    }
