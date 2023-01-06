#include <stdio.h>
#include "toaster_state.h"

static char *state_strings[] = {
   "Power Off", "Idle", "Bread Ins.", "Toasting", "Ejected", "Idle"
};
static toaster_state statemap[] = {
        POWER_OFF, 
	IDLE, 
	BREAD_INSERTED, 
	BREAD_TOASTING,
        BREAD_EJECTED,
	IDLE
};

void ok(int test_count, int state_offset, toaster_state t_state){
  if (statemap[state_offset] == t_state) {
     printf("ok %i State is %s\n", test_count, state_strings[state_offset]);
  } else {
     printf("not ok %i, expected state %s\n", test_count, state_strings[state_offset]);
  }
}

int main () {
    int count = 1;
    int r;
    int s;
    toaster* fsm;
    int toaster_runs = 6;
    toaster_state state;
    for (r=0; r < toaster_runs; ++r){
        fsm = new_toaster();
	for (s=0; s < (r + 1); ++s){
	    state = get_state(fsm);
	    ok(count, s, state);
	    toaster_transition(fsm, 1);
	    ++count;
	}
	toaster_transition(fsm, 0);
	state = get_state(fsm);
        ok(count, 0, state);
	++count;
    }
    printf("1..%i\n", count);
    return 0;
}


