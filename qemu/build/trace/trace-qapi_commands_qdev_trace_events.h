/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_QDEV_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_QDEV_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_DEVICE_LIST_PROPERTIES_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_DEVICE_LIST_PROPERTIES_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_DEVICE_DEL_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_DEVICE_DEL_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_DEVICE_SYNC_CONFIG_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_DEVICE_SYNC_CONFIG_EVENT;
extern uint16_t _TRACE_QMP_ENTER_DEVICE_LIST_PROPERTIES_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_DEVICE_LIST_PROPERTIES_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_DEVICE_DEL_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_DEVICE_DEL_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_DEVICE_SYNC_CONFIG_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_DEVICE_SYNC_CONFIG_DSTATE;
#define TRACE_QMP_ENTER_DEVICE_LIST_PROPERTIES_ENABLED 1
#define TRACE_QMP_EXIT_DEVICE_LIST_PROPERTIES_ENABLED 1
#define TRACE_QMP_ENTER_DEVICE_DEL_ENABLED 1
#define TRACE_QMP_EXIT_DEVICE_DEL_ENABLED 1
#define TRACE_QMP_ENTER_DEVICE_SYNC_CONFIG_ENABLED 1
#define TRACE_QMP_EXIT_DEVICE_SYNC_CONFIG_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_DEVICE_LIST_PROPERTIES_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_DEVICE_LIST_PROPERTIES) || \
    false)

static inline void _nocheck__trace_qmp_enter_device_list_properties(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_DEVICE_LIST_PROPERTIES) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_device_list_properties " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 46 "trace/trace-qapi_commands_qdev_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("qmp_enter_device_list_properties " "%s" "\n", json);
#line 50 "trace/trace-qapi_commands_qdev_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_device_list_properties(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_device_list_properties(json);
    }
}

#define TRACE_QMP_EXIT_DEVICE_LIST_PROPERTIES_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_DEVICE_LIST_PROPERTIES) || \
    false)

static inline void _nocheck__trace_qmp_exit_device_list_properties(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_DEVICE_LIST_PROPERTIES) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_device_list_properties " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 77 "trace/trace-qapi_commands_qdev_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("qmp_exit_device_list_properties " "%s %d" "\n", result, succeeded);
#line 81 "trace/trace-qapi_commands_qdev_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_device_list_properties(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_device_list_properties(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_DEVICE_DEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_DEVICE_DEL) || \
    false)

static inline void _nocheck__trace_qmp_enter_device_del(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_DEVICE_DEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_device_del " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 108 "trace/trace-qapi_commands_qdev_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("qmp_enter_device_del " "%s" "\n", json);
#line 112 "trace/trace-qapi_commands_qdev_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_device_del(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_device_del(json);
    }
}

#define TRACE_QMP_EXIT_DEVICE_DEL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_DEVICE_DEL) || \
    false)

static inline void _nocheck__trace_qmp_exit_device_del(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_DEVICE_DEL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_device_del " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 139 "trace/trace-qapi_commands_qdev_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("qmp_exit_device_del " "%s %d" "\n", result, succeeded);
#line 143 "trace/trace-qapi_commands_qdev_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_device_del(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_device_del(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_DEVICE_SYNC_CONFIG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_DEVICE_SYNC_CONFIG) || \
    false)

static inline void _nocheck__trace_qmp_enter_device_sync_config(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_DEVICE_SYNC_CONFIG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_device_sync_config " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 170 "trace/trace-qapi_commands_qdev_trace_events.h"
        } else {
#line 7 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("qmp_enter_device_sync_config " "%s" "\n", json);
#line 174 "trace/trace-qapi_commands_qdev_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_device_sync_config(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_device_sync_config(json);
    }
}

#define TRACE_QMP_EXIT_DEVICE_SYNC_CONFIG_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_DEVICE_SYNC_CONFIG) || \
    false)

static inline void _nocheck__trace_qmp_exit_device_sync_config(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_DEVICE_SYNC_CONFIG) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_device_sync_config " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 201 "trace/trace-qapi_commands_qdev_trace_events.h"
        } else {
#line 8 "qapi/qapi-commands-qdev.trace-events"
            qemu_log("qmp_exit_device_sync_config " "%s %d" "\n", result, succeeded);
#line 205 "trace/trace-qapi_commands_qdev_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_device_sync_config(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_device_sync_config(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_QDEV_TRACE_EVENTS_GENERATED_TRACERS_H */
