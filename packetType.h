/** @file packetType.h
 *
 * 	@author Doowon Kim
 * 	@date Aug. 2014
 */

typedef enum { 	
	ERROR = -1, 
	REQ_FIND_CLOSEST_FINGER = 1,
	RES_FIND_CLOSEST_FINGER_FOUND,
	RES_FIND_CLOSEST_FINGER_NOTFOUND,
	REQ_GET_PRED, RES_GET_PRED,
	REQ_GET_SUCC, RES_GET_SUCC,
	REQ_MODIFY_PRED,
	REQ_GET_KEY, RES_GET_KEY_SIZE, RES_GET_KEY_DATA,
	REQ_CHECK_ALIVE, RES_CHECK_ALIVE,
	REQ_START_SIM = 100,
	REQ_ABORT = 101,
	REQ_MODIFY_PRED_TIME_OUT,
	REQ_HAS_KEY
} PktType;