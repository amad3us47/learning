#include <stdlib.h>
#include <stdio.h>      // Needed for fprintf
#include <unistd.h>    // Needed for getpid

#define SLEEP_sec 1
#define NUM_MULS 10000000
#define NUM_MALLOCS 100000
#define MALLOC_SIZE 1000

struct profile_time {
    // You can add fields like timestamps here if needed
};

// Dummy function to simulate starting a profile timer
void profile_start(struct profile_time *t) {
    // No-op for now
}

// Dummy function to simulate logging
void profile_log(struct profile_time *t) {
    fprintf(stderr, "pid: %d\n", getpid());
}

int main(int argc, char *argv[]) {
    struct profile_time t;  // Fixed typo: struct name was incorrect

    float x = 1.0;

    // Memory allocation block
    profile_start(&t);
    for (int i = 0; i < NUM_MALLOCS; i++) {
        void *p = malloc(MALLOC_SIZE);  // Declare and assign p
        // Optionally use or free p here if needed to avoid leak
    }
    profile_log(&t);

    // Second profiling block
    profile_start(&t);
    profile_log(&t);

    return 0;
}
	 
