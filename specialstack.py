class special_stack:
    def __init__(self):
        self.stack = []
        self.minstack = []

    def isEmpty(self):
        if len(self.stack) == 0:
            return True
        else:
            return False

    def push(self, a):
        if self.isEmpty():
            self.minstack.append(a)
        else:
            if self.minstack[-1] > a:
                self.minstack.append(a)
        self.stack.append(a)

    def pop(self):
        if self.isEmpty():
            print("Stack is Empty can't pop")
        else:
            num = self.stack.pop()
            if num == self.minstack[-1]:
                self.minstack.pop()

    def min(self):
        if self.isEmpty():
            print("Stack is Empty")
        else:
            print(self.minstack[-1])


if __name__ == "__main__":
    stack = special_stack()
    stack.push(2)
    stack.push(3)
    stack.push(1)
    stack.min()
    stack.pop()
    stack.min()
