## Merge Sort
Merge Sort is a kind of Divide and Conquer algorithm in computer programming.
It is one of the most popular sorting algorithms and a great way to develop confidence in building recursive algorithms

## Rule of Divide and Conquer
If we can break a single big problem into smaller sub-problems, solve the smaller sub-problems and combine their solutions to find the solution for the original big problem,
it becomes easier to solve the whole problem.

###### The concept of Divide and Conquer involves three steps:

+ Divide the problem into multiple small problems.
+ Conquer the subproblems by solving them. The idea is to break down the problem into atomic subproblems, where they are actually solved.
+ Combine the solutions of the subproblems to find the solution of the actual problem.
![](https://www.studytonight.com/data-structures/images/divide-conquer.png)

### _Example_
![](https://learnovercoffee.com/wp-content/uploads/2019/06/merge-sort.gif)

### Pictorial Rerpresentation
![](https://www.studytonight.com/data-structures/images/merge-sort-working.png)

###### In merge sort we follow the following steps:

+ We take a variable p and store the starting index of our array in this. And we take another variable r and store the last index of array in it.
+ Then we find the middle of the array using the formula (p + r)/2 and mark the middle index as q, and break the array into two subarrays, from p to q and from q + 1 to r index.
+ Then we divide these 2 subarrays again, just like we divided our main array and this continues.
+ Once we have divided the main array into subarrays with single elements, then we start merging the subarrays.


