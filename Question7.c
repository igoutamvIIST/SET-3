/*
One person hands over the list of digits to Mr. String, But Mr. String understands only strings. Within strings also he understands only vowels. Mr. String needs your help to find the total
number of pairs which add up to a certain digit D.

The rules to calculate digit D are as follow :- 
Take all digits and convert them into their textual representation.
Next, sum up the number of vowels i.e. {a, e, i, o, u} from all textual representations.
This sum is digit D

Now, once digit D is known, find out all unordered pairs of numbers in input whose sum is equal
to D. Refer example section for better understanding.

Constraints
1 <= N <= 100
1 <= value of each element in second line of input <= 100
Number 100, if and when it appears in input should be converted to textual representation as
hundred and not as one hundred. Hence number of vowels in number 100 should be 2 and not 4

Input
First line contains an integer N which represents number of elements to be processed as input
Second line contains N numbers separated by space

Output
Lower case representation of textual representation of number of pairs in input that sum up to
digit D
Note: – (If the count exceeds 100 print “greater 100”)

Examples:
Input : 5
1 2 3 4 5
Output : one

Input : 3
7 4 2
Output : zero
*/
