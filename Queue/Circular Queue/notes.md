# Circular Queue

The normal queue has some disadvantage. Let's take an example, we're having 5 elements on the queue [10, 20, 30, 40, 50]. So now the front will be 0 and the rear will be 4. Let's dequeue an element, now the front will be 1 and the rear remain 4. Now the queue is not full, because we have a space left at 0th index. But we could not enqueue an element as the rear is equal to the queue length.

To solve this problem, we have Circular Queue at the place.

<img width="307" alt="Screen Shot 2022-04-14 at 8 12 53 PM" src="https://user-images.githubusercontent.com/42216978/163436877-91edaf25-1e84-4b86-90e5-100bdabdb07d.png">
