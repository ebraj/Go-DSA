# `Queue & Its Operations`

### `Introduction`

1. A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO).
2. Example : Any queue of consumers for a resource where the consumer that came first is served first.
3. There are two openings on queue.
4. We insert the element to the queue from one end known as rear/tail.
5. We do delete the element from the queue from the other end called as front/head.
6. Time Complexity(For Insertion and Deletion) - 0(n).

### `Basic Operations`

1. enqueue() - Adding the item to the queue.
2. dequeue() - Removing the item from the queue.
3. peek() | front() - For getting the element at the front of the queue without removing it from the queue.
4. isFull() - Checks if the queue is full.
5. isEmpty() - Checks if the queue is empty.
