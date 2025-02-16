/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SBC-AP-IEs"
 * 	found in "../support/sbcap-r16/sbcap-r16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "SBCAP_CriticalityDiagnostics-IE-List.h"

#include "SBCAP_ProtocolExtensionContainer.h"
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SBCAP_CriticalityDiagnostics_IE_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_SBCAP_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SBCAP_CriticalityDiagnostics_IE_List__Member, iECriticality),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_Criticality,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iECriticality"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SBCAP_CriticalityDiagnostics_IE_List__Member, iE_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_ProtocolIE_ID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SBCAP_CriticalityDiagnostics_IE_List__Member, typeOfError),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_TypeOfError,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"typeOfError"
		},
	{ ATF_POINTER, 1, offsetof(struct SBCAP_CriticalityDiagnostics_IE_List__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SBCAP_ProtocolExtensionContainer_1453P20,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SBCAP_Member_oms_2[] = { 3 };
static const ber_tlv_tag_t asn_DEF_SBCAP_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SBCAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iECriticality */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* iE-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* typeOfError */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SBCAP_Member_specs_2 = {
	sizeof(struct SBCAP_CriticalityDiagnostics_IE_List__Member),
	offsetof(struct SBCAP_CriticalityDiagnostics_IE_List__Member, _asn_ctx),
	asn_MAP_SBCAP_Member_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_SBCAP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_SBCAP_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_SBCAP_Member_tags_2,
	sizeof(asn_DEF_SBCAP_Member_tags_2)
		/sizeof(asn_DEF_SBCAP_Member_tags_2[0]), /* 1 */
	asn_DEF_SBCAP_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_SBCAP_Member_tags_2)
		/sizeof(asn_DEF_SBCAP_Member_tags_2[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SBCAP_Member_2,
	4,	/* Elements count */
	&asn_SPC_SBCAP_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SBCAP_CriticalityDiagnostics_IE_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SBCAP_Member_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_SBCAP_CriticalityDiagnostics_IE_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_SBCAP_CriticalityDiagnostics_IE_List_specs_1 = {
	sizeof(struct SBCAP_CriticalityDiagnostics_IE_List),
	offsetof(struct SBCAP_CriticalityDiagnostics_IE_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SBCAP_CriticalityDiagnostics_IE_List = {
	"CriticalityDiagnostics-IE-List",
	"CriticalityDiagnostics-IE-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_SBCAP_CriticalityDiagnostics_IE_List_tags_1,
	sizeof(asn_DEF_SBCAP_CriticalityDiagnostics_IE_List_tags_1)
		/sizeof(asn_DEF_SBCAP_CriticalityDiagnostics_IE_List_tags_1[0]), /* 1 */
	asn_DEF_SBCAP_CriticalityDiagnostics_IE_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_SBCAP_CriticalityDiagnostics_IE_List_tags_1)
		/sizeof(asn_DEF_SBCAP_CriticalityDiagnostics_IE_List_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SBCAP_CriticalityDiagnostics_IE_List_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_SBCAP_CriticalityDiagnostics_IE_List_1,
	1,	/* Single element */
	&asn_SPC_SBCAP_CriticalityDiagnostics_IE_List_specs_1	/* Additional specs */
};

