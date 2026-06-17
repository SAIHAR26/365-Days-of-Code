# Day 2 - Armstrong Number

## Problem Statement

Check whether a given number is an Armstrong Number.

An Armstrong Number is a number that is equal to the sum of the cubes of its digits.

Example:
153 = 1³ + 5³ + 3³ = 153

## Languages Used

* C
* Java
* Python

## Approach

1. Store the original number.
2. Extract each digit using the modulus (%) operator.
3. Find the cube of each digit and add it to a sum.
4. Remove the last digit using integer division.
5. Compare the final sum with the original number.
6. If both are equal, the number is an Armstrong Number.

## Concepts Learned

* Loops (while)
* Modulus operator (%)
* Integer division
* Number manipulation
* Variables and conditionals

## Time Complexity

O(log n)

## Space Complexity

O(1)

## Sample Input

153

## Sample Output

153 is an Armstrong Number

## Difficulty

Easy

## Status

Completed ✅

## What I Learned

* How to extract digits from a number.
* How to calculate Armstrong Numbers without using built-in power functions.
* Syntax differences between C, Java, and Python.
