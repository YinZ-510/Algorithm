# 建立一个辅助栈，每次压入当前最小值

class Solution:
    def __init__(self):
        self.stack = []
        self.minStack = []
    
    def push(self, node):
        # write code here
        self.stack.append(node)
        if self.minStack == [] or node < self.min():
            self.minStack.append(node)
        else:
            temp = self.min()
            self.minStack.append(temp)
    
    def pop(self):
        # write code here
        if self.stack == None or self.minStack == None:
            return None
        self.stack.pop()
        self.minStack.pop()
    
    def top(self):
        # write code here
        return self.stack[-1]
    
    def min(self):
        # write code here
        return self.minStack[-1]