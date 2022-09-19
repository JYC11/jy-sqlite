# chapter 3

Big changes to the code where we implement an insert and a select.

The tutorial hardcodes a table which makes sense to reduce the scope but it does leave me wanting to know more how a table is actually created.

Perhaps I'll look at the sqlite source code.

The code is also getting big enough that I want to know how to organize a C project well but it doesn't seem as straightforward as using python. I also realized that my efforts to somewhat organize the code made it more difficult to understand so I just reorganized the code to follow the tutorial to the letter.

It kinda seems that most functions use variables passed by pointers in memory instead of by value which is kinda confusing but I think I'm slowly getting used to them. I'm guessing this is best practice? I wonder why.

The manual allocation and freeing of memory is pretty tedious and I do understand why people developed higher level languages. This kinda sucks.

# New Built in functions

memcpy()
full explanation link: https://man7.org/linux/man-pages/man3/memcpy.3.html
Copy n characters of bytes from memory from source to destination.
