0x1E. C - Search Algorithms
This repository contains C programs that demonstrate various search algorithms. These algorithms are fundamental in computer science and are used to efficiently locate elements within data structures.

List of Algorithms
Linear Search (0-linear.c)

Implementation of the linear search algorithm, which sequentially checks each element of a list until a match is found or the list ends.
Binary Search (1-binary.c)

Implementation of the binary search algorithm, which efficiently locates a target value within a sorted array by repeatedly dividing the search interval in half.
Jump Search (100-jump.c)

Implementation of the jump search algorithm, which works on sorted arrays and jumps ahead by a fixed number of steps to find the interval where the search key might be, followed by a linear search.
Interpolation Search (102-interpolation.c)

Implementation of the interpolation search algorithm, an improved variant of binary search that works on uniformly distributed sorted arrays.
How to Use
Each C file in this repository is self-contained and can be compiled and run independently. Follow these steps to execute the search algorithms:

Clone the repository:

git clone https://github.com/yourusername/0x1E-C-Search-Algorithms.git
Navigate to the repository directory:

cd 0x1E-C-Search-Algorithms
Compile the desired C file (e.g., 0-linear.c):

gcc -Wall -Wextra -Werror -pedantic 0-linear.c -o linear_search
Run the compiled executable:

./linear_search
Follow similar steps for other algorithms by replacing the filename (0-linear.c) and the executable name (linear_search) accordingly.

Author
These programs were authored by [Your Name] as part of the Holberton School curriculum.
