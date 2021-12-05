# Big O Notation : Space & Time Complexity

## Big O Notation(O())

- A function f(n) is said to be O(g(n)) if there exists a positive constant c such that, the function lies between the 0 and cg(n), for sufficiently large n.
`
O(g(n)) = { f(n): there exist positive constants c and n0
            such that 0 ≤ f(n) ≤ cg(n) for all n ≥ n0 }
`
- Big O(O()) describes the upperbound of the running time of an algorithm. Thus, it gives the worst-case complexity of an algorithm.
- In plain words, Big O Notation describes the complexity of your code using algebraic terms.

## Omega Notation(Ω())

- A function f(n) is said to be Ω(g(n)) , if there exists a positive constant c such that function lies above cg(n), for sufficiently large n.
`
Ω(g(n)) = { f(n): there exist positive constants c and n0
            such that 0 ≤ cg(n) ≤ f(n) for all n ≥ n0 }
`
- Omega (Ω()) descibes the lower bound of the complexity. As a result it provides the best case complexity of an algorithm.

## Theta (Θ()) Notation

- A function f(n) is said to be O(g(n)), if there exists positive constant c1 and c2 such that, f(n) can be sandwiched between c1.g(n) & c2.g(n), for sufficiently large n.
`
Θ(g(n)) = { f(n): there exist positive constants c1, c2 and n0
            such that 0 ≤ c1g(n) ≤ f(n) ≤ c2g(n) for all n ≥ n0 }
`
- If a function f(n) lies anywhere in between c1g(n) and c2g(n) for all n ≥ n0, then f(n) is said to be asymptotically tight bound.
- Theta notation encloses the function from above and below. Since it represents the upper and the lower bound of the running time of an algorithm, it is used for analyzing the average-case complexity of an algorithm.

## Complexity Comparison Between Typical Big Os
- O(1) has the least complexity
    - The algorithm to solve the problem with the O(1), is known as the best algorithm.
    - It is often called "constant time".
- O(log(n)) is more complex than O(1), but less complex than polynomials.
    - O(log(n)) is generally a good complexity you can reach for sorting algorithms. O(log(n)) is less complex than O(√n), because the square root function can be considered a polynomial, where the exponent is 0.5.
- Complexity of polynomials increases as the exponent increases
- Exponentials have greater complexity than polynomials as long as the coefficients are positive multiples of n
- Factorials have greater complexity than exponentials

## Space Complexity
- The space complexity is related to how much memory the program will use, and therefore is also an important factor to analyze.
- The space complexity works similarly to time complexity.