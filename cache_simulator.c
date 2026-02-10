#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define CACHE_SIZE 16  // 16 blocks
#define MEMORY_SIZE 256 // Simple 8-bit address space for demonstration

typedef struct {
    int tag;
    bool valid;
    int data; // Simulating a single word per block
} CacheLine;

CacheLine cache[CACHE_SIZE];
int hits = 0;
int misses = 0;

void init_cache() {
    for (int i = 0; i < CACHE_SIZE; i++) {
        cache[i].valid = false;
        cache[i].tag = -1;
    }
}

void access_cache(int address) {
    // For a 16-block cache, Index = address % 16
    // Tag = address / 16
    int index = address % CACHE_SIZE;
    int tag = address / CACHE_SIZE;

    printf("Accessing Address %d: [Tag: %d, Index: %d] -> ", address, tag, index);

    if (cache[index].valid && cache[index].tag == tag) {
        hits++;
        printf("HIT!\n");
    } else {
        misses++;
        printf("MISS! (Loading into Cache)\n");
        // Update cache line (Write-allocate policy)
        cache[index].valid = true;
        cache[index].tag = tag;
    }
}

void print_stats() {
    float total = hits + misses;
    printf("\n--- Simulation Statistics ---\n");
    printf("Total Accesses: %d\n", (int)total);
    printf("Hits: %d\n", hits);
    printf("Misses: %d\n", misses);
    printf("Hit Rate: %.2f%%\n", (hits / total) * 100);
    printf("-----------------------------\n");
}

int main() {
    init_cache();
    
    // Simulated memory access pattern (Temporal/Spatial Locality)
    int sequence[] = {1, 2, 3, 1, 2, 17, 33, 1}; 
    int n = sizeof(sequence) / sizeof(sequence[0]);

    printf("Starting Cache Simulation...\n\n");
    for (int i = 0; i < n; i++) {
        access_cache(sequence[i]);
    }

    print_stats();
    return 0;
}