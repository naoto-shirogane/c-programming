/* 

Suppose that the function f has the following definition:

int f(int a, int b) { ... }

Which of the following statements are legal? (Assume that i has type int and x has type double.)

(a) i = f(83, 12); // legal
(b) x = f(83, 12); // legal
(c) i = f(3.15, 9.28); // legal, but loses precision since the arguments are converted to int type
(d) x = f(3.15, 9.28); // legal, but loses precision since the arguments are converted to int type
(e) f(83, 12); // legal

*/