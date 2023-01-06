/* As a header file, this includes everything other source files
 * may need to access.  This includes function prototypes, typedefs, and 
 * public enum values.
 */

/* enum toaster_state:
 *
 */

typedef enum toaster_state {
   IDLE = 0,
   BREAD_INSERTED = 1 ,
   BREAD_TOASTING = 2,
   BREAD_EJECTED  = 3,
   POWER_OFF = 4
} toaster_state;

/* typedef for toaster
 *
 * This is an opaque pointer for the toaster struct. Programs should not
 * need access to its internals.
 */

typedef struct toaster toaster;

#define bool char
#define true 1
#define false 0

toaster* new_toaster();

toaster_state get_state(toaster*);

void toaster_transition(toaster*, bool);

void toaster_free(toaster*);

