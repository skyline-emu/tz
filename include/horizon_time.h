#ifndef TIME_H
#define TIME_H

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/types.h>	/* for time_t */

typedef struct state *tz_timezone_t;
extern struct tm *tz_localtime_rz(tz_timezone_t, time_t const *, struct tm *);
extern time_t tz_mktime_z(tz_timezone_t, struct tm *);
extern tz_timezone_t tz_tzalloc(unsigned char *, long);
extern void tz_tzfree(tz_timezone_t);

#ifdef __cplusplus
}
#endif

#endif /* !defined TIME_H */
