#include "aics_config.h"
#include "aics_types.h"

/*
 * AICS is primarily a specification repository.
 * This source file is only a minimal placeholder to match
 * the repository layout style used by sibling spec repositories.
 */

const char* aics_get_name(void)
{
    return AICS_NAME;
}

int aics_is_recoverable_state(aics_state_t state)
{
    return (state == AICS_STATE_GOLDEN ||
            state == AICS_STATE_FAILSAFE ||
            state == AICS_STATE_RECOVERY);
}
