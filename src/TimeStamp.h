/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_TimeStamp_H_
#define	_TimeStamp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeStamp */
typedef OCTET_STRING_t	 TimeStamp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeStamp;
asn_struct_free_f TimeStamp_free;
asn_struct_print_f TimeStamp_print;
asn_constr_check_f TimeStamp_constraint;
ber_type_decoder_f TimeStamp_decode_ber;
der_type_encoder_f TimeStamp_encode_der;
xer_type_decoder_f TimeStamp_decode_xer;
xer_type_encoder_f TimeStamp_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeStamp_H_ */
#include <asn_internal.h>
