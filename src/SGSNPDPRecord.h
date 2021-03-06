/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "CDR"
 * 	found in "../cdr.asn1"
 * 	`asn1c -fskeletons-copy -fnative-types`
 */

#ifndef	_SGSNPDPRecord_H_
#define	_SGSNPDPRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CallEventRecordType.h"
#include "NetworkInitiatedPDPContext.h"
#include "IMSI.h"
#include "IMEI.h"
#include "GSNAddress.h"
#include "MSNetworkCapability.h"
#include "RoutingAreaCode.h"
#include "LocationAreaCode.h"
#include "CellId.h"
#include "ChargingID.h"
#include "AccessPointNameNI.h"
#include "PDPType.h"
#include "TimeStamp.h"
#include "CallDuration.h"
#include "SGSNChange.h"
#include "CauseForRecClosing.h"
#include <NativeInteger.h>
#include "NodeID.h"
#include "LocalSequenceNumber.h"
#include "APNSelectionMode.h"
#include "AccessPointNameOI.h"
#include "MSISDN.h"
#include "ChargingCharacteristics.h"
#include "SystemType.h"
#include "DataVolumeGPRS.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SET.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */

/*
 * Method of determining the components presence
 */
typedef enum SGSNPDPRecord_PR {
	SGSNPDPRecord_PR_recordType,	/* Member recordType is present */
	SGSNPDPRecord_PR_networkInitiation,	/* Member networkInitiation is present */
	SGSNPDPRecord_PR_servedIMSI,	/* Member servedIMSI is present */
	SGSNPDPRecord_PR_servedIMEI,	/* Member servedIMEI is present */
	SGSNPDPRecord_PR_sgsnAddress,	/* Member sgsnAddress is present */
	SGSNPDPRecord_PR_msNetworkCapability,	/* Member msNetworkCapability is present */
	SGSNPDPRecord_PR_routingArea,	/* Member routingArea is present */
	SGSNPDPRecord_PR_locationAreaCode,	/* Member locationAreaCode is present */
	SGSNPDPRecord_PR_cellIdentifier,	/* Member cellIdentifier is present */
	SGSNPDPRecord_PR_chargingID,	/* Member chargingID is present */
	SGSNPDPRecord_PR_ggsnAddressUsed,	/* Member ggsnAddressUsed is present */
	SGSNPDPRecord_PR_accessPointNameNI,	/* Member accessPointNameNI is present */
	SGSNPDPRecord_PR_pdpType,	/* Member pdpType is present */
	SGSNPDPRecord_PR_servedPDPAddress,	/* Member servedPDPAddress is present */
	SGSNPDPRecord_PR_listOfTrafficVolumes,	/* Member listOfTrafficVolumes is present */
	SGSNPDPRecord_PR_recordOpeningTime,	/* Member recordOpeningTime is present */
	SGSNPDPRecord_PR_duration,	/* Member duration is present */
	SGSNPDPRecord_PR_sgsnChange,	/* Member sgsnChange is present */
	SGSNPDPRecord_PR_causeForRecClosing,	/* Member causeForRecClosing is present */
	SGSNPDPRecord_PR_diagnostics,	/* Member diagnostics is present */
	SGSNPDPRecord_PR_recordSequenceNumber,	/* Member recordSequenceNumber is present */
	SGSNPDPRecord_PR_nodeID,	/* Member nodeID is present */
	SGSNPDPRecord_PR_recordExtensions,	/* Member recordExtensions is present */
	SGSNPDPRecord_PR_localSequenceNumber,	/* Member localSequenceNumber is present */
	SGSNPDPRecord_PR_apnSelectionMode,	/* Member apnSelectionMode is present */
	SGSNPDPRecord_PR_accessPointNameOI,	/* Member accessPointNameOI is present */
	SGSNPDPRecord_PR_servedMSISDN,	/* Member servedMSISDN is present */
	SGSNPDPRecord_PR_chargingCharacteristics,	/* Member chargingCharacteristics is present */
	SGSNPDPRecord_PR_systemType,	/* Member systemType is present */
	SGSNPDPRecord_PR_cAMELInformationPDP,	/* Member cAMELInformationPDP is present */
	SGSNPDPRecord_PR_rNCUnsentDownlinkVolume,	/* Member rNCUnsentDownlinkVolume is present */
} SGSNPDPRecord_PR;

/* Forward declarations */
struct PDPAddress;
struct Diagnostics;
struct ManagementExtensions;
struct CAMELInformationPDP;
struct ChangeOfCharCondition;

/* SGSNPDPRecord */
typedef struct SGSNPDPRecord {
	CallEventRecordType_t	 recordType;
	NetworkInitiatedPDPContext_t	*networkInitiation	/* OPTIONAL */;
	IMSI_t	 servedIMSI;
	IMEI_t	*servedIMEI	/* OPTIONAL */;
	GSNAddress_t	 sgsnAddress;
	MSNetworkCapability_t	*msNetworkCapability	/* OPTIONAL */;
	RoutingAreaCode_t	*routingArea	/* OPTIONAL */;
	LocationAreaCode_t	*locationAreaCode	/* OPTIONAL */;
	CellId_t	*cellIdentifier	/* OPTIONAL */;
	ChargingID_t	 chargingID;
	GSNAddress_t	 ggsnAddressUsed;
	AccessPointNameNI_t	 accessPointNameNI;
	PDPType_t	 pdpType;
	struct PDPAddress	*servedPDPAddress	/* OPTIONAL */;
	struct SGSNPDPRecord__listOfTrafficVolumes {
		A_SEQUENCE_OF(struct ChangeOfCharCondition) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} listOfTrafficVolumes;
	TimeStamp_t	 recordOpeningTime;
	CallDuration_t	 duration;
	SGSNChange_t	*sgsnChange	/* OPTIONAL */;
	CauseForRecClosing_t	 causeForRecClosing;
	struct Diagnostics	*diagnostics	/* OPTIONAL */;
	long	*recordSequenceNumber	/* OPTIONAL */;
	NodeID_t	*nodeID	/* OPTIONAL */;
	struct ManagementExtensions	*recordExtensions	/* OPTIONAL */;
	LocalSequenceNumber_t	*localSequenceNumber	/* OPTIONAL */;
	APNSelectionMode_t	*apnSelectionMode	/* OPTIONAL */;
	AccessPointNameOI_t	 accessPointNameOI;
	MSISDN_t	*servedMSISDN	/* OPTIONAL */;
	ChargingCharacteristics_t	*chargingCharacteristics	/* OPTIONAL */;
	SystemType_t	*systemType	/* OPTIONAL */;
	struct CAMELInformationPDP	*cAMELInformationPDP	/* OPTIONAL */;
	DataVolumeGPRS_t	*rNCUnsentDownlinkVolume	/* OPTIONAL */;
	
	/* Presence bitmask: ASN_SET_ISPRESENT(pSGSNPDPRecord, SGSNPDPRecord_PR_x) */
	unsigned int _presence_map
		[((31+(8*sizeof(unsigned int))-1)/(8*sizeof(unsigned int)))];
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SGSNPDPRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SGSNPDPRecord;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDPAddress.h"
#include "Diagnostics.h"
#include "ManagementExtensions.h"
#include "CAMELInformationPDP.h"
#include "ChangeOfCharCondition.h"

#endif	/* _SGSNPDPRecord_H_ */
#include <asn_internal.h>
