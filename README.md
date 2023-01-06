# FSM Virtual Final Project
**The chosen system for this project is a toaster, this will be what the diagrams and programs are based on.**

**Take a look at the FSM diagram for a basic toaster system below and take into consideration that the toaster states are defined as follows:**

Q1 - INITIAL STATE (NULL STATE)

Q2 - IDLE STATE

Q3 - BREAD INSERTED STATE

Q4 - BREAD TOASTING STATE

Q5 - BREAD EJECTED STATE

![](file:///C:/Users/User/Downloads/Toaster%20FSM%20Diagram.jpg)

**In a similar diagram below, the binary assignments are as follows:**

100 - Q1

000 - Q2

001 - Q3

010 - Q4

011 - Q5

![](../../../Downloads/Toaster%20FSM%20Diagram%20v2.jpg)

**Regardless of whichever state is current, there are always two possible outcomes (proceed to the next state or resort to the null state, the outcomes depend on the input).**

**Below is a state and transition table, values within are determined from the states within the FSM model as well as all possible inputs and outputs. For some of the variables within the table, here is some context:**

S2 - FIRST DIGIT OF CURRENT STATE

S1 - SECOND DIGIT OF CURRENT STATE

S0 - THIRD DIGIT OF CURRENT STATE

A - ADVANCE (INPUT)

O2 - FIRST DIGIT OF NEXT STATE (OUTPUT STATE)

O1 - SECOND DIGIT OF NEXT STATE (OUTPUT STATE)

O0 - THIRD DIGIT OF NEXT STATE (OUTPUT STATE)

![](../../../Downloads/table-chart(1).png)

**Through the state and transition table, we can construct a Karnaugh Map like below (within 3 parts):**

Within our first part, we would have a Karnaugh Map as below. The combinatorial boolean equation for this is: A'

![](../../../Downloads/table-chart(6).png)
  
Within our second part, we would have a Karnaugh Map as below. The combinatorial boolean equation for this is: S2'S1S0'A + S2'S1'S0A

![](../../../Downloads/table-chart(7).png)

Within our third part, we would have a Karnaugh Map as below. The combinatorial boolean equation for this is: S2'S1S0'

![](../../../Downloads/table-chart(5).jpg)

**For the C programs that simulate the FSM, here are some instructions:**

To compile, enter:

*gcc -c toaster_state.c -o toaster_state.a*

To compile the test cases, enter:

*gcc toaster_state.c test.c -o toaster_test*

To run them, enter:

*./toaster_test*

**The test suite uses Test Anything Protocol, functions are documented in the toaster.c file.**