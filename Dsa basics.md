## Asymtomatic Analysis

Evaluates algorithm efficiency by growth rate w.r.t. input size, not exact time.

**Exammples:**

* Linear Search: O(n)
* Binary Search: O(log n)


Does Asymptomatic Analysis always works?

No -- its not perfect. It does not work when:

* **ignore constants**: can't compare algorithms with same growth rate but different constant factors.
* **Assumes large inputs** -- may pick slower algorithm if real-world inputs are small.
