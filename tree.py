from collections import *

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class Tree:
    def __init__(self):
        self.root = None

    def build_tree(self, x):
        new_node = Node(x)

       
        if self.root is None:
            self.root = new_node
            return

      
        q = deque()
        q.append(self.root)

        while q:
            temp = q.popleft()

            if temp.left is None:
                temp.left = new_node
                return
            else:
                q.append(temp.left)

            if temp.right is None:
                temp.right = new_node
                return
            else:
                q.append(temp.right)

    def level_order(self):
        if self.root is None:
            return

        q = deque()
        q.append(self.root)

        while q:
            node = q.popleft()
            print(node.data, end=' ')
            if node.left:
                q.append(node.left)
            if node.right:
                q.append(node.right)


# Main like section
if __name__ == "__main__":
    t = Tree()
    n = int(input("Enter number of nodes: "))
    print("Enter node values:")
    for _ in range(n):
        val = int(input())
        t.build_tree(val)

    print("Level-order traversal:")
    t.level_order()
