/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_CancelledCellinTAI_5GS_H_
#define	_SBCAP_CancelledCellinTAI_5GS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "SBCAP_NR-CGI.h"
#include "SBCAP_NumberOfBroadcasts.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBCAP_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct SBCAP_CancelledCellinTAI_5GS__Member {
	SBCAP_NR_CGI_t	 nR_CGI;
	SBCAP_NumberOfBroadcasts_t	 numberOfBroadcasts;
	struct SBCAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CancelledCellinTAI_5GS__Member;

/* SBCAP_CancelledCellinTAI-5GS */
typedef struct SBCAP_CancelledCellinTAI_5GS {
	A_SEQUENCE_OF(CancelledCellinTAI_5GS__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCAP_CancelledCellinTAI_5GS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_CancelledCellinTAI_5GS;
extern asn_SET_OF_specifics_t asn_SPC_SBCAP_CancelledCellinTAI_5GS_specs_1;
extern asn_TYPE_member_t asn_MBR_SBCAP_CancelledCellinTAI_5GS_1[1];
extern asn_per_constraints_t asn_PER_type_SBCAP_CancelledCellinTAI_5GS_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_CancelledCellinTAI_5GS_H_ */
#include <asn_internal.h>