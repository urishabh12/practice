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

if __name__ == "__main__":
    node1 = ListNode(20)
    node2 = ListNode(30)