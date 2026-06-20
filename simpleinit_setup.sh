#!/bin/bash
# SimpleInit setup
export CROSS_COMPILE=aarch64-linux-gnu-
for i in "${SIMPLE_INIT}" simple-init
do
	if [ -n "${i}" ]&&[ -f "${i}/SimpleInit.inc" ]
	then
		_SIMPLE_INIT="$(realpath "${i}")"
		break
	fi
done

mkdir -p "${_SIMPLE_INIT}/build" "${_SIMPLE_INIT}/root/usr/share/locale"
for i in "${_SIMPLE_INIT}/po/"*.po
do
	[ -f "${i}" ]||continue
	_name="$(basename "$i" .po)"
	_path="${_SIMPLE_INIT}/root/usr/share/locale/${_name}/LC_MESSAGES"
	mkdir -p "${_path}"
	msgfmt -o "${_path}/simple-init.mo" "${i}"
done

bash "${_SIMPLE_INIT}/scripts/gen-rootfs-source.sh" \
	"${_SIMPLE_INIT}" \
	"${_SIMPLE_INIT}/build"
