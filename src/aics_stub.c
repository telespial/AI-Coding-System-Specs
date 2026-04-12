#include "aics_types.h"
int aics_is_recoverable_state(aics_state_t state) { return state == AICS_STATE_GOLDEN || state == AICS_STATE_FAILSAFE || state == AICS_STATE_RECOVERY; }
