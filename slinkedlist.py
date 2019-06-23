class ListNode:
    
    def __init__(self, data):
        self.data = data
        self.next = None
        return
    
    def has_value(self, value):
        if self.data == value:
            return True
        else:
            return False

class SingleLinkedList:

    def __init__(self):
        self.head = None
        self.tail = None

    def add_list_item(self, item):
        if not isinstance(item, ListNode):
            item = ListNode(item)
        
        if self.head == None:
            self.head = item
        else:
            self.tail.next = item

        self.tail = item

    def list_length(self):
        count = 0
        currentNode = self.head

        while currentNode is not None:
            count += 1
            currentNode = currentNode.next
        
        return count

    def output_list(self):
        currentNode = self.head

        while currentNode is not None:
            print(currentNode.data)
            currentNode = currentNode.next

        return

if __name__ == "__main__":
    ll = SingleLinkedList()
    
    for i in input().split():
        ll.add_list_item(i)
    
    print(ll.list_length())
    ll.output_list()