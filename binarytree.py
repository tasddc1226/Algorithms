class Node:
    def __init__(self, item):
        self.data = item
        self.left = None
        self.right = None
    
    # def __str__(self):
    #     return str(self.data)

def newNode(data):
    node = Node(0)
    node.data = data
    node.left = node.right = None

    return (node)

