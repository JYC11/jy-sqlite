# chapter 6

https://en.wikipedia.org/wiki/Cursor_(databases)

The tutorial covered cursors this time. It essentially seems to be a fancy pointer that allows easier traversal of values in the database. A pointer? if you will.

It points to where the data is in the actual file and apparently it can be used to:
select
update
delete
where the cursor is.

It is also a handy abstraction for the command execution functions. It now no longer needs to know how the file is deserialized or serialized.
