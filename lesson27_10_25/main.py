import sys

def count_subtree(node_id, children_map):
    count = 1
    if node_id in children_map:
        for child in children_map[node_id]:
            count += count_subtree(child, children_map)
    return count

sys.setrecursionlimit(2000)

n = int(sys.stdin.readline())
children_map = {}
for _ in range(n):
    msg_id, parent_id = map(int, sys.stdin.readline().split())
    if parent_id not in children_map:
        children_map[parent_id] = []
    children_map[parent_id].append(msg_id)

k = int(sys.stdin.readline())

print(count_subtree(k, children_map)) 