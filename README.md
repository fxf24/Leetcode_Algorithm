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
* [2017 source](./2017%20Grid%20Game.cpp)

## 2018. Check if Word Can Be Placed In Crossword

* You are given an `m x n` matrix `board`, representing the **current** state of a crossword puzzle. The crossword contains lowercase English letters (from solved words), `' '` to represent any **empty** cells, and `'#'` to represent any **blocked** cells.
* A word can be placed **horizontally** (left to right **or** right to left) or **vertically** (top to bottom **or** bottom to top) in the board if:
  * It does not occupy a cell containing the character `'#'`.
  * The cell each letter is placed in must either be `' '` (empty) or **match** the letter already on the `board`.
  * There must not be any empty cells `' '` or other lowercase letters **directly left or right** of the word if the word was placed **horizontally**.
  * There must not be any empty cells `' '` or other lowercase letters **directly above or below** the word if the word was placed **vertically**.
* Given a string `word`, return `true` *if* `word` *can be placed in* `board`*, or* `false` ***otherwise***.
* [2018 source](./)

## 2027. Minimum Moves to Convert String

* You are given a string `s` consisting of `n` characters which are either `'X'` or `'O'`.
* A **move** is defined as selecting **three** **consecutive characters** of `s` and converting them to `'O'`. Note that if a move is applied to the character `'O'`, it will stay the **same**.
* Return *the **minimum** number of moves required so that all the characters of* `s` *are converted to* `'O'`.
* [2027 source](./2027%20Minimum%20Moves%20to%20Convert%20String.cpp)

## 2028. Find Missing Observations

* You have observations of `n + m` **6-sided** dice rolls with each face numbered from `1` to `6`. `n` of the observations went missing, and you only have the observations of `m` rolls. Fortunately, you have also calculated the **average value** of the `n + m` rolls.
* You are given an integer array `rolls` of length `m` where `rolls[i]` is the value of the `ith` observation. You are also given the two integers `mean` and `n`.
* Return *an array of length* `n` *containing the missing observations such that the **average value** of the* `n + m` *rolls is **exactly*** `mean`. If there are multiple valid answers, return *any of them*. If no such array exists, return *an empty array*.
* The **average value** of a set of `k` numbers is the sum of the numbers divided by `k`.
* Note that `mean` is an integer, so the sum of the `n + m` rolls should be divisible by `n + m`.
* [2028 source](./2028%20Find%20Missing%20Observations.cpp)

## 2029. Stone Game IX

* Alice and Bob continue their games with stones. There is a row of n stones, and each stone has an associated value. You are given an integer array `stones`, where `stones[i]` is the **value** of the `ith` stone.
* Alice and Bob take turns, with **Alice** starting first. On each turn, the player may remove any stone from `stones`. The player who removes a stone **loses** if the **sum** of the values of **all removed stones** is divisible by `3`. Bob will win automatically if there are no remaining stones (even if it is Alice's turn).
* Assuming both players play **optimally**, return `true` *if Alice wins and* `false` *if Bob wins*.
* [2029 source](./2029%20Stone%20Game%20IX.cpp)

## 2042. Check if Numbers Are Ascending in a Sentence

* A sentence is a list of **tokens** separated by a **single** space with no leading or trailing spaces. Every token is either a **positive number** consisting of digits `0-9` with no leading zeros, or a **word** consisting of lowercase English letters.
  - For example, `"a puppy has 2 eyes 4 legs"` is a sentence with seven tokens: `"2"` and `"4"` are numbers and the other tokens such as `"puppy"` are words.
* Given a string `s` representing a sentence, you need to check if **all** the numbers in `s` are **strictly increasing** from left to right (i.e., other than the last number, **each** number is **strictly smaller** than the number on its **right** in `s`).
* Return `true` *if so, or* `false` *otherwise*.
* [2042 source](./)

