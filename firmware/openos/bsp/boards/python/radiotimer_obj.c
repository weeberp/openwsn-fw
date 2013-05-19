/**
\brief Python-specific definition of the "radiotimer" bsp module.

\author Thomas Watteyne <watteyne@eecs.berkeley.edu>, May 2013.
*/

#include "radiotimer_obj.h"

//=========================== variables =======================================

//=========================== prototypes ======================================

//=========================== callback ========================================

void radiotimer_setOverflowCb(OpenMote* self, radiotimer_compare_cbt cb) {
   self->radiotimer_icb.overflow_cb = cb;
}

void radiotimer_setCompareCb(OpenMote* self, radiotimer_compare_cbt cb) {
   self->radiotimer_icb.compare_cb = cb;
}

//=========================== public ==========================================

//===== admin

void radiotimer_init(OpenMote* self) {
   
   // send request to server and get reply
   /*
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_init,
                                    0,
                                    0,
                                    0,
                                    0);
   */
   // TODO: replace by call to Python
}

void radiotimer_start(OpenMote* self, uint16_t period) {
   /*
   opensim_requ_radiotimer_start_t requparams;
   
   // prepare params
   requparams.period = period;
   
   // send request to server and get reply
   
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_start,
                                    &requparams,
                                    sizeof(opensim_requ_radiotimer_start_t),
                                    0,
                                    0);
   */
   // TODO: replace by call to Python
}

//===== direct access

uint16_t radiotimer_getValue(OpenMote* self) {
   /*
   opensim_repl_radiotimer_getValue_t replparams;
   
   // send request to server and get reply
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_getValue,
                                    0,
                                    0,
                                    &replparams,
                                    sizeof(opensim_repl_radiotimer_getValue_t));
   // TODO: replace by call to Python
   
   return replparams.value;
   */
   return 0;//poipoi
}

void radiotimer_setPeriod(OpenMote* self, uint16_t period) {
   /*
   opensim_requ_radiotimer_setPeriod_t requparams;
   
   // prepare params
   requparams.period = period;
   
   // send request to server and get reply
   
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_setPeriod,
                                    &requparams,
                                    sizeof(opensim_requ_radiotimer_setPeriod_t),
                                    0,
                                    0);
   */
   // TODO: replace by call to Python
}

uint16_t radiotimer_getPeriod(OpenMote* self) {
   /*
   opensim_repl_radiotimer_getPeriod_t replparams;

   // send request to server and get reply
   
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_getPeriod,
                                    0,
                                    0,
                                    &replparams,
                                    sizeof(opensim_repl_radiotimer_getPeriod_t));
   
   // TODO: replace by call to Python
   
   return replparams.period;
   */
   return 0;//poipoi
}

//===== compare

void radiotimer_schedule(OpenMote* self, uint16_t offset) {
   /*
   opensim_requ_radiotimer_schedule_t requparams;
   
   // prepare params
   requparams.offset = offset;
   
   // send request to server and get reply
   
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_schedule,
                                    &requparams,
                                    sizeof(opensim_requ_radiotimer_schedule_t),
                                    0,
                                    0);
                                    
   */
   // TODO: replace by call to Python
}

void radiotimer_cancel(OpenMote* self) {
   
   // send request to server and get reply
   /*
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_cancel,
                                    0,
                                    0,
                                    0,
                                    0);
   */
   // TODO: replace by call to Python
}

//===== capture

uint16_t radiotimer_getCapturedTime(OpenMote* self) {
   /*
   opensim_repl_radiotimer_getCapturedTime_t replparams;

   // send request to server and get reply
   
   opensim_client_sendAndWaitForAck(OPENSIM_CMD_radiotimer_getCapturedTime,
                                    0,
                                    0,
                                    &replparams,
                                    sizeof(opensim_repl_radiotimer_getCapturedTime_t));
   
   // TODO: replace by call to Python
   
   return replparams.capturedTime;
   */
   return 0;//poipoi
}

//=========================== interrupt handlers ==============================

void radiotimer_intr_compare(OpenMote* self) {
   self->radiotimer_icb.compare_cb(self);
}

void radiotimer_intr_overflow(OpenMote* self) {
   self->radiotimer_icb.overflow_cb(self);
}

//=========================== private =========================================