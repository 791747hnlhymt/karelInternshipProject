Background
You have been hired by Karel Inc, a new dog training company, to help build out a dog training simulation. In this simulator, we are trying to teach Karel to sit. As he sits, he accumulates treats.

Unfortunately, the previous intern didn’t get a chance to debug his code and he left it in a state of an infinite loop. Your job is to figure out how many treats Karel has accumulated before the program starts looping.

Information
You will complete this in two parts. In part one, you are going to create a struct that can store an instruction. The instruction should hold the following three values:

string inst 
int value
bool visited
The inst value will be one of three values:
acc - Accumulate the number of treats denoted by the value. Go on to the next line of code.
jmp - Jump forwards or backwards in the code by the number of lines in the value. Execute that line of code next.
sit - Sit for the number of seconds denoted by the value, then go on to the next line of code. (Note, you do not need to pause the code in this step, but go on to the next line.)

The value value will tell you how much of the step to do. Note that it will either have a plus or a minus. You can include the plus or minus when converting to an integer without a problem.

The visited variable is going to keep track of whether we have visited that instruction before. Once you hit an instruction that we have previously visited, you will know that we are in a loop. (Note: you will not visit every instruction.)

Part 1
For part 1, you are going to create the struct and test it out by creating at least tw
