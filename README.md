# J-Coder-Contest-2015
Questions and solutions from J-Coder contest 2015 by IIITM-K

----

# 1.
Analyze the figure and find the area of the shaded region

![http://s8.postimg.org/szj88i5qd/Question1.jpg](http://s8.postimg.org/szj88i5qd/Question1.jpg)

**Input:** Take X (in c.m) and Theta angle as the input to your program

**Constraints:** 1<=X<=100 and Theta angle can be 30, 45 or 60 only

**Output:** Area of the shaded region in centimeter square. Correct to 4 decimal places.

Sample Input:
```
5
45
```
Sample Output:
```
Area of the shaded region is: 8.9326 cm square.
```


# 2.
In IIITMK there are faculties and research scholars. List A contains names of the Researchers and list B contains names of the Faculties. Your job is to find out 
People who are doing research or they are faculties.
People who are doing research and they are faculties.
People who are doing research but they are not faculties.

A Name should be listed in individual lists exactly once. Since it is easy to maintain sorted lists, also sort all lists.

**Input:**
First line consist of number of test cases T Each test case consists of:
First line contains Names of the Research scholars (Space delimited strings)
Second line contains Names of the faculties (Space delimited strings)

**Output:**
For each test case print three lines.
People who are doing research or they are faculties.
People who are doing research and they are faculties.
People who are doing research but they are not faculties.

All three lists above should be printed in sorted order (ascending) and delimited by space. In case, if any of the list is empty, print "Empty List" on corresponding line. 

**Constraints:** 1<=T<=10 

Sample Input:
```
1
Ram Nandu Suresh Sai Abhilash Thomas
Ram Eltoy Manu Sai
```

Sample Output:
```
Abhilash Eltoy Manu Nandu Ram Sai Suresh Thomas
Ram Sai
Abhilash Nandu Suresh Thomas
```
