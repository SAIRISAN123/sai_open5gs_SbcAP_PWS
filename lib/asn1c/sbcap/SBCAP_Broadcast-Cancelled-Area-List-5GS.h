/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#ifndef	_SBCAP_Broadcast_Cancelled_Area_List_5GS_H_
#define	_SBCAP_Broadcast_Cancelled_Area_List_5GS_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SBCAP_CellID_Cancelled_List_5GS;
struct SBCAP_TAI_Cancelled_List_5GS;
struct SBCAP_EmergencyAreaID_Cancelled_List;
struct SBCAP_ProtocolExtensionContainer;

/* SBCAP_Broadcast-Cancelled-Area-List-5GS */
typedef struct SBCAP_Broadcast_Cancelled_Area_List_5GS {
	struct SBCAP_CellID_Cancelled_List_5GS	*cellID_Cancelled_List_5GS;	/* OPTIONAL */
	struct SBCAP_TAI_Cancelled_List_5GS	*tAI_Cancelled_List_5GS;	/* OPTIONAL */
	struct SBCAP_EmergencyAreaID_Cancelled_List	*emergencyAreaID_Cancelled_List;	/* OPTIONAL */
	struct SBCAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SBCAP_Broadcast_Cancelled_Area_List_5GS_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SBCAP_Broadcast_Cancelled_Area_List_5GS;
extern asn_SEQUENCE_specifics_t asn_SPC_SBCAP_Broadcast_Cancelled_Area_List_5GS_specs_1;
extern asn_TYPE_member_t asn_MBR_SBCAP_Broadcast_Cancelled_Area_List_5GS_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _SBCAP_Broadcast_Cancelled_Area_List_5GS_H_ */
#include <asn_internal.h>
