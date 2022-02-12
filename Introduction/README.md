# `Some Terminologies`

### `Data`

1. Data are the raw facts, unorganized facts that need to be processed. Data can be something simple and random and useless until it is organized.

### `Information`

1. When data is processed, organized, structured or presented in a given context so as to make it useful, it is called information.

### `Algorithm`

1. Systematic-logical approach which is well-defined, step by step procedure that allows a computer to solve the problem.

2. Algorithms can be expressed using natural language, flowcharts, etc.

### `Data Structure`

1. Arrangement/Organizating of the data inside the main memory for the effective utilization by the application is known as the data structure.

### `Database`

1. The arrangement of the data in some model in the permanent storage so that the data can be retrieved or access by applications easly is known as the database.

### `Data Warehouse`

1. Data Warehouse can be simply known as the place to store the historical datas.

### `Data Mining`

1. The algorithms for analyzing the data from the data warehouse is known as the data mining algorithms.

# `Stack & Heap Allocations`

### `Stack Allocations`

1. Stack is a temporary memory allocation sheme where the data members are accessible only if the method() that contained them is currently running.
2. It allocates or de-allocates the memory automatically as soon as the corresponding method completes its execution.
3. Memory is allocated in the contiguous block.
4. Note : Memory allocation/de-allocation is easier in stack.

### `Heap Allocation`

1. In comparision to the stack allocation, allocation scheme is totally different.
2. Memory is allocated during the exection of instructions written by the programmers.
3. We need to de-allocate the memory after the use, in order to avoid the memory leak.
4. Memory is allocated in any random order.
5. Note : Heap-memory exists as long as the whole application runs.

# `Types of Data Structures`

1. Linear Data Structures :

   - In linear data structures, the elements are arranged in sequence one after the other. Due to which they are very easy to implement.
   - Some Linear data structures are Array, Linked List, Stack, Queue.
   - Note : The time complexity increase with the data size.

2. Non Linear Data Structures :

   - Some non-linear data structures are Tree, Graph, Map.
   - Note : The time complexity remains the same.

# `Big O Notation : Space & Time Complexity`

### `Big O Notation(O())`

1. A function f(n) is said to be O(g(n)) if there exists a positive constant c such that, the function lies between the 0 and cg(n), for sufficiently large n.
   `O(g(n)) = { f(n): there exist positive constants c and n0 such that 0 ≤ f(n) ≤ cg(n) for all n ≥ n0 }`
2. Big O(O()) describes the upperbound of the running time of an algorithm. Thus, it gives the worst-case complexity of an algorithm.
3. In plain words, Big O Notation describes the complexity of your code using algebraic terms.

### `Omega Notation(Ω())`

1. A function f(n) is said to be Ω(g(n)) , if there exists a positive constant c such that function lies above cg(n), for sufficiently large n.
   `Ω(g(n)) = { f(n): there exist positive constants c and n0 such that 0 ≤ cg(n) ≤ f(n) for all n ≥ n0 }`
2. Omega (Ω()) descibes the lower bound of the complexity. As a result it provides the best case complexity of an algorithm.

### `Theta (Θ()) Notation`

1. A function f(n) is said to be O(g(n)), if there exists positive constant c1 and c2 such that, f(n) can be sandwiched between c1.g(n) & c2.g(n), for sufficiently large n.
   `Θ(g(n)) = { f(n): there exist positive constants c1, c2 and n0 such that 0 ≤ c1g(n) ≤ f(n) ≤ c2g(n) for all n ≥ n0 }`
2. If a function f(n) lies anywhere in between c1g(n) and c2g(n) for all n ≥ n0, then f(n) is said to be asymptotically tight bound.
3. Theta notation encloses the function from above and below. Since it represents the upper and the lower bound of the running time of an algorithm, it is used for analyzing the average-case complexity of an algorithm.

### `Complexity Comparison Between Typical Big Os`

1. O(1) has the least complexity

   - The algorithm to solve the problem with the O(1), is known as the best algorithm.
   - It is often called "constant time".

2. O(log(n)) is more complex than O(1), but less complex than polynomials.
3. O(log(n)) is generally a good complexity you can reach for sorting algorithms. O(log(n)) is less complex than O(√n), because the square root function can be considered a polynomial, where the exponent is 0.5.
4. Complexity of polynomials increases as the exponent increases
5. Exponentials have greater complexity than polynomials as long as the coefficients are positive multiples of n
6. Factorials have greater complexity than exponentials.
7. 1 < logn < n < xlogx < n^2 < n^3 < 2^n < n^n

### `Space Complexity`

1. The space complexity is related to how much memory the program will use, and therefore is also an important factor to analyze.
2. The space complexity works similarly to time complexity.

### `log(n)`

1. Log(n) refers to how many times I need to divide n units until they can no longer be divided (into halves).

### `Time Complexity Calculation`

1. Drop the non-dominant terms
2. Drop the constant term
3. Break the code into fragments
