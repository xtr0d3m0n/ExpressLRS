#pragma once

#define ELRS_TELEMETRY_TYPE_LINK 0x01
#define ELRS_TELEMETRY_TYPE_DATA 0x02
#define ELRS_TELEMETRY_TYPE_MASK 0x03
#define ELRS_TELEMETRY_SHIFT 2
#define ELRS_TELEMETRY_BYTES_PER_CALL 5
#define ELRS_TELEMETRY_MAX_PACKAGES (255 >> ELRS_TELEMETRY_SHIFT)

#define ELRS_MSP_BYTES_PER_CALL 5
#define ELRS_MSP_MAX_PACKAGES 4
#define ELRS_MSP_BUFFER 15
#define ELRS_MSP_REQ_TIMEOUT_MS 1000
