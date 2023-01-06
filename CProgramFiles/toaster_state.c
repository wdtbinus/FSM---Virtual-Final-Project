#include "toaster_state.h"
#include <stdlib.h>

/* TODO:  add more features to toaster */

struct toaster {
   toaster_state state;
};

/* toaster* new_toaster()
 * returns a pointer to a newly initialized toaster struct.
 * All fields are default.
 */
toaster* new_toaster() {
   toaster *new_toaster = malloc(sizeof(toaster));
   new_toaster->state = POWER_OFF;
   return new_toaster;
}

/* toaster_state get_state(toaster*)
 * Returns the current toaster state for monitoring.
 */
toaster_state get_state(toaster* fsm) {
   return fsm->state;
}

/*
 * void toaster_transition(toaster*, bool)
 * Changes the toaster state.  If the boolean value is true, then the state
 * advances to the next valid state.  If it is false, then it returns the
 * toaster to the powered off state, with a POWER_OFF toaster_state
 */
void toaster_transition(toaster *fsm, bool advance){
    if (advance) {

        switch (fsm->state) {
            case POWER_OFF :
	    case BREAD_EJECTED :
	       fsm->state = IDLE;
  	       break;
	    default :
	       fsm->state++;
	       break;
	}
    } else {
       fsm->state = POWER_OFF;
    }
}

void toaster_free(toaster* toasterptr) {
    free(toasterptr);
}
	    
