# Leetcode Algorithm

## 2000. Reverse Prefix of Word

* Given a **0-indexed** string `word` and a character `ch`, **reverse** the segment of `word` that starts at index `0` and ends at the index of the **first occurrence** of `ch` (**inclusive**). If the character `ch` does not exist in `word`, do nothing.
* [2000 source](./2000%20Reverse%20Prefix%20of%20Word.cpp)

## 2001. Number of Pairs of Interchangeable Rectangles

* You are given `n` rectangles represented by a **0-indexed** 2D integer array `rectangles`, where `rectangles[i] = [widthi, heighti]` denotes the width and height of the `ith` rectangle.
* Two rectangles `i` and `j` (`i < j`) are considered **interchangeable** if they have the **same** width-to-height ratio. More formally, two rectangles are **interchangeable** if `widthi/heighti == widthj/heightj` (using decimal division, not integer division).
* Return *the **number** of pairs of **interchangeable** rectangles in* `rectangles`.
* [2001 source](./2001%20Number%20of%20Pairs%20of%20Interchangeable%20Rectangles.cpp)

## 2002. Maximum Product of the Length of Two Palindromic Subsequences

* Given a string `s`, find two **disjoint palindromic subsequences** of `s` such that the **product** of their lengths is **maximized**. The two subsequences are **disjoint** if they do not both pick a character at the same index.
* Return *the **maximum** possible **product** of the lengths of the two palindromic subsequences*.
* A **subsequence** is a string that can be derived from another string by deleting some or no characters without changing the order of the remaining characters. A string is **palindromic** if it reads the same forward and backward.
* [2002 source](./)

## 2011. Final Value of Variable After Performing Operations

* There is a programming language with only **four** operations and **one** variable `X`:
  - `++X` and `X++` **increments** the value of the variable `X` by `1`.
  - `--X` and `X--` **decrements** the value of the variable `X` by `1`.
* Initially, the value of `X` is `0`.
* Given an array of strings `operations` containing a list of operations, return *the **final** value of* `X` *after performing all the operations*.
* [2011 source](./2011%20Final%20Value%20of%20Variable%20After%20Performing%20Operations.cpp)

## 2012. Sum of Beauty in the Array

* You are given a **0-indexed** integer array `nums`. For each index `i` (`1 <= i <= nums.length - 2`) the **beauty** of `nums[i]` equals:
  - `2`, if `nums[j] < nums[i] < nums[k]`, for **all** `0 <= j < i` and for **all** `i < k <= nums.length - 1`.
  - `1`, if `nums[i - 1] < nums[i] < nums[i + 1]`, and the previous condition is not satisfied.
  - `0`, if none of the previous conditions holds.
* Return *the **sum of beauty** of all* `nums[i]` *where* `1 <= i <= nums.length - 2`.
* [2012 source](./)

## 2013. Detect Squares

* You are given a stream of points on the X-Y plane. Design an algorithm that:
  * **Adds** new points from the stream into a data structure. **Duplicate** points are allowed and should be treated as different points.
  * Given a query point, **counts** the number of ways to choose three points from the data structure such that the three points and the query point form an **axis-aligned square** with **positive area**.

* An **axis-aligned square** is a square whose edges are all the same length and are either parallel or perpendicular to the x-axis and y-axis.
* Implement the `DetectSquares` class:
  * `DetectSquares()` Initializes the object with an empty data structure.
  * `void add(int[] point)` Adds a new point `point = [x, y]` to the data structure.
  * `int count(int[] point)` Counts the number of ways to form **axis-aligned squares** with point `point = [x, y]` as described above.
* [2013 source](./)

## 2016. Maximum Difference Between Increasing Elements

* Given a **0-indexed** integer array `nums` of size `n`, find the **maximum difference** between `nums[i]` and `nums[j]` (i.e., `nums[j] - nums[i]`), such that `0 <= i < j < n` and `nums[i] < nums[j]`.

* Return *the **maximum difference**.* If no such `i` and `j` exists, return `-1`.
* [2016 source](./2016%20Maximum%20Difference%20Between%20Increasing%20Elements.cpp)

## 2017. Grid Game

* You are given a **0-indexed** 2D array `grid` of size `2 x n`, where `grid[r][c]` represents the number of points at position `(r, c)` on the matrix. Two robots are playing a game on this matrix.
* Both robots initially start at `(0, 0)` and want to reach `(1, n-1)`. Each robot may only move to the **right** (`(r, c)` to `(r, c + 1)`) or **down** (`(r, c)` to `(r + 1, c)`).
* At the start of the game, the **first** robot moves from `(0, 0)` to `(1, n-1)`, collecting all the points from the cells on its path. For all cells `(r, c)` traversed on the path, `grid[r][c]` is set to `0`. Then, the **second** robot moves from `(0, 0)` to `(1, n-1)`, collecting the points on its path. Note that their paths may intersect with one another.
* The **first** robot wants to **minimize** the number of points collected by the **second** robot. In contrast, the **second** robot wants to **maximize** the number of points it collects. If both robots play **optimally**, return *the **number of points** collected by the **second** robot.*

* 
