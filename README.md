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
