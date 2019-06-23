class Node:
    def __init__(self, data):
        self.data = data
        self.child = []


class Trie:
    def __init__(self):
        self.head = None
        self.child = []

    def additem(self, item):
        if self.head == None:
            self.head = Node(item)
        else:
            for i in range(len(item)):
                if i == 1 and self.head.data == item[i]:
                    continue
                elif i > 1:
                    for i in self.head.child:
                        if i.data == item[i]:
                            continue
                        else:
                            self.head.child.append(Node(item[i]))
                            self.head = self.head.child[-1]
