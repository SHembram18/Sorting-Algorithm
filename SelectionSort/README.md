## Selection Sort

_Selection sort is conceptually the most simplest sorting algorithm_. _This algorithm will first find the **smallest** element in the array and swap it with the element in the **first** position, then it will find the **second smallest** element and swap it with the element in the **second** position, and it will keep on doing this until the entire array is sorted_.

_It is called selection sort because it repeatedly **selects** the next-smallest element and swaps it into the right place_.

## Selection sort animation.
![](https://gifimage.net/wp-content/uploads/2018/05/selection-sort-gif-12.gif)

## How Selection Sorts Works?
Following are the steps involved in selection sort(for sorting a given array in ascending order):

+ Starting from the first element, we search the smallest element in the array, and replace it with the element in the first position.
+ We then move on to the second position, and look for smallest element present in the subarray, starting from index 1, till the last index.
+ We replace the element at the **_second_** position in the original array, or we can say at the first position in the subarray, with the second smallest element.
 This is repeated, until the array is completely sorted.
Let's consider an array with values {3, 6, 1, 8, 4, 5}

Below, we have a pictorial representation of how selection sort will sort the given array.
![](https://www.studytonight.com/data-structures/images/simple-selection-sort.png)
## Code

## Source
- [Wikipedia](https://en.wikipedia.org/wiki/Selection_sort)
- [Studytonight](https://www.studytonight.com/data-structures/selection-sorting)
