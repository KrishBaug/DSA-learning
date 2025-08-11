# Analysis of Algorithms

****Analysis of Algorithms**** is a fundamental aspect of computer science that involves evaluating performance of algorithms and programs. Efficiency is measured in terms of time and space.


**Importance of Analysis of Algorithms**

* Performance supports user-friendliness, security, and maintainability.
* Good performance is necessary to handle large tasks (scale).
* Slow features fail when tasks grow bigger.
* Analysis estimates time and memory needed by an algorithm.
* It helps predict behavior for large inputs.
* Simple measures save time instead of testing every change.
* Comparing algorithms helps choose the best one.


## **Order of Growth**

How to calculate order of growth ?


**Ex 1.** f(n) = 1000, g(n) = n + 1

g(n) is always 1 greater than f(n)


**Ex 2.** f(n) = $4n^2$, g(n) = 2n + 2000

Here f(n) grows quadratically whereas g(n) expands linearly.


**Calculate quickly :**

**Ex 1**: $4n^2 + 3n + 100$

Take the highest order of variable.

Here the growth order is $n^2$

**Ex 2.**

$100 n \log n + 3n + 100 \log n + 2$

Here growth order in n log n


Compare growth order:

c < log log n < log n < $n^{1/3}$ < $n^{1/2}$ < n < n log n < $n^2$ < $n^2 \log n$ < $n^3$ < $n^4$ < $2^n$ < $n^n$


## Asymptomatic Analysis


* Asymptotic Analysis studies algorithm performance based on input size, not exact running time.
* It measures the order of growth of time or space as input size increases (e.g., linear, logarithmic).
* Example:
  * Linear Search grows linearly (O(n)).
  * Binary Search grows logarithmically (O(log n)).
* For small inputs, a slower algorithm on a faster machine may be quicker.
* For large inputs, order of growth dominates machine speed differences.
* Machine constants become negligible as input size grows very large.
* Example constants:
  * Machine A (fast): constant 0.2
  * Machine B (slow): constant 1000
* Running time formulas:
  * Linear Search on A: 0.2 * n
  * Binary Search on B: 1000 * log(n)
* Asymptotic Analysis ignores constants, so two algorithms with same order (e.g., 1000nlogn vs 2nlogn) are considered equal asymptotically.
* It can’t always predict practical performance (e.g., Quick Sort faster than Heap Sort despite worse worst-case).
* Asymptotic analysis focuses on large inputs; sometimes slower asymptotic algorithms perform better on small inputs used in practice



* **Worst Case Analysis**

  * Calculates the maximum running time (upper bound).
  * Focuses on input causing the most operations.
  * Example: Linear Search worst case = element not in array (checks all).
  * Mostly used because it guarantees max time needed.
* **Best Case Analysis**

  * Calculates minimum running time (lower bound).
  * Focuses on input causing least operations.
  * Example: Linear Search best case = element at first position (only 1 check).
  * Rarely used because it gives overly optimistic view.
* **Average Case Analysis**

  * Calculates average running time over all inputs.
  * Requires knowledge of input distribution.
  * Example: Linear Search average assumes element equally likely anywhere or absent.
  * Rarely used because it is hard to predict inputs and frequencies.
* **Why Worst Case Mostly Used?**

  * Easier to compute than average case.
  * Provides useful upper bound for software guarantees.
* **Asymptotic Notation and Cases**

  * Some algorithms have same time for all cases (e.g., Merge Sort is always O(n log n)).
  * Others vary:
    * Quick Sort worst case: sorted input (O(n²))
    * Quick Sort best case: balanced splits (O(n log n))
    * Insertion Sort worst case: reverse sorted (O(n²))
    * Insertion Sort best case: already sorted (O(n))
