/*
Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.

The following rules define a valid string:
Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "(())"
Output: true

Constraints:
1 <= s.length <= 104
s consists of parentheses only '()'.
*/

#include <stdio.h>
int main() {
    char s[] = "(*))";
    int open = 0;
    int star = 0;
    int n = sizeof(s) / sizeof(s[0]) - 1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            open++;
        } else if (s[i] == ')') {
            if (open > 0) {
                open--;
            } else if (star > 0) {
                star--;
            } else {
                printf("Output: false\n");
                return 0;
            }
        } else if (s[i] == '*') {
            star++;
        }
    }

    if (open <= star) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}
