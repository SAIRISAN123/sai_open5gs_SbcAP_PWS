/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_Concurrent_Warning_Message_Indicator_H_
#define	_SBCAP_Concurrent_Warning_Message_Indicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SBCAP_Concurrent_Warning_Message_Indicator {
	SBCAP_Concurrent_Warning_Message_Indicator_true	= 0
} e_SBCAP_Concurrent_Warning_Message_Indicator;

/* SBCAP_Concurrent-Warning-Message-Indicator */
typedef long	 SBCAP_Concurrent_Warning_Message_Indicator_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SBCAP_Concurrent_Warning_Message_Indicator_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_Concurrent_Warning_Message_Indicator;
extern const asn_INTEGER_specifics_t asn_SPC_SBCAP_Concurrent_Warning_Message_Indicator_specs_1;
asn_struct_free_f SBCAP_Concurrent_Warning_Message_Indicator_free;
asn_struct_print_f SBCAP_Concurrent_Warning_Message_Indicator_print;
asn_constr_check_f SBCAP_Concurrent_Warning_Message_Indicator_constraint;
per_type_decoder_f SBCAP_Concurrent_Warning_Message_Indicator_decode_aper;
per_type_encoder_f SBCAP_Concurrent_Warning_Message_Indicator_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_Concurrent_Warning_Message_Indicator_H_ */
#include <asn_internal.h>
