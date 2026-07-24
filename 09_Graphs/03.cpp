https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
  //create a visited array to keep track of visited nodes
  //create a queue for BFS traversal
  //start from any node(lets say 0), mark it visited and push it in the queue
  //while(!q.empty()){
      //remove the front node
      //add it to answer
    //   visit all unvisited neighbours, mark them visited and oush them in queue
    //return the BFS traversal output
//   }
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V = adj.size();
        
        vector<int> bfsResult; //store the bfs traversal
        vector<bool> visited(V, false); //keep track of visited nodes
        
        queue<int> q;
        //strt bfs for node 0
        q.push(0);
        visited[0] = true;
        
        //continue until all reachable nodes are visited
        while(!q.empty()){
            
            int front = q.front();
            q.pop();
            
            //add current node in answer
            bfsResult.push_back(front);
            
            //visit all neighbours of current node
            for(auto neighbour : adj[front]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
            return bfsResult;
        
        
    }
};


https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1


class Solution {
  public:
  //create a visited array to keep track of visited nodes
  //start DFS from node 0
  //mark current node as visited and add it to the answer
  // visit all unvisited neighbour recursively
  //when all recursive clls finish, return the DFS traversal
  void dfsHelper(int node, vector<vector<int>>& adj,vector<bool> &visited,
  vector<int> &result){
      //mark the current node as visited
      visited[node] = true;
      
      //add the current node to answer
      result.push_back(node);
      
      //visit all unvisited neighbours
      for(auto neighbour : adj[node]){
          if(!visited[neighbour]){
              dfsHelper(neighbour, adj, visited, result);
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
        vector<bool> visited(V, false);
        
        vector<int> result;
        
        dfsHelper(0,adj, visited, result);
        return result;
        
        
        
    }
};


https://leetcode.com/problems/number-of-provinces/description/

class Solution {
public:
    void dfsHelper(int city, vector<vector<int>>& isConnected,vector<bool> &isVisited){
        isVisited[city] = true;

        for(int neighbour = 0; neighbour < isConnected.size(); neighbour++){
            //if cities are connected and neighbour is not visited
            if(isConnected[city][neighbour] == 1 && !isVisited[neighbour]){
                dfsHelper(neighbour, isConnected, isVisited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

        vector<bool> isVisited(n, false);
        int provienceCount = 0;

        for(int i = 0; i < n; i++){
            if(!isVisited[i]){
                dfsHelper(i, isConnected, isVisited);
                provienceCount++;
            }
        }
        return provienceCount;
    }
};


https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
  bool bfsHelper(int startNode, vector<vector<int>> &adj, vector<bool> &visited){
      queue<int> q;
      unordered_map<int, int> parent;
      
      visited[startNode] = true;
      q.push(startNode);
      parent[startNode] = -1;
      
      while(!q.empty()){
          int frontNode = q.front();
          q.pop();
          
          for(int neighbour : adj[frontNode]){
              if(!visited[neighbour]){
                  visited[neighbour] = true;
                  q.push(neighbour);
                  parent[neighbour] = frontNode;
              }
                else if(parent[frontNode] != neighbour){
                    return true;
                }
          }
      }
      return false;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(V, false);
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                if(bfsHelper(i, adj, visited)){
                    return true;
                }
            }
        }
        return false;

    }
};



https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

class Solution {
  public:
  bool dfsHelper(int node,  vector<vector<int>> &adj, vector<bool> &visited, vector<bool> rec){
      visited[node] = true;
      rec[node] = true;
      
      for(auto neighbour : adj[node]){
          if(!visited[neighbour]){
              if(dfsHelper(neighbour, adj, visited, rec)){
                  return true;
              }
          }
             else if(rec[neighbour]){
            return true;
              }
      }
      rec[node] = false;
      return false;
  }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false);
        vector<bool> rec(V, false);
        
        for(int i = 0; i < V; i++){
            if(dfsHelper(i, adj, visited, rec)){
                return true;
            }
        }
        return false;
    }
};


https://leetcode.com/problems/flood-fill/

class Solution {
public:

    void dfs(int r, int c, vector<vector<int>>& image, int originalColor, int newColor){
        int n = image.size();
        int m = image[0]. size();

        if(r < 0 || r >= n || c < 0 || c >= m) return;
        if(image[r][c] != originalColor) return;
        image[r][c] = newColor;

        //top
        dfs(r-1, c, image, originalColor, newColor);
        //bottom
        dfs(r+1, c, image, originalColor, newColor);
        //left
        dfs(r, c-1, image, originalColor, newColor);
        //right
        dfs(r, c+1, image, originalColor, newColor);



    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if(originalColor == color) return image;
        dfs(sr, sc, image, originalColor, color);
        return image;

    }
};


https://www.geeksforgeeks.org/problems/topological-sort/1

class Solution {
  public:
  void dfs(int node , vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st){
      visited[node] = true;
      
      for(auto neighbour : adj[node]){
          if(!visited[neighbour]){
              dfs(neighbour, adj, visited, st);
          }
      }
      st.push(node);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false);
        stack<int> st;
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                dfs(i, adj, visited, st);
            }
        }
        
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
        
    }
};







https://www.geeksforgeeks.org/problems/topological-sort/1

class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        //Kahn's algo
    //compute indegree of every node
    //push all the nodes with indegree = 0 in the queue
    //remove nodes one by one fro queue, and add to the answer
    // for each removed node, decrease the indegree if its neighbour by 1
    // if any neighbour becomes indegree == 0, push that in queuue
    //if number opf visitedNode != number of given vertices -> cycle exist
    
    vector<vector<int>> adj(V);
    for(auto i : edges){
        int u = i[0];
        int v = i[1];
        adj[u].push_back(v);
        
        //create a indegree vector
        vector<int> indegree(V, 0);
        for(int i = 0; i < V; i++){
            for(int j : adj[i]){
                indegree[j]++;
            }
        }
        //push all vertices with indegree 0 in queue
        queue<int> q;
        for(int i = 0; i < V; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> result;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            result.push_back(front);
            
            for(auto neighbour : adj[front]){
                indegree[neighbour]--;
                
                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
        if(result.size() != V){
            return {};
        }
        return result;
        
    }
    
    
    }
};








