import json


class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def serialize(root):
    if root == None:
        return None

    serialize_tree = dict()
    left = serialize(root.left)
    right = serialize(root.right)

    serialize_tree['data'] = root.data
    if left:
        serialize_tree['left'] = left
    if right:
        serialize_tree['right'] = right

    return json.dumps(serialize_tree)


def deserialize(data):
    serialize_tree = json.loads(data)

    node = Node(serialize_tree['data'])
    if 'left' in serialize_tree:
        node.left = deserialize(serialize_tree['left'])
    if 'right' in serialize_tree:
        node.right = deserialize(serialize_tree['right'])

    return node


node_a = Node('a')
node_b = Node('b')
node_c = Node('c')
node_d = Node('d')
node_e = Node('e')
node_f = Node('f')
node_g = Node('g')
node_a.left = node_b
node_a.right = node_c
node_b.left = node_d
node_b.right = node_e
node_c.left = node_f
node_c.right = node_g

data = serialize(node_a)
print(data)
copy = deserialize(data)
