  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/SecShareInfoDxe/SecShareInfoDxe.inf

  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/gts8p/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/gts8p/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/gts8p/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/gts8p/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/gts8p/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/gts8p/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf

  INF Binaries/gts8p/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF Binaries/gts8p/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/gts8p/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/gts8p/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/gts8p/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/gts8p/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/gts8p/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/gts8p/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf

  INF Binaries/gts8p/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/gts8p/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/ParserDxe/ParserDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SerialPortDxe/SerialPortDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/SecEnvDxe/SecEnvDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/BoardInfoDxe/BoardInfoDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/RedriverDxe/RedriverDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/VibDxe/VibDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/SubPmicDxe/SubPmicDxe.inf
  INF Binaries/gts8p/QcomPkg/Drivers/SamsungDxe/GuidedFvDxe/GuidedFvDxe.inf
