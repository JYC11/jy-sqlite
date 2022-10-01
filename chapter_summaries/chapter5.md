# chapter 5

I've learnt so far that what a db seems to do is being a really really good file i/o program.

Right now stuff is stored in binary onto a binary file in array form but I guess that is not really the case for actual databases. I do wonder what the actual sqlite source code will be like and if I can even follow along if I try to read it.

The database already stores input in blocks called Pages which is held in memory. When the db wants to persist it, it will just write to a file, close the file then free memory for Pages.

I am quite interested in getting into the binary tree portion of the tutorial because I've always wanted to see those damn ds&a being put to actual use.

And as usual, the whole one file for the entire program is throwing me off so much. It is so each to make a mistake and miss something out because you have to scroll between every function implementation. It is super annoying. I had to copy paste the code because I wasn't sure if I was doing it right.
