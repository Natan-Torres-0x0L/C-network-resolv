#ifndef _NETWORK_RESOLV_RESOLV_ERRORS_H
#define _NETWORK_RESOLV_RESOLV_ERRORS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <syscall-errno/syscall-errno.h>


typedef enum {
  RESOLV_EUNKNOWN = -14, RESOLV_ESYSCALL, RESOLV_ESOCKET, RESOLV_ENORECORD, RESOLV_ENOTZONE, RESOLV_ENOTAUTH, RESOLV_ENXERSET,
  RESOLV_EYXRRSET, RESOLV_EYXDOMAIN, RESOLV_EREFUSED, RESOLV_ENOTIMP, RESOLV_ENXDOMAIN, RESOLV_ESERVFAIL, RESOLV_EFORMER,
} resolv_error_t;


extern const char *resolv_getstrerror(resolv_error_t);
extern resolv_error_t resolv_geterror(void);
extern void resolv_seterror(resolv_error_t);

#ifdef __cplusplus
}
#endif

#endif
