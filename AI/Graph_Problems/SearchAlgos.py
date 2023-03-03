from collections import deque
from collections import defaultdict

class Graph_BFS:
  def __init__(self):
    self.graph = defaultdict(list)

  def addEdge(self,u ,v):
    self.graph[u].append(v)

  def BFS(self, s):
    visited = [False] * (max(self.graph)+1)   

    queue = []

    queue.append(s)
    visited[s] = True

    while queue:
      s = queue.pop(0)
      print(s, end=" ")

      for i in self.graph[s]:
        if visited[i] == False:
          queue.append(i)
          visited[i] = True 

class Graph_Astar: 
  # Example of adjacency list
  # adjacency_list = {
  # 'A': [('B', 1), ('C', 3), ('D', 7)],
  # 'B': [('D', 5)],
  # 'C': [('D', 12)]
  # }
  def __init__(self, adjacency_list, heuristic_list):
    self.adjacency_list = adjacency_list
    self.heuristic_list = heuristic_list
  
  def get_neighbors(self, v):
    return self.adjacency_list[v]

  def heuristic_value(self,n):
    # H = {
    #     # "S": 10,
    #     "A": 1,
    #     "B": 1,
    #      "C":1,
    #      "D":1,
    #     #  "Y":8,
    #     #  "Z":5,
    #     #  "E":0
    #   }
    H = self.heuristic_list
    return H[n]

  def get_path(self, start_node, end_node):
    open_list = set([start_node])
    closed_list = set([])
    # For distances
    g = {}
    g[start_node] = 0
    parents = {}
    parents[start_node] = start_node 
 
    while len(open_list)>0:
      n = None
      # N keeps track of current node
      for v in open_list:
        if n==None or g[v] + self.heuristic_value(v) < g[n]+ self.heuristic_value(n):
          n=v
      
      if n==None:
        print("Path does not exist")
        return None

      if n== end_node:
        recons_path = []

        while parents[n] != n:
          recons_path.append(n)
          n = parents[n]
        recons_path.append(start_node)
        recons_path.reverse()
        print(f"{recons_path}")
        return recons_path


      for (m, weight) in self.get_neighbors(n):
        if m not in open_list and m not in closed_list:
          open_list.add(m)
          parents[m] = n
          g[m] = g[n] + weight
        else:
          # if it is open list or closed list
          # then check if it is quicker to reach n first then n
          if g[m] > g[n] + weight:
            g[m] = g[n] + weight
            parents[m] = n
            # and if m is in closed list remove from closed list and add it in open
            if m in closed_list:
              closed_list.remove(m)
              open_list.add(m)
      open_list.remove(n)
      closed_list.add(n)

    print("Path not found")
    return None 


def menu():
  print("Enter whether to choose informed search algo or uniformed search algo\n1.Uninformed Search Algorithm\n2. Informed Search Algo")
  n = int(input())
  if n == 1:
    g = Graph_BFS()
    len_nodes = int(input("Enter number of nodes: "))
    for i in range(len_nodes):
        p = int(input("Enter the parent node: "))
        c = int(input("Enter the child node: "))
        print()
        g.addEdge(p,c)
    start_node = int(input("Enter starting node: "))
    result = g.BFS(start_node)
    return result
  elif n==2:
    heuristic_list = {}
    len_nodes = int(input("Enter number of nodes: "))
    for i in range(len_nodes):
        node = input("Enter node: ")
        value = int(input("Enter it's heuristic value: "))

        heuristic_list[node] = value

    E = int(input("Enter number of nodes to create adjacency list: "))
    graph = {}
    for i in range(E):
        key = str(input("Enter the parent node: "))
        child_list = []
        child_nodes = int(input("Enter number of child nodes: "))
        for j in range(child_nodes):
          # children = tuple(input("Enter space separated input as child node and distance: ").split())
          node_name = str(input("Enter name of node: ")) 
          node_val = int(input("Enter distance to it: "))
          children = (node_name, node_val) 

          child_list.append(children)
        graph[key] = child_list
    print(graph)

    test_graph = Graph_Astar(graph, heuristic_list)
    result = test_graph.get_path("A","D")
    return result
    # h = int(input("Enter heuristic value"))
    # Astar(h)

if __name__ == "__main__":
    res = menu()
    print(res)