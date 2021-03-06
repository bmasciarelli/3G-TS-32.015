/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_TrailerRecord_H_
#define	_TrailerRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeStamp.h"
#include "RecordingEntity.h"
#include <NativeInteger.h>
#include "ManagementExtensions.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TrailerRecord */
typedef struct TrailerRecord {
	TimeStamp_t	 productionDateTime;
	RecordingEntity_t	 recordingEntity;
	TimeStamp_t	 firstCallDateTime;
	TimeStamp_t	 lastCallDateTime;
	long	 noOfRecords;
	ManagementExtensions_t	 extensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrailerRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrailerRecord;

#ifdef __cplusplus
}
#endif

#endif	/* _TrailerRecord_H_ */
#include <asn_internal.h>
