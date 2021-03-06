/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_ManagementExtension_H_
#define	_ManagementExtension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OBJECT_IDENTIFIER.h>
#include <BOOLEAN.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ManagementExtension */
typedef struct ManagementExtension {
	OBJECT_IDENTIFIER_t	 identifier;
	BOOLEAN_t	*significance	/* DEFAULT FALSE */;
	ANY_t	 information;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ManagementExtension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ManagementExtension;

#ifdef __cplusplus
}
#endif

#endif	/* _ManagementExtension_H_ */
#include <asn_internal.h>
