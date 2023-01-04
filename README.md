COMPILING AND RUNNING TEST CASES:



To compile, enter:
gcc -c toaster_state.c -o toaster_state.a



To compile the test cases, enter:


gcc toaster_state.c test.c -o toaster_test



To run them, enter:


./toaster_test



The test suite uses the test anything protocol, functions are documented in the toaster.c file.



The FSM functions a toaster, there are 5 total states:



IDLE,


BREAD_INSERTED,


BREAD_TOASTING,


BREAD_EJECTED,


POWER_OFF



For the state and transition table, let the states be defined as:



IDLE: 000


BREAD_INSERTED: 001


BREAD_TOASTING: 010


BREAD_EJECTED: 011


POWER_OFF: 100



The state and transition table is as follows:



State | Advance | Output


------------------------


100   | 0       | 100


100   | 1       | 000


000   | 0       | 100


000   | 1       | 001


001   | 0       | 100

001   | 1       | 010


010   | 0       | 100


010   | 1       | 011


011   | 0       | 100


011   | 1       | 000