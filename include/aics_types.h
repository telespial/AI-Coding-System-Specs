#ifndef AICS_TYPES_H
#define AICS_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    AICS_ACTION_CREATE = 0,
    AICS_ACTION_MODIFY = 1,
    AICS_ACTION_DELETE = 2
} aics_action_t;

typedef enum
{
    AICS_VALIDATION_UNKNOWN = 0,
    AICS_VALIDATION_PASS = 1,
    AICS_VALIDATION_FAIL = 2
} aics_validation_status_t;

typedef enum
{
    AICS_STATE_GOLDEN = 0,
    AICS_STATE_WORKING = 1,
    AICS_STATE_CANDIDATE = 2,
    AICS_STATE_FAILSAFE = 3,
    AICS_STATE_RECOVERY = 4
} aics_state_t;

typedef struct
{
    const char* target_file;
    aics_action_t action;
    const char* description;
} aics_change_request_t;

typedef struct
{
    aics_validation_status_t compile_status;
    aics_validation_status_t lint_status;
    aics_validation_status_t test_status;
    const char* summary;
} aics_validation_report_t;

#ifdef __cplusplus
}
#endif

#endif
