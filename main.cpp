//matrix output question
def create(v,e,edges):
    am=[[0 for _ in range(v)] for _ in range(v)]
    for edge in edges:
        u,w=edge
        am[u-1][w-1]=1
        am[w-1][u-1]=1
    return am
def Print(matrix):
    for row in matrix:
        print(' '.join(map(str,row)))
v=int(input())
e=int(input())
edges=[tuple(map(int,input.split())) for _ in range(e)]
am=create(v,e,edges)
Print(am)

//Visited Node 
from collections import deque
def bfs(graph,start,v):
    visited=[False]*v
    queue=deque([start])
    visited[start]=True
    result=[]
    while queue:
        node=queue.popleft()
        result.append(f"Visited Node:{node}")
        for n in graph[node]:
            if not visited[n]:
                queue.append(n)
                visited[n]=True
    return result;
def main():
    v,e=map(int,input().split())
    graph=[[] for _ in range(v)]
    for _ in range(e):
        p1,p2=map(int,input().split())
        graph[p1].append(p2)
        graph[p2].append(p1)
    start_node=int(input())
    bfs_res=bfs(graph,start_node,v)
    for node in bfs_res:
        print(node)
if _name=="main_":
    main()


//vertex
def construct_graph(V, edges):
    adjacency_list = [[] for _ in range(V)]
    for x, y in edges:
        adjacency_list[x].append(y)
        adjacency_list[y].append(x)
    for neighbors in adjacency_list:
        neighbors.sort()
    return adjacency_list

def Print(adjacency_list):
    for vertex, neighbors in enumerate(adjacency_list):
        if neighbors:
            neighbors_str = '->'.join(map(str, neighbors))
        else:
            neighbors_str = ''
        print(f"Vertex {vertex}: {neighbors_str}")

def main():
    V = int(input())
    E = int(input())
    edges = []
    for _ in range(E):
        x, y = map(int, input().split())
        edges.append((x, y))
    
    adjacency_list = construct_graph(V, edges)
    Print(adjacency_list)

if _name_ == "_main_":
    main()
