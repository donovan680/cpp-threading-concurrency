# cpp-threading-concurrency
Threads will run concurrently if they're on the same processor. But in parallel if they're on different processors!

Pre-Requisites : 

How as a good C++  cross  compiler. 

How variables, loops, conditionals, etc. work (Basic coding fundamentals will help a lot!)

Linux (Terminal/Console proficiency) (We're going to need to compile our stuff)

Gone through the all preceding parts of the tutorial

Some familiarity with threading will help

Each thread has its own call stack, but all threads share the heap.

You can find the maximum number of active threads that you can start. If your number of active threads exceeds this number you won't really get more performance out of it, so take note!

#include <thread>
unsigned int c = std::thread::hardware_concurrency();

There are several ways to create a thread:

Using a function pointer
Using a lambda function
Using a functor
