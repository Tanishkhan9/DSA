1. Vector
Definition

A dynamic array that can grow or shrink automatically. Elements are stored in contiguous memory.

Common Functions
push_back()
pop_back()
size()
empty()
front()
back()
at()
clear()
insert()
erase()
begin()
end()
rbegin()
rend()
swap()

2. Pair
Definition

Stores exactly two values which may be of different data types.

Common Members
first
second
make_pair()

3. Tuple
Definition

Stores multiple values of different data types together.

Common Functions
get<index>()
make_tuple()
tuple_size<>
tie()

4. Deque
Definition

Double Ended Queue that allows insertion and deletion from both ends.

Common Functions
push_back()
push_front()
pop_back()
pop_front()
front()
back()
at()
size()
empty()
clear()
begin()
end()
insert()
erase()

5. List
Definition

Doubly Linked List allowing efficient insertion and deletion.

Common Functions
push_back()
push_front()
pop_back()
pop_front()
front()
back()
remove()
reverse()
sort()
unique()
merge()
splice()
size()
empty()
clear()

6. Forward List
Definition

Singly Linked List with less memory usage than list.

Common Functions
push_front()
pop_front()
insert_after()
erase_after()
remove()
reverse()
sort()
merge()
clear()
empty()

7. Stack
Definition

LIFO (Last In First Out) data structure.

Common Functions
push()
pop()
top()
size()
empty()
swap()

8. Queue
Definition

FIFO (First In First Out) data structure.

Common Functions
push()
pop()
front()
back()
size()
empty()
swap()

9. Priority Queue
Definition

Heap-based container where highest (or lowest) priority element remains on top.

Common Functions
push()
pop()
top()
size()
empty()
swap()

10. Set
Definition

Stores unique elements in sorted order.

Common Functions
insert()
emplace()
erase()
find()
count()
lower_bound()
upper_bound()
size()
empty()
clear()
begin()
end()
rbegin()
rend()
swap()

11. Multiset
Definition

Stores duplicate elements in sorted order.

Common Functions
insert()
emplace()
erase()
find()
count()
equal_range()
lower_bound()
upper_bound()
size()
empty()
clear()
begin()
end()
rbegin()
rend()
swap()

12. Unordered Set
Definition

Stores unique elements using Hash Table. No ordering.

Common Functions
insert()
emplace()
erase()
find()
count()
size()
empty()
clear()
begin()
end()
bucket_count()
load_factor()
rehash()

13. Unordered Multiset
Definition

Stores duplicate elements using Hash Table. No ordering.

Common Functions
insert()
emplace()
erase()
find()
count()
equal_range()
size()
empty()
clear()
begin()
end()
rehash()

14. Map
Definition

Stores key-value pairs with unique keys in sorted order.

Common Functions
insert()
emplace()
find()
count()
erase()
lower_bound()
upper_bound()
at()
size()
empty()
clear()
begin()
end()
rbegin()
rend()
operator[]

15. Multimap
Definition

Stores key-value pairs with duplicate keys allowed.

Common Functions
insert()
emplace()
find()
count()
erase()
equal_range()
lower_bound()
upper_bound()
size()
empty()
clear()
begin()
end()
rbegin()
rend()

16. Unordered Map
Definition

Stores key-value pairs using Hash Table. Unique keys.

Common Functions
insert()
emplace()
find()
count()
erase()
at()
size()
empty()
clear()
begin()
end()
operator[]
bucket_count()
load_factor()
rehash()

17. Unordered Multimap
Definition

Stores key-value pairs using Hash Table. Duplicate keys allowed.

Common Functions
insert()
emplace()
find()
count()
erase()
equal_range()
size()
empty()
clear()
begin()
end()
bucket_count()
load_factor()
rehash()

Important STL Algorithms (#include <algorithm>)
Sorting & Searching
sort()
stable_sort()
binary_search()
find()
find_if()
count()
count_if()
lower_bound()
upper_bound()
equal_range()
Min / Max
max()
min()
max_element()
min_element()
Rearrangement
reverse()
rotate()
swap()
swap_ranges()
next_permutation()
prev_permutation()
Numeric
accumulate()
partial_sum()
iota()
Useful Utility Functions
distance()
advance()
next()
prev()



# STL Time Complexity Cheat Sheet

This cheat sheet covers the most commonly used STL containers and algorithms along with their average time complexities.

---

# Vector

Dynamic Array

| Function | Complexity |
|-----------|------------|
| push_back() | O(1) |
| pop_back() | O(1) |
| front() | O(1) |
| back() | O(1) |
| size() | O(1) |
| empty() | O(1) |
| at() | O(1) |
| operator[] | O(1) |
| insert() | O(n) |
| erase() | O(n) |
| clear() | O(n) |

---

# Deque

Double Ended Queue

| Function | Complexity |
|-----------|------------|
| push_back() | O(1) |
| push_front() | O(1) |
| pop_back() | O(1) |
| pop_front() | O(1) |
| front() | O(1) |
| back() | O(1) |
| operator[] | O(1) |
| insert() | O(n) |
| erase() | O(n) |

---

# List

Doubly Linked List

| Function | Complexity |
|-----------|------------|
| push_back() | O(1) |
| push_front() | O(1) |
| pop_back() | O(1) |
| pop_front() | O(1) |
| insert() | O(1) |
| erase() | O(1) |
| remove() | O(n) |
| sort() | O(n log n) |
| reverse() | O(n) |

---

# Stack

LIFO (Last In First Out)

| Function | Complexity |
|-----------|------------|
| push() | O(1) |
| pop() | O(1) |
| top() | O(1) |
| size() | O(1) |
| empty() | O(1) |

---

# Queue

FIFO (First In First Out)

| Function | Complexity |
|-----------|------------|
| push() | O(1) |
| pop() | O(1) |
| front() | O(1) |
| back() | O(1) |
| size() | O(1) |
| empty() | O(1) |

---

# Priority Queue

Heap Based Container

| Function | Complexity |
|-----------|------------|
| push() | O(log n) |
| pop() | O(log n) |
| top() | O(1) |
| size() | O(1) |
| empty() | O(1) |

---

# Set

Unique Elements + Sorted

| Function | Complexity |
|-----------|------------|
| insert() | O(log n) |
| erase() | O(log n) |
| find() | O(log n) |
| count() | O(log n) |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |
| size() | O(1) |

---

# Multiset

Duplicate Elements Allowed + Sorted

| Function | Complexity |
|-----------|------------|
| insert() | O(log n) |
| erase() | O(log n) |
| find() | O(log n) |
| count() | O(log n + k) |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |
| equal_range() | O(log n) |

(k = frequency of element)

---

# Unordered Set

Hash Table + Unique Elements

| Function | Complexity |
|-----------|------------|
| insert() | O(1) Average |
| erase() | O(1) Average |
| find() | O(1) Average |
| count() | O(1) Average |

Worst Case: O(n)

---

# Unordered Multiset

Hash Table + Duplicate Elements

| Function | Complexity |
|-----------|------------|
| insert() | O(1) Average |
| erase() | O(1) Average |
| find() | O(1) Average |
| count() | O(k) |

Worst Case: O(n)

---

# Map

Key-Value Pair + Sorted Keys

| Function | Complexity |
|-----------|------------|
| insert() | O(log n) |
| erase() | O(log n) |
| find() | O(log n) |
| count() | O(log n) |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |
| operator[] | O(log n) |

---

# Multimap

Duplicate Keys Allowed + Sorted

| Function | Complexity |
|-----------|------------|
| insert() | O(log n) |
| erase() | O(log n) |
| find() | O(log n) |
| count() | O(log n + k) |
| equal_range() | O(log n) |

---

# Unordered Map

Hash Table + Unique Keys

| Function | Complexity |
|-----------|------------|
| insert() | O(1) Average |
| erase() | O(1) Average |
| find() | O(1) Average |
| count() | O(1) Average |
| operator[] | O(1) Average |

Worst Case: O(n)

---

# Unordered Multimap

Hash Table + Duplicate Keys

| Function | Complexity |
|-----------|------------|
| insert() | O(1) Average |
| erase() | O(1) Average |
| find() | O(1) Average |
| count() | O(k) |

Worst Case: O(n)

---

# Pair

Stores Two Values

| Operation | Complexity |
|------------|------------|
| first | O(1) |
| second | O(1) |
| make_pair() | O(1) |

---

# Tuple

Stores Multiple Values

| Operation | Complexity |
|------------|------------|
| get<index>() | O(1) |
| make_tuple() | O(1) |
| tie() | O(1) |

---

# Common STL Algorithms

## Sorting

| Function | Complexity |
|-----------|------------|
| sort() | O(n log n) |
| stable_sort() | O(n log n) |
| reverse() | O(n) |

---

## Searching

| Function | Complexity |
|-----------|------------|
| find() | O(n) |
| count() | O(n) |
| binary_search() | O(log n) |
| lower_bound() | O(log n) |
| upper_bound() | O(log n) |

---

## Min / Max

| Function | Complexity |
|-----------|------------|
| max_element() | O(n) |
| min_element() | O(n) |
| max() | O(1) |
| min() | O(1) |

---

## Permutations

| Function | Complexity |
|-----------|------------|
| next_permutation() | O(n) |
| prev_permutation() | O(n) |

---

## Numeric Algorithms

| Function | Complexity |
|-----------|------------|
| accumulate() | O(n) |
| partial_sum() | O(n) |
| iota() | O(n) |

---

# Internal Data Structures

| Container | Internal Data Structure |
|------------|------------------------|
| vector | Dynamic Array |
| deque | Dynamic Array Blocks |
| list | Doubly Linked List |
| stack | Deque (default) |
| queue | Deque (default) |
| priority_queue | Heap |
| set | Red-Black Tree |
| multiset | Red-Black Tree |
| map | Red-Black Tree |
| multimap | Red-Black Tree |
| unordered_set | Hash Table |
| unordered_multiset | Hash Table |
| unordered_map | Hash Table |
| unordered_multimap | Hash Table |

---

# Quick Memory Trick

set               -> Unique + Sorted

multiset          -> Duplicate + Sorted

unordered_set     -> Unique + Unsorted

unordered_multiset-> Duplicate + Unsorted

map               -> Unique Keys + Sorted

multimap          -> Duplicate Keys + Sorted

unordered_map     -> Unique Keys + Unsorted

unordered_multimap-> Duplicate Keys + Unsorted
