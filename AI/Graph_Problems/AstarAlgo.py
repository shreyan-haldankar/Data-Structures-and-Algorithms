from collections import deque


#  Make a ds for graph
class Graph:
    def __init__(self, adjacency_list):
        self.adjacency_list = adjacency_list

    def get_neighbors(self, v):
        return self.adjacency_list[v]

    def heuristic_value(self, n):
        H = {
        "S": 10,
        "A": 5,
        "B": 6,
         "C":4,
         "D":15,
         "Y":8,
         "Z":5,
         "E":0
      }
        return H[n]

    def a_star_algo(self, start_node, end_node):
        open_list = set([start_node])
        closed_list = set([])
        # For distances
        g = {}
        g[start_node] = 0
        parents = {}
        parents[start_node] = start_node

        while len(open_list) > 0:
            n = None
            # N keeps track of current node
            for v in open_list:
                if n == None or g[v] + self.heuristic_value(v) < g[n] + self.heuristic_value(n):
                    n = v

            if n == None:
                print("Path does not exist")
                return None

            if n == end_node:
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


# Testing

adjacency_list_main = {
    'S': [('A', 1), ('B', 2)],
    'A': [('Y', 7), ('Z', 4)],
    'B': [('C', 7),('D', 1)],
    'Y': [('E',3)],
    'Z': [('E', 2)],
    'C': [('E', 5)],
    'D': [('E', 12)],
}

myGraph = Graph(adjacency_list_main)
myGraph.a_star_algo("S", "E")
