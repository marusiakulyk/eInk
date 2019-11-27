CY_COMPONENT_LIST:=BLESS_CONTROLLER BLESS_HOST BSP_DESIGN_MODUS CM0P_SLEEP CM4 EMWIN_OSNTS SOFTFP
CY_SEARCH_APP_SOURCE:=./CypressLogo.c ./GeneratedSource/cycfg_ble.c ./ble_update.c ./eInkTask.c ./eInk_Library/cy_eink_library.c ./eInk_Library/cy_eink_psoc_interface.c ./eInk_Library/pervasive_eink_hardware_driver.c ./emwin_config/GUIConf.c ./emwin_config/GUI_X_FreeRTOS.c ./emwin_config/LCDConf.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_capsense.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_clocks.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_peripherals.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_pins.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_qspi_memslot.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_routing.c ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource/cycfg_system.c ./libs/TARGET_CY8CKIT-062-BLE/cybsp.c ./libs/TARGET_CY8CKIT-062-BLE/startup/TOOLCHAIN_GCC_ARM/startup_psoc6_01_cm4.S ./libs/TARGET_CY8CKIT-062-BLE/startup/system_psoc6_cm4.c ./libs/bless/common/cy_ble_common.c ./libs/bless/cy_ble.c ./libs/bless/cy_ble_aios.c ./libs/bless/cy_ble_ancs.c ./libs/bless/cy_ble_ans.c ./libs/bless/cy_ble_bas.c ./libs/bless/cy_ble_bcs.c ./libs/bless/cy_ble_bls.c ./libs/bless/cy_ble_bms.c ./libs/bless/cy_ble_bts.c ./libs/bless/cy_ble_cgms.c ./libs/bless/cy_ble_controller.c ./libs/bless/cy_ble_cps.c ./libs/bless/cy_ble_cscs.c ./libs/bless/cy_ble_cts.c ./libs/bless/cy_ble_custom.c ./libs/bless/cy_ble_dis.c ./libs/bless/cy_ble_ess.c ./libs/bless/cy_ble_event_handler.c ./libs/bless/cy_ble_gap.c ./libs/bless/cy_ble_gatt.c ./libs/bless/cy_ble_gls.c ./libs/bless/cy_ble_hal_int.c ./libs/bless/cy_ble_hal_pvt.c ./libs/bless/cy_ble_hids.c ./libs/bless/cy_ble_hps.c ./libs/bless/cy_ble_hrs.c ./libs/bless/cy_ble_hts.c ./libs/bless/cy_ble_ias.c ./libs/bless/cy_ble_ips.c ./libs/bless/cy_ble_lls.c ./libs/bless/cy_ble_lns.c ./libs/bless/cy_ble_ndcs.c ./libs/bless/cy_ble_pass.c ./libs/bless/cy_ble_plxs.c ./libs/bless/cy_ble_rscs.c ./libs/bless/cy_ble_rtus.c ./libs/bless/cy_ble_scps.c ./libs/bless/cy_ble_tps.c ./libs/bless/cy_ble_uds.c ./libs/bless/cy_ble_wpts.c ./libs/bless/cy_ble_wss.c ./libs/capsense/cy_capsense_centroid.c ./libs/capsense/cy_capsense_control.c ./libs/capsense/cy_capsense_csd.c ./libs/capsense/cy_capsense_csx.c ./libs/capsense/cy_capsense_filter.c ./libs/capsense/cy_capsense_processing.c ./libs/capsense/cy_capsense_sensing.c ./libs/capsense/cy_capsense_structure.c ./libs/capsense/cy_capsense_tuner.c ./libs/freertos/Source/croutine.c ./libs/freertos/Source/event_groups.c ./libs/freertos/Source/list.c ./libs/freertos/Source/portable/MemMang/heap_1.c ./libs/freertos/Source/portable/MemMang/heap_2.c ./libs/freertos/Source/portable/MemMang/heap_3.c ./libs/freertos/Source/portable/MemMang/heap_4.c ./libs/freertos/Source/portable/MemMang/heap_5.c ./libs/freertos/Source/portable/TOOLCHAIN_GCC_ARM/CM4F/port.c ./libs/freertos/Source/queue.c ./libs/freertos/Source/stream_buffer.c ./libs/freertos/Source/tasks.c ./libs/freertos/Source/timers.c ./libs/psoc6cm0p/COMPONENT_CM0P_SLEEP/psoc6_01_cm0p_sleep.c ./libs/psoc6cm0p/COMPONENT_CM0P_SLEEP/psoc6_02_cm0p_sleep.c ./libs/psoc6cm0p/COMPONENT_CM0P_SLEEP/psoc6_03_cm0p_sleep.c ./libs/psoc6hal/src/cyhal_adc.c ./libs/psoc6hal/src/cyhal_analog_common.c ./libs/psoc6hal/src/cyhal_crc.c ./libs/psoc6hal/src/cyhal_crypto_common.c ./libs/psoc6hal/src/cyhal_dac.c ./libs/psoc6hal/src/cyhal_flash.c ./libs/psoc6hal/src/cyhal_gpio.c ./libs/psoc6hal/src/cyhal_hwmgr.c ./libs/psoc6hal/src/cyhal_i2c.c ./libs/psoc6hal/src/cyhal_interconnect.c ./libs/psoc6hal/src/cyhal_lptimer.c ./libs/psoc6hal/src/cyhal_not_implemented.c ./libs/psoc6hal/src/cyhal_pwm.c ./libs/psoc6hal/src/cyhal_qspi.c ./libs/psoc6hal/src/cyhal_rtc.c ./libs/psoc6hal/src/cyhal_scb_common.c ./libs/psoc6hal/src/cyhal_sdhc.c ./libs/psoc6hal/src/cyhal_spi.c ./libs/psoc6hal/src/cyhal_system.c ./libs/psoc6hal/src/cyhal_tcpwm_common.c ./libs/psoc6hal/src/cyhal_timer.c ./libs/psoc6hal/src/cyhal_trng.c ./libs/psoc6hal/src/cyhal_uart.c ./libs/psoc6hal/src/cyhal_udb_sdio.c ./libs/psoc6hal/src/cyhal_usb_dev.c ./libs/psoc6hal/src/cyhal_utils.c ./libs/psoc6hal/src/cyhal_wdt.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_104_m_csp_ble.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_104_m_csp_ble_usb.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_116_bga_ble.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_116_bga_usb.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_124_bga.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_124_bga_sip.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_43_smt.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_68_qfn_ble.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_01_80_wlcsp.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_02_100_wlcsp.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_02_124_bga.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_02_128_tqfp.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_02_68_qfn.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_03_100_tqfp.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_03_49_wlcsp.c ./libs/psoc6hal/src/pin_packages/cyhal_psoc6_03_68_qfn.c ./libs/psoc6pdl/drivers/source/TOOLCHAIN_GCC_ARM/cy_syslib_gcc.S ./libs/psoc6pdl/drivers/source/cy_ble_clk.c ./libs/psoc6pdl/drivers/source/cy_canfd.c ./libs/psoc6pdl/drivers/source/cy_crypto.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_aes_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_aes_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_cmac_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_cmac_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_crc_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_crc_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_des_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_des_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_ecc_domain_params.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_ecc_ecdsa.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_ecc_key_gen.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_ecc_nist_p.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_hmac_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_hmac_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_hw.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_hw_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_mem_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_mem_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_prng_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_prng_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_rsa.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_sha_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_sha_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_trng_v1.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_trng_v2.c ./libs/psoc6pdl/drivers/source/cy_crypto_core_vu.c ./libs/psoc6pdl/drivers/source/cy_crypto_server.c ./libs/psoc6pdl/drivers/source/cy_csd.c ./libs/psoc6pdl/drivers/source/cy_ctb.c ./libs/psoc6pdl/drivers/source/cy_ctdac.c ./libs/psoc6pdl/drivers/source/cy_device.c ./libs/psoc6pdl/drivers/source/cy_dma.c ./libs/psoc6pdl/drivers/source/cy_dmac.c ./libs/psoc6pdl/drivers/source/cy_efuse.c ./libs/psoc6pdl/drivers/source/cy_flash.c ./libs/psoc6pdl/drivers/source/cy_gpio.c ./libs/psoc6pdl/drivers/source/cy_i2s.c ./libs/psoc6pdl/drivers/source/cy_ipc_drv.c ./libs/psoc6pdl/drivers/source/cy_ipc_pipe.c ./libs/psoc6pdl/drivers/source/cy_ipc_sema.c ./libs/psoc6pdl/drivers/source/cy_lpcomp.c ./libs/psoc6pdl/drivers/source/cy_lvd.c ./libs/psoc6pdl/drivers/source/cy_mcwdt.c ./libs/psoc6pdl/drivers/source/cy_pdm_pcm.c ./libs/psoc6pdl/drivers/source/cy_profile.c ./libs/psoc6pdl/drivers/source/cy_prot.c ./libs/psoc6pdl/drivers/source/cy_rtc.c ./libs/psoc6pdl/drivers/source/cy_sar.c ./libs/psoc6pdl/drivers/source/cy_scb_common.c ./libs/psoc6pdl/drivers/source/cy_scb_ezi2c.c ./libs/psoc6pdl/drivers/source/cy_scb_i2c.c ./libs/psoc6pdl/drivers/source/cy_scb_spi.c ./libs/psoc6pdl/drivers/source/cy_scb_uart.c ./libs/psoc6pdl/drivers/source/cy_sd_host.c ./libs/psoc6pdl/drivers/source/cy_seglcd.c ./libs/psoc6pdl/drivers/source/cy_smartio.c ./libs/psoc6pdl/drivers/source/cy_smif.c ./libs/psoc6pdl/drivers/source/cy_smif_memslot.c ./libs/psoc6pdl/drivers/source/cy_sysanalog.c ./libs/psoc6pdl/drivers/source/cy_sysclk.c ./libs/psoc6pdl/drivers/source/cy_sysint.c ./libs/psoc6pdl/drivers/source/cy_syslib.c ./libs/psoc6pdl/drivers/source/cy_syspm.c ./libs/psoc6pdl/drivers/source/cy_systick.c ./libs/psoc6pdl/drivers/source/cy_tcpwm_counter.c ./libs/psoc6pdl/drivers/source/cy_tcpwm_pwm.c ./libs/psoc6pdl/drivers/source/cy_tcpwm_quaddec.c ./libs/psoc6pdl/drivers/source/cy_trigmux.c ./libs/psoc6pdl/drivers/source/cy_usbfs_dev_drv.c ./libs/psoc6pdl/drivers/source/cy_usbfs_dev_drv_io.c ./libs/psoc6pdl/drivers/source/cy_usbfs_dev_drv_io_dma.c ./libs/psoc6pdl/drivers/source/cy_wdt.c ./libs/retarget-io/cy_retarget_io.c ./main.c
CY_SEARCH_APP_LIBS:=./libs/bless/COMPONENT_BLESS_CONTROLLER/COMPONENT_SOFTFP/TOOLCHAIN_GCC_ARM/cy_ble_stack_controller.a ./libs/bless/COMPONENT_BLESS_CONTROLLER/COMPONENT_SOFTFP/TOOLCHAIN_GCC_ARM/cy_ble_stack_manager.a ./libs/bless/COMPONENT_BLESS_HOST/COMPONENT_SOFTFP/TOOLCHAIN_GCC_ARM/cy_ble_stack_host.a ./libs/capsense/COMPONENT_SOFTFP/TOOLCHAIN_GCC_ARM/libcy_capsense.a ./libs/emwin/GUI/COMPONENT_SOFTFP/COMPONENT_EMWIN_OSNTS/TOOLCHAIN_GCC_ARM/libemWin_osnts_gcc.a
CY_SEARCH_APP_INCLUDES:=. ./GeneratedSource ./eInk_Library ./emwin_config ./libs ./libs/TARGET_CY8CKIT-062-BLE ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS ./libs/TARGET_CY8CKIT-062-BLE/COMPONENT_BSP_DESIGN_MODUS/GeneratedSource ./libs/TARGET_CY8CKIT-062-BLE/startup ./libs/bless ./libs/bless/common ./libs/capsense ./libs/core-lib ./libs/core-lib/include ./libs/emwin ./libs/emwin/GUI ./libs/emwin/GUI/COMPONENT_SOFTFP ./libs/emwin/GUI/COMPONENT_SOFTFP/COMPONENT_EMWIN_OSNTS ./libs/emwin/GUI/Include ./libs/freertos ./libs/freertos/Source ./libs/freertos/Source/include ./libs/freertos/Source/portable ./libs/freertos/Source/portable/TOOLCHAIN_GCC_ARM ./libs/freertos/Source/portable/TOOLCHAIN_GCC_ARM/CM4F ./libs/psoc6hal ./libs/psoc6hal/include ./libs/psoc6hal/include/pin_packages ./libs/psoc6pdl ./libs/psoc6pdl/cmsis ./libs/psoc6pdl/cmsis/include ./libs/psoc6pdl/devices ./libs/psoc6pdl/devices/include ./libs/psoc6pdl/devices/include/ip ./libs/psoc6pdl/drivers ./libs/psoc6pdl/drivers/include ./libs/retarget-io
