# Eight Queens

These are different ways to solve the 8 Queens Puzzle. 

The objective of 8 Queens is to place 8 queens on an 8 x 8 chess board such that no queen threatens another.
This means that queens cannot be placed in the same row, column, or diagonal. 

### Solutions:

#### 1. 8 Queens 2D Array (with go-to statements):
This solution uses a 2D array to represent the entire chess board and is filled in with 0s and 1s 
to represent an open space on the board (0) and a queen (1). The 2D array is initialized to all 0s and then 
the first queen is placed at [0][0].  
This solution uses go-to statements to move from one part to the next.  
The output is an 8 x 8 chess board with 0s and 1s.

#### 2. 8 Queens 1D Array (with go-to statements):
This solution uses a 1D array to hold the placement of the queens. The array's contents represents the row in which 
the queen is placed. For example, q[3] = 2, means that for column 3 on the chess board, the queen is placed in the second row.  
This solution uses go-to statements to move from one part to the next.  
The output is an 8 x 8 chess board with 0s and 1s.

#### 3. 8 Queens No go-to (1D Array):
This solution uses a 1D array as well, the same way it is used in the 1D array with go-to statements.  
However, this solution does not use go-to statements to function. This utilizes while loops to properly place the queens.  
The output is a list representing what row the queen is placed in the corresponding column. 

#### 4. 8 Queens Recursive:
This solution also uses the 1D array the same way as the other 1D solutions.  
However this solution uses recursion to place the queens.  
The output is a list representing what row the queen is placed in the corresponding column. 

### To complie and run:
You can use a C++ compiler such as g++ `"filename".cpp`  
Then run the executable file with `./a.out`
