class tree:
  def __init__(self, value=None, left=None, right=None):
        self.value = value
        self.left = left
        self.right = right

sum = 0

def insert_in_tree(root, node):
    if root is None:
        root = node
    
    elif root.value < node.value:
        if root.right is None:
            root.right = node
        else:
            insert_in_tree(root.right, node)
    else:
        if root.left is None:
            root.left = node
        else:
            insert_in_tree(root.left, node)

def sum_min_number(root, minValue):
  global sum
  if root.left is not None:
      sum_min_number(root.left, minValue)
  
  if sum < minValue:
      sum += root.value
  if root.right is not None:
      sum_min_number(root.right, minValue)

numberOfNumbers,height = input().split()
heights = input().split()

root = None

while len(heights) > 0:
  h = int(heights.pop(0))

  if root is None:
      root = tree(h)
  else:
      insert_in_tree(root, tree(h))

sum_min_number(root, int(height))
print(sum)
