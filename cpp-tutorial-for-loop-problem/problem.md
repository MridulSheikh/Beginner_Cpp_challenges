#### A for loop is a programming language statement which allows code to be repeatedly executed.

## The syntax is

```
for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
```

- expression_1 is used for intializing variables which are generally
  used for controlling the terminating flag for the loop.
- expression_2 is used to check for the terminating condition. If this
  evaluates to false, then the loop is terminated.
- expression_3 is generally used to update the flags/variables. A
  sample loop is

```
for(int i = 0; i < 10; i++) {
    ...
}
```

In this challenge, you will use a for loop to increment a variable through a range.

### Input Format:

You will be given two positive integers, and (), separated by a newline.

### Output Format:

#### For each integer in the inclusive interval [a,b] :

- If **_1 < n < 9_** , then print the English representation of it in lowercase. That
  is "one" for 1 , "two" for 2 , and so on.
- Else if **_n > 9_** and it is an even number, then print "even".
- Else if **_n > 9_** and it is an odd number, then print "odd".

### Sample Input

```
8
11
```

### Sample Output

```
eight
nine
even
odd
```

- **Reference: [Hacker Rank](https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem)**
