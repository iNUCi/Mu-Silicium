#!/bin/bash

# Build an Android kernel that is actually UEFI disguised as the Kernel
cat ./BootShim/BootShim.bin "./Build/gta4lPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/GTA4L_UEFI.fd" > "./Build/gta4lPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/GTA4L_UEFI.fd-bootshim"||exit 1
gzip -c < "./Build/gta4lPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/GTA4L_UEFI.fd-bootshim" > "./Build/gta4lPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/GTA4L_UEFI.fd-bootshim.gz"||exit 1
cat "./Build/gta4lPkg/${TARGET_BUILD_MODE}_CLANGPDB/FV/GTA4L_UEFI.fd-bootshim.gz" ./Resources/DTBs/gta4l.dtb > ./Resources/bootpayload.bin||exit 1

# Create bootable Android boot.img
python3 ./Resources/Scripts/mkbootimg.py \
  --kernel ./Resources/bootpayload.bin \
  --ramdisk ./Resources/ramdisk \
  --kernel_offset 0x00000000 \
  --ramdisk_offset 0x00000000 \
  --tags_offset 0x00000000 \
  --os_version 13.0.0 \
  --os_patch_level "$(date '+%Y-%m')" \
  --header_version 1 \
  -o boot.img \
  ||_error "\nFailed to create Android Boot Image!\n"

# Compress Boot Image in a tar File for Odin/heimdall Flash
tar -c boot.img -f Mu-gta4l.tar||exit 1
mv boot.img Mu-gta4l.img||exit 1