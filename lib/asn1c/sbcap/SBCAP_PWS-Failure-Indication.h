/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-PDU-Contents"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_PWS_Failure_Indication_H_
#define	_SBCAP_PWS_Failure_Indication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SBCAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBCAP_ProtocolExtensionContainer;

/* SBCAP_PWS-Failure-Indication */
typedef struct SBCAP_PWS_Failure_Indication {
	SBCAP_ProtocolIE_Container_1427P7_t	 protocolIEs;
	struct SBCAP_ProtocolExtensionContainer	*protocolExtensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCAP_PWS_Failure_Indication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_PWS_Failure_Indication;
extern asn_SEQUENCE_specifics_t asn_SPC_SBCAP_PWS_Failure_Indication_specs_1;
extern asn_TYPE_member_t asn_MBR_SBCAP_PWS_Failure_Indication_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_PWS_Failure_Indication_H_ */
#include <asn_internal.h>
