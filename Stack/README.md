# `Stack & Operations`

### `Introduction`

1. Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

### `Basic Operations`

1. Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
2. Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
3. Peek or Top: Returns the top element of the stack.
4. isEmpty: Returns true if the stack is empty, else false.

### `Implementation`

1. Stack can be implemented using:
   - Array.
   - Linked List.

# `Conversions`

### `Infix to Postfix Conversion`

1. Print operands as they arrive.
2. If stack is empty or contains a left paranthesis on top, push the incoming operator onto the stack.
3. If incoming symbol is `(` push it onto stack.
4. If incoming symbol is `)`, pop the stack and perform the operations until left paranthesis is found.
5. If incoming symbol has higher precedence than the top of the stack, push it on the stack.
6. If incoming symbol has lower precedence that the top of the stack, pop & print the top. Then test the incoming operator against the new top of the stack.
7. If incoming operator has the equal precedence with the top of the stack, use associativity rule.
   - Associativity LR, then pop and print the top of the stack and then push the incoming operator.
   - RL then push the incoming operator.
8. At the end of the expression, pop and print all operators of stack.

### `Infix to Prefix Conversion`

1. Reverse the given expression first.
2. Print operands as they arrive.
3. If stack is empty or contains a right paranthesis on top, push the incoming operator onto the stack.
4. If incoming symbol is `)` push it onto stack.
5. If incoming symbol is `(`, pop the stack and perform the operations until right paranthesis is found.
6. If incoming symbol has higher precedence than the top of the stack, push it on the stack.
7. If incoming symbol has lower precedence that the top of the stack, pop & print the top. Then test the incoming operator against the new top of the stack.
8. If incoming operator has the equal precedence with the top of the stack, use associativity rule.
   - Associativity RL, then pop and print the top of the stack and then push the incoming operator.
   - LR then push the incoming operator.
9. At the end of the expression, pop and print all operators of stack.
10. Reverse the expression.
