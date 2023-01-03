![image](https://user-images.githubusercontent.com/113889290/210403995-ddace3e4-d2cd-42e7-8d69-d39b7196bbc0.png)
# C - Sorting algorithms & Big O

## Sorting algorithms DESCRIPTION :
A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.


## Big O DESCRIPTION :
Big O notation, sometimes also called “asymptotic analysis”, primarily looks at how many operations a sorting algorithm takes to completely sort a very large collection of data. This is a measure of efficiency and is how you can directly compare one algorithm to another.
## PROTOTYPES :
`void print_array(const int *array, size_t size);`   
`void print_list(const listint_t *list);`  
`void bubble_sort(int *array, size_t size);`  
`void insertion_sort_list(listint_t **list);`  
`void selection_sort(int *array, size_t size);`  
`void quick_sort(int *array, size_t size);` 

## SORTING ALGORITHMS :

| Sort |  Descriptions                                                                |
| ------------------------- | ------------------------------------------------------------------ |
| [Bubble sort](https://www.geeksforgeeks.org/bubble-sort/?ref=lbp)  | Contains scripts of the Bubble sort |
| [Insertion sort](https://www.geeksforgeeks.org/insertion-sort/?ref=lbp) | Contains scripts of the Insertion sort |
| [Selection sort](https://www.geeksforgeeks.org/selection-sort/?ref=lbp) | Contains scripts of the Selection sort |
| [Quick sort](https://www.geeksforgeeks.org/quick-sort/) | Contains scripts of the Quick sort |

## COMPILATION :
You need to type for: 
- bubble sort: `$gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o "NameOfTheScriptFile"`.  
- insertion sort: `$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o "NameOfTheScriptFile"`. 
- selection sort: `$gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o "NameOfTheScriptFile"`file.  
- quick sort: `$gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o "NameOfTheScriptFile"`.

## EXECUTION :
You need to type `./NameOfTheScriptFile` to execute your script.


## PROJECTS FILES & SCRIPT :

| Sort Names  |      Files Names     | O | Scripts Names                                                                 |
| ----------- | ---------------------|---|------- 
|bubble sort |  0-bubble_sort.c | 0-O | bubble
| insertion sort | 1-insertion_sort_list.c| 1-O | insertion
| selection sort | 2-selection_sort.c | 2-O | selection
| quick sort | 3-quick_sort.c | 3-O | quick

### Others :
| Files Names     | Descriptions                                                                 |
| ----------- | ---------------------
|sort.h| Contains the libraries and the prototypes of our functions
|print_array.c | Prints an array of integers
|print_list.c | Prints a list of integers
|README.md| Contains all the informations of the Sorting algorithms & Big O project



### AUTHORS :

👩 Vanessa TESSIER | 👦 Mohamad AL ANNAN | 👦 Hugo CHILEMME |

### SCHOOL :

Holberton School - TOULOUSE
C19 Cohort
Janv. 2022
