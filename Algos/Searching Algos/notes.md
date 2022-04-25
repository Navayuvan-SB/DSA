# Searching Algorithms

These are the algorithms which we use to search for an element in any data structure.

Based on the way of search operations, this algorithm is divided into two
- Sequential Search
    - In this type, we'll search for the element one by one,from one end to another end and check if we got the element or not. 
    - This approach is easy and better for small use cases, but this is more time consuming and memory eating. Consider we have to search through 1 lakh entries, it would cost a lot of time to just get what we want.
    - An example of this type is **Linear Search**.
- Interval Search
    - Unlike Sequential Search, this type of algos work on sorted structure. This type of algos are more efficient than sequential algos. 
    - It'll divide the structure in half and its half and its half untill we find the element.
    - The best example of this type is **Binary Search**.