# Circular Linked List

Circular Linked List is a type of linked list which has no end node (tail node). Instead, the next pointer of last node points to head, which makes the linked list to be accessed circularly.

The operation logics are little bit changed to adopt to this fashion.

- If you have to find the last node, we'll be checking whether the node's next is null or not, but in the case of circular linked list, we'll be checking if the next pointer points to head. This condition applies to most of the operation we have on Circular Linked List.

- Each and everytime we update the head node, we should also update the last node's next pointer to new head address.