# Cache Simulator Test Cases

Use these scenarios to validate the hit/miss logic of the simulator.

## Test Case 1: Cold Start (Compulsory Misses)
**Input sequence:** `1, 2, 3, 4`
- **Expected Behavior:** Every access is a MISS because the cache starts empty.
- **Metric:** 0% Hit Rate.

## Test Case 2: Temporal Locality (Cache Hits)
**Input sequence:** `1, 2, 1, 2`
- **Expected Behavior:** - Access 1 & 2: MISS (initial load).
  - Access 1 & 2 (Repeat): HIT (data retrieved from cache).
- **Metric:** 50% Hit Rate.



## Test Case 3: Spatial Locality
**Input sequence:** `16, 17, 18`
- **Expected Behavior:** In a direct-mapped cache with 16 blocks, these will map to different indexes (0, 1, 2), resulting in MISSES initially but leaving the cache primed for future hits.

## Test Case 4: Conflict Misses (Thrashing)
**Input sequence:** `1, 17, 1, 17`
- **Expected Behavior:**
  - Both 1 and 17 map to Index 1 (`1 % 16 = 1` and `17 % 16 = 1`).
  - Every access will be a MISS because they constantly overwrite each other.
- **Goal:** Demonstrates the primary weakness of Direct-Mapped caches.

## Test Case 5: Real-World Pattern
**Input sequence:** `1, 2, 3, 1, 2, 17, 33, 1`
- **Expected Behavior:** - Hits on the repeated `1` and `2`.
  - Misses on new addresses and conflicts (like `17` or `33` replacing `1`).
- **Goal:** Standard performance evaluation.