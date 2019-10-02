# https://practice.geeksforgeeks.org/problems/length-of-longest-palindrome-in-linked-list/1
''' This is a function problem.You only need to complete the function given below '''
# your task is to complete this function
# function should return an integer
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def maxPalindrome(head):
    if head.next is None:
        return 1
    else:
        left = head
        center = head.next

    if head.next.next is None:
        return max(0, 2*count_common_data(left, center))
    else:
        right = head.next.next

    answer = 0
    while right is not None:
        answer = max(answer, 2*count_common_data(left, right) + 1)
        answer = max(answer, 2*count_common_data(left, center))
        center.next = left
        left = center
        center = right
        right = right.next
    return answer


def count_common_data(a, b):
    result = 0
    while a and b:
        if a.data == b.data:
            result += 1
            a = a.next
            b = b.next
        else:
            break
    return result


# Node Class
class node:
    def __init__(self):
        self.data = None
        self.next = None
# Linked List Class
class Linked_List:
    def __init__(self):
        self.head = None
    def insert(self, data):
        if self.head == None:
            self.head = node()
            self.head.data = data
        else:
            new_node = node()
            new_node.data = data
            new_node.next = None
            temp = self.head
            while(temp.next):
                temp=temp.next
            temp.next = new_node
# Driver Program
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        list1 = Linked_List()
        n = int(input())
        values = list(map(int, input().strip().split()))
        for i in values:
            list1.insert(i)
        print(maxPalindrome(list1.head))
# Contributed By: Harshit Sidhwa
