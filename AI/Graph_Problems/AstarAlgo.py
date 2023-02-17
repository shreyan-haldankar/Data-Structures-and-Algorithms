from collections import deque


#  Make a ds for graph 
class Graph:
    def __init__(self, adjacency_list):
        self.adjacency_list = adjacency_list
    
    def get_neighbours(self, v):
        return self.adjacency_list[v]
    
    def h(self, n):
        H = {
            'A':1,
            'B':1,
            'C':1,
            'D':1,
        }
        return H[n]

    def a_star_algo(self, start_node, end_node):
        open_list = set([start_node])
        closed_list = set([])

        g = {}
        g[start_node] = 0

        parents = {}
        parents[start_node] = start_node
        
        while len(open_list)>0:
            
            n = None

            for v in open_list:
                if n==None or g[v] + self.h(v) < g[n] + self.h(n):
                    n = v
            
            if n == None:
                print("Path does not exist")
                return None

            if n == end_node:
                reconstructed_path = []

                if parents[n] != n:
                    reconstructed_path.append(n)
                    n = parents[n]
                reconstructed_path.append(start_node)

                reconstructed_path.reverse()
                print(f"{reconstructed_path}")
                return reconstructed_path

            for (m, weight) in self.get_neighbours(n):

                if m not in open_list and m not in closed_list:
                    open_list.add(m)
                    parents[m] = n
                    g[m] = g[n] + weight
                # if we can reach n first then m
                else:
                    if g[m] > g[n] + weight:
                        g[m] = g[n] + weight
                        parents[m] = n

                        if m in closed_list:
                            closed_list.remove(m)
                            open_list.add(m)

            open_list.remove(n)
            closed_list.add(n)
        print("Path not found")
        return None


# Testing 

adjacency_list_main = {
  'A': [('B', 1), ('C', 3), ('D', 7)],
  'B': [('D', 5)],
  'C': [('D', 12)]
  }

myGraph = Graph(adjacency_list_main)
myGraph.a_star_algo("A","D")