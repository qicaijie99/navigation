#!/usr/bin/env bash
set -euo pipefail

IFACE="${1:-eno1}"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
CONF_FILE="${SCRIPT_DIR}/ptp4l_software_master.conf"

if ! command -v ptp4l >/dev/null 2>&1; then
  echo "ptp4l not found. Install linuxptp first." >&2
  exit 127
fi

RUNNER=()
if [[ "${EUID}" -ne 0 ]]; then
  RUNNER=(sudo)
fi

exec "${RUNNER[@]}" ptp4l -f "${CONF_FILE}" -i "${IFACE}" -S -m
