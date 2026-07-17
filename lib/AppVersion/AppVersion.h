#pragma once

// PlatformIO normally supplies these through build_flags/extra_scripts. Keep
// fallbacks here so editor indexers and simulator-like tools still parse files.
#ifndef CROSSANX_VERSION
#define CROSSANX_VERSION "dev"
#endif

#ifndef CROSSANX_BUILD_ENV
#define CROSSANX_BUILD_ENV "unknown"
#endif

#ifndef CROSSINK_FIRMWARE_VARIANT
#ifdef CROSSPOINT_FIRMWARE_VARIANT
#define CROSSINK_FIRMWARE_VARIANT CROSSPOINT_FIRMWARE_VARIANT
#else
#define CROSSINK_FIRMWARE_VARIANT "unknown"
#endif
#endif
