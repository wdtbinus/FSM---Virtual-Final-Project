# FSM VIRTUAL FINAL PROJECT

**The chosen system for this project is a toaster, this will be what the diagrams and programs are primary centered around.**  
  
**Take a look below at the FSM diagram for a basic toaster system and take into account that the toaster states are defined as follows:**

Q1 - INITIAL STATE (NULL)

Q2 - IDLE STATE

Q3 - BREAD INSERTED STATE

Q4 - BREAD TOASTING STATE

Q5 - BREAD EJECTED STATE

![](file:///C:/Users/User/FSM---Virtual-Final-Project/Resources/Toaster%20FSM%20Diagram.jpg)

**In a similar diagram below, the binary assignments are as follows:**

Q1 - 100

Q2 - 000

Q3 - 001

Q4 - 010

Q5 - 011

![](file:///C:/Users/User/FSM---Virtual-Final-Project/Resources/Toaster%20FSM%20Diagram%20(Binary).jpg)

**Regardless of which state is current, there are always two possible outcomes, either proceeding to the next state or resort to the null state, outcomes depend on the input.**

**Below is a state and transition table, values within are determined from the states within the FSM model as well as all possible inputs and outputs. For the variables within the table, they are defined as follows:**

S2 - FIRST DIGIT OF CURRENT STATE

S1 - SECOND DIGIT OF CURRENT STATE

S0 - THIRD DIGIT OF CURRENT STATE

A - ADVANCE (INPUT)

O2 - FIRST DIGIT OF NEXT STATE (OUTPUT)

O1 - SECOND DIGIT OF NEXT STATE (OUTPUT)

O0 - THIRD DIGIT OF NEXT STATE (OUTPUT)

![](file:///C:/Users/User/FSM---Virtual-Final-Project/Resources/State%20&%20Transition%20Table.png)

**Through the state and transition table we have, we can construct a Karnaugh Map like below (within three parts):**
  
Within our first part, we would have a Karnaugh Map as below. The combinatorial boolean equation derived from this is: A'

![](file:///C:/Users/User/FSM---Virtual-Final-Project/Resources/Karnaugh%20Map%20(1).png)

Within our second part, we would have a Karnaugh Map as below. The combinatorial boolean equation derived from this is: S2'S1S0'A + S2'S1'S0A

![](file:///C:/Users/User/FSM---Virtual-Final-Project/Resources/Karnaugh%20Map%20(2).png)

Within our third part, we could have a Karnaugh Map as below. The combinatorial boolean equation for this is: S2'S1S0'

![](file:///C:/Users/User/FSM---Virtual-Final-Project/Resources/Karnaugh%20Map%20(3).jpg)

**For the C programs that simulates this FSM, here are some instructions to use them:**

To compile, enter:
*gcc -c toaster_state.c -o toaster_state.a*

To compile the test cases, enter:
*gcc toaster_state.c test.c -o toaster_test*

To run them, enter:
*./toaster_test*

**The test suite uses Test Anything Protocol, functions are documented in the toaster.c file.**