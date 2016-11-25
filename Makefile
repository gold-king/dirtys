CG = gcc
CL = clang
CFLAGS = -std=c99

all: gcc clang

gcc:
	@${CG} ${CFLAGS} -o g-environ environ.c
	@${CG} ${CFLAGS} -o g-randomnumber randomnumber.c
	@${CG} ${CFLAGS} -o g-showtime showtime.c
	@${CG} ${CFLAGS} -o g-sysinfo sysinfoprint.c
	@${CG} ${CFLAGS} -o g-tconvert tconvert.c

clang:
	@${CL} ${CFLAGS} -o c-environ environ.c
	@${CL} ${CFLAGS} -o c-randomnumber randomnumber.c
	@${CL} ${CFLAGS} -o c-showtime showtime.c
	@${CL} ${CFLAGS} -o c-sysinfo sysinfoprint.c
	@${CL} ${CFLAGS} -o c-tconvert tconvert.c

.PHONY: all gcc clang