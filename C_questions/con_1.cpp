

In a file contains the line "I am a boy\r\n" then on reading this line into the array str using fgets().
 What will str contain?
1. "I am a boy\r\n\0"
2. "I am a boy\r\0"
3. "I am a boy\n\0"
4. "I am a boy"






// Explanation:

// Let us know the difference between the \r and \n.

// \r - is moves the cursor to the left-most position of the CURRENT line.

// \n - is moves the cursor to the left-most position of the NEXT line.

// Example:

// 1. printf("India\rBIX");

// Output: BIXia

// 2. printf("India\nBIX");

// Output:

// India
// BIX