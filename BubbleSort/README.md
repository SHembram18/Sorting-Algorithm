## Bubble sort Algorithm
![](https://upload.wikimedia.org/wikipedia/commons/thumb/8/83/Bubblesort-edited-color.svg/220px-Bubblesort-edited-color.svg.png)
[Bubble Sort](https://github.com/HembramBeta777/Sorting-Algorithm/tree/master/BubbleSort/bubble_sort.c/) is a simple algorithm which is used to sort a given set of n elements provided in form of an array with n number of elements.
Bubble Sort compares all the element one by one and sort them based on their values.

If the given array has to be sorted in ascending order, then bubble sort will start by comparing the first element of the array with the
second element,if the first element is greater than the second element, it will swap both the elements,
and then move on to compare the second and the third element, and so on.

If we have total n elements, then we need to repeat this process for n-1 times

Sorting takes place by stepping through all the elements one-by-one and comparing it with the adjacent element 
and swapping them if required

## Bubble sort Example
![](https://reactgo.com/acb6082891086b779854ec1fc0cb420b/bubble-sort-visualization.gif)

## Pictorial Representation
![](https://www.w3resource.com/w3r_images/bubble-short.png)

## Time complexity
|**Bubble sort performance**  | **Comparison**| **Swaps**|
| --------------------------  |-------------- |----------- 
|_Worst-case_                 | _O(n^2)_      | _O(n^2)_
|_Best case_                  | _O(n)_        | _O(1)_
|_Average case_               | _O(n^2)_      | _O(n^2)_
|_Worst-case space complexity_| _O(n)total_   | _O(1)auxiliary_

### Code
[bubble_sort.c](https://github.com/HembramBeta777/Sorting-Algorithm/blob/master/BubbleSort/bubble_sort.c)

### Source

[Wikipedia](https://en.wikipedia.org/wiki/Bubble_sort)

[Studytonight](https://www.studytonight.com/data-structures/bubble-sort)
