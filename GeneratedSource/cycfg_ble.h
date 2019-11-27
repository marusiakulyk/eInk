/***************************************************************************//**
* File Name: cycfg_ble.h
* Version: 2.0
*
* Description:
* Bluetooth Low Energy (BLE) milddleware configuration.
* This file should not be modified. It was automatically generated by
* Bluetooth Configurator 2.0.0.1483
*
********************************************************************************
* Copyright 2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#if !defined(CYCFG_BLE_H)
#define CYCFG_BLE_H

#include "cycfg_peripherals.h"
#include "cy_syslib.h"


#if defined(COMPONENT_BLESS_CONTROLLER) || defined(COMPONENT_BLESS_HOST) || \
    defined(COMPONENT_BLESS_CONTROLLER_IPC)  || defined(COMPONENT_BLESS_HOST_IPC)

#include "cy_ble_event_handler.h"
#include "cy_ble_defines.h"
#include "cy_ble_common.h"


/** 
 * The maximum number of BLE connections
 * This parameter displays how many BLE connections (both Central and Peripheral) are allowed.
 * The valid range is from 1 to 4.
 */
#define CY_BLE_CONN_COUNT                           (0x01u)

/** The number of BLE connections (client) */
#define CY_BLE_GATTC_COUNT                          (0x00u)

/** The number of GAP Peripheral configurations structures */
#define CY_BLE_GAP_PERIPHERAL_COUNT                 (0x01u)

/** The number of GAP Broadcaster configurations structures */
#define CY_BLE_GAP_BROADCASTER_COUNT                (0x00u)

/** The number of GAP Central configurations structures */
#define CY_BLE_GAP_CENTRAL_COUNT                    (0x00u)

/** The number of GAP Observer configurations structures */
#define CY_BLE_GAP_OBSERVER_COUNT                   (0x00u)

/** The number of Security configurations structures */
#define CY_BLE_AUTH_INFO_COUNT                      (0x01u)

/** The GAP security level */
#define CY_BLE_CONFIG_GAP_SECURITY_LEVEL            (0x00u)

/**
 * The GAP Role
 * The following defined masks can be used:
 * CY_BLE_GAP_PERIPHERAL, CY_BLE_GAP_CENTRAL, CY_BLE_GAP_BROADCASTER and CY_BLE_GAP_OBSERVER.
 */ 
#define CY_BLE_GAP_ROLE                             (0x01u)

/** The Bonding Requirement */
#define CY_BLE_BONDING_REQUIREMENT                  (0x00u)

/**
 * GATT MTU Size
 * The maximum Transmission Unit size (bytes) of an attribute to be used in the design.
 * The valid range is from 23 to 512 bytes. 
 */
#define CY_BLE_GATT_MTU                             (0x17u)

/** The GATT Maximum attribute length */
#define CY_BLE_GATT_DB_MAX_VALUE_LEN                (0x0021u)
#define CY_BLE_GATT_DB_INDEX_COUNT                  (0x000Fu)

/** The number of characteristics supporting the Reliable Write property */
#define CY_BLE_GATT_RELIABLE_CHAR_COUNT             (0x0000u)

/** The total length of characteristics with the Reliable Write property */
#define CY_BLE_GATT_RELIABLE_CHAR_LENGTH            (0x0000u)

/** The size of the cy_ble_attValues array */
#define CY_BLE_GATT_DB_ATT_VAL_COUNT                (0x33u)

/** The size of the cy_ble_attValuesLen array */
#define CY_BLE_GATT_DB_ATT_VAL_LEN_COUNT            (0x07u)

/** GATT Role */
#define CY_BLE_GATT_ROLE                            (0x01u)
#define CY_BLE_GATT_DB_CCCD_COUNT                   (0x00u)
#define CY_BLE_ATT_UUID_128_COUNT                   (0x02u)

/** The GATT Role defines */
#define CY_BLE_GATT_ROLE_SERVER                     (0u != (CY_BLE_GATT_ROLE & CY_BLE_GATT_SERVER))
#define CY_BLE_GATT_ROLE_CLIENT                     (0u != (CY_BLE_GATT_ROLE & CY_BLE_GATT_CLIENT))

/** Max unique services in the project */
#define CY_BLE_MAX_SRVI                             (0x03u)

/** The parameter to enable the configuration of the L2CAP logical channels */
#define CY_BLE_L2CAP_ENABLE                         (0x01u)

/** L2CAP MTU Size */
#define CY_BLE_CONFIG_L2CAP_MTU                     (0x17u)

/** The number of L2CAP Logical channels */
#define CY_BLE_CONFIG_L2CAP_LOGICAL_CHANNEL_COUNT   (0x01u)

/** Number of L2CAP PSMs */
#define CY_BLE_CONFIG_L2CAP_PSM_COUNT               (0x01u)

/** LE 2 Mbps feature */
#define CY_BLE_CONFIG_ENABLE_PHY_UPDATE             (0x00u)

/** Radio power calibration feature */
#define CY_BLE_CONFIG_TX_POWER_CALIBRATION_ENABLE   (0x00u)

/** LL Privacy 1.2 feature */
#define CY_BLE_CONFIG_ENABLE_LL_PRIVACY             (0x01u)

#define CY_BLE_CONFIG_MAX_RESOLVABLE_DEVICES        (0x10u)
#define CY_BLE_CONFIG_MAX_WHITE_LIST_SIZE           (0x10u)

/** The maximum number of bonded devices to be supported by this device */
#define CY_BLE_CONFIG_MAX_BONDED_DEVICES            (0x00u)                                     
/** Max Tx payload size */
#define CY_BLE_CONFIG_LL_MAX_TX_PAYLOAD_SIZE        (0x1Bu)

/** Max Rx payload size */
#define CY_BLE_CONFIG_LL_MAX_RX_PAYLOAD_SIZE        (0x1Bu)

#if !defined(CY_BLE_SHARING_MODE)
/** BLE Sharing mode (OTA feature) */
#define CY_BLE_SHARING_MODE                         (CY_BLE_SHARING_NONE)
#endif


/*******************************************************************************
* Include memory calculation and BLE cores/mode macros
*******************************************************************************/

#include "cy_ble_cfg_common.h"


/*******************************************************************************
* API Constants for BLE services 
*******************************************************************************/    

/* HIDS */
/** The maximum supported count of HID services for the GATT Server role */
#define CY_BLE_CONFIG_HIDSS_SERVICE_COUNT                      (0x00u)

/** The maximum supported count of HID reports for the GATT Server role */
#define CY_BLE_CONFIG_HIDSS_REPORT_COUNT                       (0x00u)
    
/** The maximum supported count of HID services for the GATT Client role */
#define CY_BLE_CONFIG_HIDSC_SERVICE_COUNT                      (0x00u)

/** The maximum supported count of HID reports for the GATT Client role */
#define CY_BLE_CONFIG_HIDSC_REPORT_COUNT                       (0x00u)

/** HIDS service indexes */


/** HIDS Report Characteristic indexes */



/* Battery Service */
/** The maximum supported count of BAS services for the GATT Server role */
#define CY_BLE_CONFIG_BASS_SERVICE_COUNT                       (0x00u)

/** The maximum supported count of BAS reports for the GATT Client role */
#define CY_BLE_CONFIG_BASC_SERVICE_COUNT                       (0x00u)

/** BAS service indexes. */


/* Environmental Sensing Service */
/** The maximum supported count of ESS characteristics for the GATT Client role */
#define CY_BLE_CONFIG_ESSC_TOTAL_CHAR_COUNT                    (0x00u)

/** The number of ESS characteristics for the GATT Server role */
#define CY_BLE_CONFIG_ESSS_TOTAL_CHAR_COUNT                    (0x00u)

/** The number of different ESS characteristics */
#define CY_BLE_CONFIG_ESS_CHAR_INST_COUNT                      (0x15u)


/* Automation IO Service */
/** The maximum supported count of AIOS characteristics for the GATT Client role */
#define CY_BLE_CONFIG_AIOSC_TOTAL_CHAR_COUNT                   (0x00u)

/** The number of AIOS characteristics for the GATT Server role */
#define CY_BLE_CONFIG_AIOSS_TOTAL_CHAR_COUNT                   (0x00u)

/** The number of different AIOS characteristics */
#define CY_BLE_CONFIG_AIOS_CHAR_INST_COUNT                     (0x03u)


/* Custom Service */
/** The maximum supported count of Custom services for the GATT Server role */
#define CY_BLE_CONFIG_CUSTOMS_SERVICE_COUNT                    (0x01u)

/** The maximum supported count of Custom services for the GATT Client role */
#define CY_BLE_CONFIG_CUSTOMC_SERVICE_COUNT                    (0x00u)

/** The size of the cy_ble_customSChar array */
#define CY_BLE_CONFIG_CUSTOMS_SERVICE_CHAR_COUNT               (0x01u)

/** The size of the cy_ble_customSDesc array */
#define CY_BLE_CONFIG_CUSTOMS_SERVICE_CHAR_DESCRIPTORS_COUNT   (0x00u)

/** The size of the cy_ble_customCChar array */
#define CY_BLE_CONFIG_CUSTOMC_SERVICE_CHAR_COUNT               (0x00u)

/** The size of the cy_ble_customCDesc array */
#define CY_BLE_CONFIG_CUSTOMC_SERVICE_CHAR_DESCRIPTORS_COUNT   (0x00u)

/** The size of the cy_ble_customCUuid128 array */
#define CY_BLE_CONFIG_CUSTOMC_UUID_128_COUNT                   (0x00u)

/** The size of the cy_ble_customUuid16 array */
#define CY_BLE_CONFIG_CUSTOMC_UUID_16_COUNT                    (0x00u)

/*
 * Below are the indexes and handles of the defined Custom Services and
 * their characteristics.
 */
#define CY_BLE_LINEDATA_SERVICE_INDEX   (0x00u) /* Index of LineData service in the cy_ble_customSServ array */
#define CY_BLE_LINEDATA_DATA_CHAR_INDEX   (0x00u) /* Index of Data characteristic */

#define CY_BLE_LINEDATA_SERVICE_HANDLE   (0x000Du) /* Handle of LineData service */
#define CY_BLE_LINEDATA_DATA_DECL_HANDLE   (0x000Eu) /* Handle of Data characteristic declaration */
#define CY_BLE_LINEDATA_DATA_CHAR_HANDLE   (0x000Fu) /* Handle of Data characteristic */

/*
 * Below are the GAP configuration defines.
 */
#define CY_BLE_SECURITY_CONFIGURATION_0_INDEX   (0x00u)
#define CY_BLE_ADV_PKT_0_INDEX_FLAGS   (0x00u)
#define CY_BLE_ADV_PKT_0_INDEX_LOCAL_NAME   (0x03u)
#define CY_BLE_ADV_PKT_0_INDEX_SERVICE_UUID_16   (0x14u)
#define CY_BLE_SCN_PKT_0_INDEX_LOCAL_NAME   (0x00u)
#define CY_BLE_PERIPHERAL_CONFIGURATION_0_INDEX   (0x00u)


/*******************************************************************************
* Services Enable defines
*******************************************************************************/

#define CY_BLE_IAS
#define CY_BLE_IAS_SERVER
#define CY_BLE_DIS
#define CY_BLE_DIS_SERVER
#define CY_BLE_CUSTOM
#define CY_BLE_CUSTOM_SERVER


/*******************************************************************************  
* Service indexes (SRVI)
*******************************************************************************/

typedef enum
{
    CY_BLE_SRVI_GAP,
    CY_BLE_SRVI_GATT,

    #ifdef CY_BLE_ANCS_CLIENT
    CY_BLE_SRVI_ANCS,
    #endif /* CY_BLE_ANCS_CLIENT */
    
    #ifdef CY_BLE_ANS_CLIENT
    CY_BLE_SRVI_ANS,
    #endif /* CY_BLE_ANS_CLIENT */
    
    #ifdef CY_BLE_AIOS_CLIENT
    CY_BLE_SRVI_AIOS,
    #endif /* CY_BLE_AIOS_CLIENT */
    
    #ifdef CY_BLE_BAS_CLIENT
    CY_BLE_SRVI_BAS,
    CY_BLE_SRVI_BAS_END = (uint8_t)(CY_BLE_SRVI_BAS) + CY_BLE_CONFIG_BASC_SERVICE_COUNT - 1u,
    #endif /* CY_BLE_BAS_CLIENT */
    
    #ifdef CY_BLE_BCS_CLIENT
    CY_BLE_SRVI_BCS,
    #endif /* CY_BLE_BCS_CLIENT */
    
    #ifdef CY_BLE_BLS_CLIENT
    CY_BLE_SRVI_BLS,
    #endif /* CY_BLE_BLS_CLIENT */
    
    #ifdef CY_BLE_BMS_CLIENT
    CY_BLE_SRVI_BMS,
    #endif /* CY_BLE_BMS_CLIENT */
    
    #ifdef CY_BLE_CGMS_CLIENT
    CY_BLE_SRVI_CGMS,
    #endif /* CY_BLE_CGMS_CLIENT */

    #ifdef CY_BLE_CPS_CLIENT
    CY_BLE_SRVI_CPS,
    #endif /* CY_BLE_CPS_CLIENT */

    #ifdef CY_BLE_CSCS_CLIENT
    CY_BLE_SRVI_CSCS,
    #endif /* CY_BLE_CSCS_CLIENT */

    #ifdef CY_BLE_CTS_CLIENT
    CY_BLE_SRVI_CTS,
    #endif /* CY_BLE_CTS_CLIENT */

    #ifdef CY_BLE_CUSTOM_CLIENT
    CY_BLE_SRVI_CUSTOMS,
    CY_BLE_SRVI_CUSTOMS_END =(uint8_t)(CY_BLE_SRVI_CUSTOMS ) + CY_BLE_CONFIG_CUSTOMC_SERVICE_COUNT - 1u,
    #endif /* CY_BLE_CUSTOM_CLIENT */

    #ifdef CY_BLE_DIS_CLIENT
    CY_BLE_SRVI_DIS,
    #endif /* CY_BLE_DIS_CLIENT */

    #ifdef CY_BLE_ESS_CLIENT
    CY_BLE_SRVI_ESS,
    #endif /* CY_BLE_ESS_CLIENT */

    #ifdef CY_BLE_GLS_CLIENT
    CY_BLE_SRVI_GLS,
    #endif /* CY_BLE_GLS_CLIENT */
    
    #ifdef CY_BLE_HIDS_CLIENT
    CY_BLE_SRVI_HIDS,
    CY_BLE_SRVI_HIDS_END = (uint8_t)(CY_BLE_SRVI_HIDS)+ CY_BLE_CONFIG_HIDSC_SERVICE_COUNT - 1u,
    #endif /* CY_BLE_HIDS_CLIENT */

    #ifdef CY_BLE_HPS_CLIENT
    CY_BLE_SRVI_HPS,
    #endif /* CY_BLE_HPS_CLIENT */

    #ifdef CY_BLE_HRS_CLIENT
    CY_BLE_SRVI_HRS,
    #endif /* CY_BLE_HRS_CLIENT */

    #ifdef CY_BLE_HTS_CLIENT
    CY_BLE_SRVI_HTS,
    #endif /* CY_BLE_HTS_CLIENT */

    #ifdef CY_BLE_IAS_CLIENT
    CY_BLE_SRVI_IAS,
    #endif /* CY_BLE_IAS_CLIENT */

    #ifdef CY_BLE_IPS_CLIENT
    CY_BLE_SRVI_IPS,
    #endif /* CY_BLE_IPS_CLIENT */

    #ifdef CY_BLE_LLS_CLIENT
    CY_BLE_SRVI_LLS,
    #endif /* CY_BLE_LLS_CLIENT */

    #ifdef CY_BLE_LNS_CLIENT
    CY_BLE_SRVI_LNS,
    #endif /* CY_BLE_LNS_CLIENT */

    #ifdef CY_BLE_NDCS_CLIENT
    CY_BLE_SRVI_NDCS,
    #endif /* CY_BLE_NDCS_CLIENT */
    
    #ifdef CY_BLE_IPSS_CLIENT
    CY_BLE_SRVI_IPSS,
    #endif /* CY_BLE_IPSS_CLIENT */
    
    #ifdef CY_BLE_PASS_CLIENT
    CY_BLE_SRVI_PASS,
    #endif /* CY_BLE_PASS_CLIENT */

    #ifdef CY_BLE_PLXS_CLIENT
    CY_BLE_SRVI_PLXS,
    #endif /* CY_BLE_PLXS_CLIENT */

    #ifdef CY_BLE_RSCS_CLIENT
    CY_BLE_SRVI_RSCS,
    #endif /* CY_BLE_RSCS_CLIENT */

    #ifdef CY_BLE_RTUS_CLIENT
    CY_BLE_SRVI_RTUS,
    #endif /* CY_BLE_RTUS_CLIENT */

    #ifdef CY_BLE_SCPS_CLIENT
    CY_BLE_SRVI_SCPS,
    #endif /* CY_BLE_SCPS_CLIENT */

    #ifdef CY_BLE_TPS_CLIENT
    CY_BLE_SRVI_TPS,
    #endif /* CY_BLE_TPS_CLIENT */

    #ifdef CY_BLE_UDS_CLIENT
    CY_BLE_SRVI_UDS,
    #endif /* CY_BLE_UDS_CLIENT */

    #ifdef CY_BLE_WPTS_CLIENT
    CY_BLE_SRVI_WPTS,
    #endif /* CY_BLE_WPTS_CLIENT */

    #ifdef CY_BLE_WSS_CLIENT
    CY_BLE_SRVI_WSS,
    #endif /* CY_BLE_WSS_CLIENT */
    
    CY_BLE_SRVI_COUNT /**< Total count of services */
}cy_en_ble_srvi_t;


/*******************************************************************************
* External data references
*******************************************************************************/

extern const cy_stc_ble_config_t cy_ble_config;
extern cy_stc_ble_gap_bd_addr_t cy_ble_deviceAddress;


#if (CY_BLE_GATT_ROLE_SERVER) 
extern const cy_stc_ble_gaps_t cy_ble_gaps;
extern const cy_stc_ble_gaps_config_t cy_ble_gapsConfig;
extern const cy_stc_ble_gatts_t cy_ble_gatts;
extern const cy_stc_ble_gatts_config_t cy_ble_gattsConfig;
#endif /* CY_BLE_GATT_ROLE_SERVER */

#if (CY_BLE_GATT_ROLE_CLIENT) 
extern cy_stc_ble_gattc_t cy_ble_gattc[CY_BLE_GATTC_COUNT];
extern cy_stc_ble_gapc_t cy_ble_gapc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_gapc_config_t cy_ble_gapcConfig;
extern const cy_stc_ble_gattc_config_t cy_ble_gattcConfig;
extern cy_stc_ble_discovery_t cy_ble_discovery[CY_BLE_GATTC_COUNT];
extern cy_stc_ble_disc_srvc_info_t cy_ble_serverInfo[CY_BLE_GATTC_COUNT][CY_BLE_SRVI_COUNT];
#endif /* CY_BLE_GATT_ROLE_CLIENT */

#ifdef CY_BLE_ANCS_SERVER
extern const cy_stc_ble_ancss_t cy_ble_ancss;
extern const cy_stc_ble_ancss_config_t cy_ble_ancssConfig;
#endif /* CY_BLE_ANCS_SERVER */
#ifdef CY_BLE_ANCS_CLIENT
extern cy_stc_ble_ancsc_t cy_ble_ancsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_ancsc_config_t cy_ble_ancscConfig;
#endif /* CY_BLE_ANCS_CLIENT */

#ifdef CY_BLE_ANS_SERVER
extern const cy_stc_ble_anss_t cy_ble_anss;
extern const cy_stc_ble_anss_config_t cy_ble_anssConfig;
#endif /* CY_BLE_ANS_SERVER */
#ifdef CY_BLE_ANS_CLIENT
extern cy_stc_ble_ansc_t cy_ble_ansc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_ansc_config_t cy_ble_anscConfig;
#endif /* CY_BLE_ANS_CLIENT */

#ifdef CY_BLE_AIOS_SERVER
extern const cy_stc_ble_aioss_t cy_ble_aioss;
extern const cy_stc_ble_aioss_config_t cy_ble_aiossConfig;
#endif /* CY_BLE_AIOS_SERVER */
#ifdef CY_BLE_AIOS_CLIENT
extern const cy_stc_ble_aiosc_t cy_ble_aiosc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_aiosc_config_t cy_ble_aioscConfig;
#endif /* CY_BLE_AIOS_CLIENT */

#ifdef CY_BLE_BAS_SERVER
extern const cy_stc_ble_bass_t cy_ble_bass[CY_BLE_CONFIG_BASS_SERVICE_COUNT];
extern const cy_stc_ble_bass_config_t cy_ble_bassConfig;
#endif /* CY_BLE_BAS_SERVER */
#ifdef CY_BLE_BAS_CLIENT
extern cy_stc_ble_basc_t cy_ble_basc[CY_BLE_GATTC_COUNT][CY_BLE_CONFIG_BASC_SERVICE_COUNT];
extern const cy_stc_ble_basc_config_t cy_ble_bascConfig;
#endif /* CY_BLE_BAS_CLIENT */

#ifdef CY_BLE_BCS_SERVER
extern const cy_stc_ble_bcss_t cy_ble_bcss;
extern const cy_stc_ble_bcss_config_t cy_ble_bcssConfig;
#endif /* CY_BLE_BCS_SERVER */
#ifdef CY_BLE_BCS_CLIENT
extern cy_stc_ble_bcsc_t cy_ble_bcsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_bcsc_config_t cy_ble_bcscConfig;
#endif /* CY_BLE_BCS_CLIENT */

#ifdef CY_BLE_BLS_SERVER
extern const cy_stc_ble_blss_t cy_ble_blss;
extern const cy_stc_ble_blss_config_t cy_ble_blssConfig;
#endif /* CY_BLE_BLS_SERVER */
#ifdef CY_BLE_BLS_CLIENT
extern cy_stc_ble_blsc_t cy_ble_blsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_blsc_config_t cy_ble_blscConfig;
#endif /* CY_BLE_BLS_CLIENT */

#ifdef CY_BLE_BMS_SERVER
extern const cy_stc_ble_bmss_t cy_ble_bmss;
extern const cy_stc_ble_bmss_config_t cy_ble_bmssConfig;
#endif /* CY_BLE_BMS_SERVER */
#ifdef CY_BLE_BMS_CLIENT
extern cy_stc_ble_bmsc_t cy_ble_bmsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_bmsc_config_t cy_ble_bmscConfig;
#endif /* CY_BLE_BMS_CLIENT */

#ifdef CY_BLE_BTS_SERVER
extern const cy_stc_ble_btss_t cy_ble_btss;
extern const cy_stc_ble_btss_config_t cy_ble_btssConfig;
#endif /* CY_BLE_BTS_SERVER */

#ifdef CY_BLE_CGMS_SERVER
extern const cy_stc_ble_cgmss_t cy_ble_cgmss;
extern const cy_stc_ble_cgmss_config_t cy_ble_cgmssConfig;
#endif /* CY_BLE_CGMS_SERVER */
#ifdef CY_BLE_CGMS_CLIENT
extern cy_stc_ble_cgmsc_t cy_ble_cgmsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_cgmsc_config_t cy_ble_cgmscConfig;
#endif /* CY_BLE_CGMS_CLIENT */

#ifdef CY_BLE_CPS_SERVER
extern const cy_stc_ble_cpss_t cy_ble_cpss;
extern const cy_stc_ble_cpss_config_t cy_ble_cpssConfig;
#endif /* CY_BLE_CPS_SERVER */
#ifdef CY_BLE_CPS_CLIENT
extern cy_stc_ble_cpsc_t cy_ble_cpsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_cpsc_config_t cy_ble_cpscConfig;
#endif /* CY_BLE_CPS_CLIENT */

#ifdef CY_BLE_CSCS_SERVER
extern const cy_stc_ble_cscss_t cy_ble_cscss;
extern const cy_stc_ble_cscss_config_t cy_ble_cscssConfig;
#endif /* CY_BLE_CSCS_SERVER */
#ifdef CY_BLE_CSCS_CLIENT
extern cy_stc_ble_cscsc_t cy_ble_cscsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_cscsc_config_t cy_ble_cscscConfig;
#endif /* CY_BLE_CSCS_CLIENT */

#ifdef CY_BLE_CTS_SERVER
extern const cy_stc_ble_ctss_t cy_ble_ctss;
extern const cy_stc_ble_ctss_config_t cy_ble_ctssConfig;
#endif /* CY_BLE_CTS_SERVER */
#ifdef CY_BLE_CTS_CLIENT
extern cy_stc_ble_ctsc_t cy_ble_ctsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_ctsc_config_t cy_ble_ctscConfig;
#endif /* CY_BLE_CTS_CLIENT */

#ifdef CY_BLE_CUSTOM_SERVER
extern const cy_stc_ble_customs_t cy_ble_customSServ[CY_BLE_CONFIG_CUSTOMS_SERVICE_COUNT];
extern const cy_stc_ble_customs_config_t cy_ble_customsConfig;
#endif /* CY_BLE_CUSTOM_SERVER */
#ifdef CY_BLE_CUSTOM_CLIENT
extern const cy_stc_ble_customc_t cy_ble_customCServ[CY_BLE_CONFIG_CUSTOMC_SERVICE_COUNT];
extern const cy_stc_ble_customc_config_t cy_ble_customcConfig;
#endif /* CY_BLE_CUSTOM_CLIENT */

#ifdef CY_BLE_DIS_SERVER
extern const cy_stc_ble_diss_t cy_ble_diss;
extern const cy_stc_ble_diss_config_t cy_ble_dissConfig;
#endif /* CY_BLE_DIS_SERVER */
#ifdef CY_BLE_DIS_CLIENT
extern cy_stc_ble_disc_t cy_ble_disc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_disc_config_t cy_ble_discConfig;
#endif /* CY_BLE_DIS_CLIENT */

#ifdef CY_BLE_ESS_SERVER
extern const cy_stc_ble_esss_t cy_ble_esss;
extern const cy_stc_ble_esss_config_t cy_ble_esssConfig;
#endif /* CY_BLE_ESS_SERVER */
#ifdef CY_BLE_ESS_CLIENT
extern const cy_stc_ble_essc_t cy_ble_essc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_essc_config_t cy_ble_esscConfig;
#endif /* CY_BLE_ESS_CLIENT */

#ifdef CY_BLE_GLS_SERVER
extern const cy_stc_ble_glss_t cy_ble_glss;
extern const cy_stc_ble_glss_config_t cy_ble_glssConfig;
#endif /* CY_BLE_GLS_SERVER */
#ifdef CY_BLE_GLS_CLIENT
extern cy_stc_ble_glsc_t cy_ble_glsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_glsc_config_t cy_ble_glscConfig;
#endif /* CY_BLE_GLS_CLIENT */

#ifdef CY_BLE_HIDS_SERVER
extern const cy_stc_ble_hidss_t cy_ble_hidss[CY_BLE_CONFIG_HIDSS_SERVICE_COUNT];
extern const cy_stc_ble_hidss_config_t cy_ble_hidssConfig;
#endif /* CY_BLE_HIDS_SERVER */
#ifdef CY_BLE_HIDS_CLIENT
extern cy_stc_ble_hidsc_t cy_ble_hidsc[CY_BLE_GATTC_COUNT][CY_BLE_CONFIG_HIDSC_SERVICE_COUNT];
extern const cy_stc_ble_hidsc_config_t cy_ble_hidscConfig;
#endif /* CY_BLE_HIDS_CLIENT */

#ifdef CY_BLE_HPS_SERVER
extern const cy_stc_ble_hpss_t cy_ble_hpss;
extern const cy_stc_ble_hpss_config_t cy_ble_hpssConfig;
#endif /* CY_BLE_HPS_SERVER */
#ifdef CY_BLE_HPS_CLIENT
extern cy_stc_ble_hpsc_t cy_ble_hpsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_hpsc_config_t cy_ble_hpscConfig;
#endif /* CY_BLE_HPS_CLIENT */

#ifdef CY_BLE_HRS_SERVER
extern const cy_stc_ble_hrss_t cy_ble_hrss;
extern const cy_stc_ble_hrss_config_t cy_ble_hrssConfig;
#endif /* CY_BLE_HRS_SERVER */
#ifdef CY_BLE_HRS_CLIENT
extern cy_stc_ble_hrsc_t cy_ble_hrsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_hrsc_config_t cy_ble_hrscConfig;
#endif /* CY_BLE_HRS_CLIENT */

#ifdef CY_BLE_HTS_SERVER
extern const cy_stc_ble_htss_t cy_ble_htss;
extern const cy_stc_ble_htss_config_t cy_ble_htssConfig;
#endif /* CY_BLE_HTS_SERVER */
#ifdef CY_BLE_HTS_CLIENT
extern cy_stc_ble_htsc_t cy_ble_htsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_htsc_config_t cy_ble_htscConfig;
#endif /* CY_BLE_HTS_CLIENT */

#ifdef CY_BLE_IAS_SERVER
extern const cy_stc_ble_iass_t cy_ble_iass;
extern const cy_stc_ble_iass_config_t cy_ble_iassConfig;
#endif /* CY_BLE_IAS_SERVER */
#ifdef CY_BLE_IAS_CLIENT
extern cy_stc_ble_iasc_t cy_ble_iasc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_iasc_config_t cy_ble_iascConfig;
#endif /* CY_BLE_IAS_CLIENT */

#ifdef CY_BLE_IPS_SERVER
extern const cy_stc_ble_ipss_t cy_ble_ipss;
extern const cy_stc_ble_ipss_config_t cy_ble_ipssConfig;
#endif /* CY_BLE_IPS_SERVER */
#ifdef CY_BLE_IPS_CLIENT
extern cy_stc_ble_ipsc_t cy_ble_ipsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_ipsc_config_t cy_ble_ipscConfig;
#endif /* CY_BLE_IPS_CLIENT */

#ifdef CY_BLE_LLS_SERVER
extern const cy_stc_ble_llss_t cy_ble_llss;
extern const cy_stc_ble_llss_config_t cy_ble_llssConfig;
#endif /* CY_BLE_LLS_SERVER */
#ifdef CY_BLE_LLS_CLIENT
extern cy_stc_ble_llsc_t cy_ble_llsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_llsc_config_t cy_ble_llscConfig;
#endif /* CY_BLE_LLS_CLIENT */

#ifdef CY_BLE_LNS_SERVER
extern const cy_stc_ble_lnss_t cy_ble_lnss;
extern const cy_stc_ble_lnss_config_t cy_ble_lnssConfig;
#endif /* CY_BLE_LNS_SERVER */
#ifdef CY_BLE_LNS_CLIENT
extern cy_stc_ble_lnsc_t cy_ble_lnsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_lnsc_config_t cy_ble_lnscConfig;
#endif /* CY_BLE_LNS_CLIENT */

#ifdef CY_BLE_NDCS_SERVER
extern const cy_stc_ble_ndcss_t cy_ble_ndcss;
extern const cy_stc_ble_ndcss_config_t cy_ble_ndcssConfig;
#endif /* CY_BLE_NDCS_SERVER */
#ifdef CY_BLE_NDCS_CLIENT
extern cy_stc_ble_ndcsc_t cy_ble_ndcsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_ndcsc_config_t cy_ble_ndcscConfig;
#endif /* CY_BLE_NDCS_CLIENT */

#ifdef CY_BLE_PASS_SERVER
extern const cy_stc_ble_passs_t cy_ble_passs;
extern const cy_stc_ble_passs_config_t cy_ble_passsConfig;
#endif /* CY_BLE_PASS_SERVER */
#ifdef CY_BLE_PASS_CLIENT
extern cy_stc_ble_passc_t cy_ble_passc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_passc_config_t cy_ble_passcConfig;
#endif /* CY_BLE_PASS_CLIENT */

#ifdef CY_BLE_PLXS_SERVER
extern const cy_stc_ble_plxss_t cy_ble_plxss;
extern const cy_stc_ble_plxss_config_t cy_ble_plxssConfig;
#endif /* CY_BLE_PLXS_SERVER */
#ifdef CY_BLE_PLXS_CLIENT
extern cy_stc_ble_plxsc_t cy_ble_plxsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_plxsc_config_t cy_ble_plxscConfig;
#endif /* CY_BLE_PLXS_CLIENT */

#ifdef CY_BLE_RSCS_SERVER
extern const cy_stc_ble_rscss_t cy_ble_rscss;
extern const cy_stc_ble_rscss_config_t cy_ble_rscssConfig;
#endif /* CY_BLE_RSCS_SERVER */
#ifdef CY_BLE_RSCS_CLIENT
extern cy_stc_ble_rscsc_t cy_ble_rscsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_rscsc_config_t cy_ble_rscscConfig;
#endif /* CY_BLE_RSCS_CLIENT */

#ifdef CY_BLE_RTUS_SERVER
extern const cy_stc_ble_rtuss_t cy_ble_rtuss;
extern const cy_stc_ble_rtuss_config_t cy_ble_rtussConfig;
#endif /* CY_BLE_RTUS_SERVER */
#ifdef CY_BLE_RTUS_CLIENT
extern cy_stc_ble_rtusc_t cy_ble_rtusc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_rtusc_config_t cy_ble_rtuscConfig;
#endif /* CY_BLE_RTUS_CLIENT */

#ifdef CY_BLE_SCPS_SERVER
extern const cy_stc_ble_scpss_t cy_ble_scpss;
extern const cy_stc_ble_scpss_config_t cy_ble_scpssConfig;
#endif /* CY_BLE_SCPS_SERVER */
#ifdef CY_BLE_SCPS_CLIENT
extern cy_stc_ble_scpsc_t cy_ble_scpsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_scpsc_config_t cy_ble_scpscConfig;
#endif /* CY_BLE_SCPS_CLIENT */

#ifdef CY_BLE_TPS_SERVER
extern const cy_stc_ble_tpss_t cy_ble_tpss;
extern const cy_stc_ble_tpss_config_t cy_ble_tpssConfig;
#endif /* CY_BLE_TPS_SERVER */
#ifdef CY_BLE_TPS_CLIENT
extern cy_stc_ble_tpsc_t cy_ble_tpsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_tpsc_config_t cy_ble_tpscConfig;
#endif /* CY_BLE_TPS_CLIENT */

#ifdef CY_BLE_UDS_SERVER
extern const cy_stc_ble_udss_t cy_ble_udss;
extern const cy_stc_ble_udss_config_t cy_ble_udssConfig;
#endif /* CY_BLE_UDS_SERVER */
#ifdef CY_BLE_UDS_CLIENT
extern cy_stc_ble_udsc_t cy_ble_udsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_udsc_config_t cy_ble_udscConfig;
#endif /* CY_BLE_UDS_CLIENT */

#ifdef CY_BLE_WPTS_SERVER
extern const cy_stc_ble_wptss_t cy_ble_wptss;
extern const cy_stc_ble_wptss_config_t cy_ble_wptssConfig;
#endif /* CY_BLE_WPTS_SERVER */
#ifdef CY_BLE_WPTS_CLIENT
extern cy_stc_ble_wptsc_t cy_ble_wptsc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_wptsc_config_t cy_ble_wptscConfig;
#endif /* CY_BLE_WPTS_CLIENT */

#ifdef CY_BLE_WSS_SERVER
extern const cy_stc_ble_wsss_t cy_ble_wsss;
extern const cy_stc_ble_wsss_config_t cy_ble_wsssConfig;
#endif /* CY_BLE_WSS_SERVER */
#ifdef CY_BLE_WSS_CLIENT
extern cy_stc_ble_wssc_t cy_ble_wssc[CY_BLE_GATTC_COUNT];
extern const cy_stc_ble_wssc_config_t cy_ble_wsscConfig;
#endif /* CY_BLE_WSS_CLIENT */

#endif /* defined(COMPONENT_BLESS_CONTROLLER) || defined(COMPONENT_BLESS_HOST) ... */

/*
BLE_CONFIG_START

BLE_CONFIG_END
*/

#endif /* CYCFG_BLE_H */

/* [] END OF FILE */

