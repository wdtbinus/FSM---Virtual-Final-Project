# Toaster System FSM Project

**The chosen system for this project is a toaster, this will be what the diagrams and programs are based on.**

**Take a look at the FSM diagram for a basic toaster system below and take into consideration that the toaster states are defined as follows:**

- Q1 - INITIAL STATE (NULL)
- Q2 - IDLE STATE
- Q3 - BREAD INSERTED STATE
- Q4 - BREAD TOASTING STATE
- Q5 - BREAD EJECTED STATE

![Toaster FSM Diagram](https://github.com/wdtbinus/FSM---Virtual-Final-Project/blob/main/Resources/Toaster%20FSM%20Diagram.jpg?raw=true)

**In a similar diagram below, the binary assignments are as follows:**

- 100 - Q1
- 000 - Q2
- 001 - Q3
- 010 - Q4
- 011 - Q5

![Toaster FSM Diagram (Binary)](https://github.com/wdtbinus/FSM---Virtual-Final-Project/blob/main/Resources/Toaster%20FSM%20Diagram%20(Binary).jpg?raw=true)

**Regardless of which state is current, there are always two possible outcomes, either proceeding to the next state or resorting to the null state, the outcomes depend on the inputs (which are either 1s and 0s).**

**Below is a state and transition table, values within are determined from the states within the FSM model as well as all possible inputs and outputs. For some of the variables within the table, here is some context:**

- S2 - FIRST DIGIT OF CURRENT STATE
- S1 - SECOND DIGIT OF CURRENT STATE
- S0 - THIRD DIGIT OF CURRENT STATE
- A - ADVANCE (INPUT)
- O2 - FIRST DIGIT OF NEXT STATE (OUTPUT)
- O1 - SECOND DIGIT OF NEXT STATE (OUTPUT)
- O0 - THIRD DIGIT OF NEXT STATE (OUTPUT)

![State & Transition Table](https://github.com/wdtbinus/FSM---Virtual-Final-Project/blob/main/Resources/State%20&%20Transition%20Table.png?raw=true)

**Through the state and transition table, we can construct a Karnaugh Map like below (within 3 parts):**

Within our first part, we would have a Karnaugh Map as below. The combinatorial boolean equation for this is: A'

![Karnaugh Map 1st Part](https://github.com/wdtbinus/FSM---Virtual-Final-Project/blob/main/Resources/Karnaugh%20Map%20(1).png?raw=true)

Within our second part, we would have a Karnaugh Map as below. The combinatorial boolean equation for this is: S2'S1S0'A + S2'S1'S0A

![Karnaugh Map 2nd Part](https://github.com/wdtbinus/FSM---Virtual-Final-Project/blob/main/Resources/Karnaugh%20Map%20(2).png?raw=true)

Within our third part, we would have a Karnaugh Map as below. The combinatorial boolean equation for this is: S2'S1S0'

![Karnaugh Map 3rd Part](https://github.com/wdtbinus/FSM---Virtual-Final-Project/blob/main/Resources/Karnaugh%20Map%20(3).jpg?raw=true)

**For the C programs that simulate this FSM, here are some instructions to use them:**

To compile, enter:
*gcc -c toaster_state.c -o toaster_state.a*

To compile test cases, enter:
*gcc toaster_state.c test.c -o toaster_test*

To run them, enter:
*./toaster_test*

**The test suite uses Test Anything Protocol, functions are documented in the toaster.c file.**