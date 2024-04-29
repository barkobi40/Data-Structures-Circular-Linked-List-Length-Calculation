### Circular Linked List Length Calculation ###
Assignment Description
This assignment is related to circular linked lists containing nodes with binary values. The objective is to write an efficient program that takes a pointer to a circular linked list as input and returns the length of the list (number of nodes). The program should not use an additional pointer to check if it has reached the head of the list, but it is allowed to toggle the binary value of each node between 0 and 1.

### Input Generation
To generate the input, a circular, doubly-linked list should be created. At each iteration, a new node is added randomly with a probability of 0.99. The process stops with a probability of 0.01. Alternatively, a condition can be defined, and nodes will be added until the condition is met.

During node creation, a random binary value should be assigned to the key field.

### Requirement
The length of the list should be calculated after the list is created.

### Constraints
-No use of list libraries is allowed; everything should be implemented manually.
-No use of additional data structures is permitted.
-The time complexity of the solution should be O(N^2).
### Implementation
The implementation should follow the given constraints and meet the assignment requirements. It should include:

-A function to create the circular linked list with random binary values in each node.
-A function to calculate the length of the circular linked list without using an additional pointer to check for the head node.
-Any necessary helper functions or data structures (within the constraints).
-Proper documentation and comments to explain the code.
Testing
-The code should be thoroughly tested with various test cases, including:

Lists of different lengths
Lists with all nodes having the same binary value
Lists with alternating binary values
Empty lists
Lists with a single node
Test cases should cover edge cases and ensure the correctness of the solution.
