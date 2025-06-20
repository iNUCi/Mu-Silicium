  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/nx729j/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/ParserDxe/ParserDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/SerialPortDxe/SerialPortDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/nx729j/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/nx729j/QcomPkg/Drivers/TzDxe/ScmDxeCompat.inf
  INF Binaries/nx729j/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  INF Binaries/nx729j/QcomPkg/Drivers/PsStateDxe/PsStateDxe.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/nx729j/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/nx729j/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  #INF Binaries/nx729j/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF Binaries/nx729j/MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF Binaries/nx729j/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF Binaries/nx729j/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/nx729j/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  
  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf
  
  INF Binaries/nx729j/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  
  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/nx729j/QcomPkg/Drivers/RscDxe/RscDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/nx729j/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/nx729j/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/nx729j/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/nx729j/QcomPkg/Drivers/QRKSDxe/QRKSDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/nx729j/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf
  
  INF Binaries/nx729j/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/nx729j/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/nx729j/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
