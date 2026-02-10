"# cache_simulator" 
🎯 Project Overview
This project is a functional simulation of a CPU Cache Memory system implemented in C. It demonstrates the fundamental logic used by modern processors to bridge the speed gap between fast CPU cores and slower Main Memory.

📁 Files Included
cache_simulator.c - C implementation of the mapping and hit/miss logic.

README.md - Comprehensive project documentation and performance analysis.

✨ Key Technical Features
Direct-Mapped Architecture: Implements the standard method of mapping memory blocks to cache lines using index and tag decomposition.

Address Decomposition: Automatically splits memory addresses into Tag and Index for rapid hardware lookup.

Replacement Policy: Implements a write-allocate policy where misses trigger an automatic cache update.

Performance Metrics: Real-time tracking and reporting of Hits, Misses, and the Hit Rate percentage.

🛠️ Compilation and Execution
To compile the simulator using GCC:

Bash
gcc cache_simulator.c -o cache_simulator
To run the simulation:

Bash
./cache_simulator
🎓 Skills Demonstrated
Computer Architecture: Deep understanding of the memory hierarchy and the roles of L1, L2, and L3 caches.

Performance Analysis: Quantitative evaluation of hardware efficiency through Hit/Miss ratios.

Systems Programming: Proficiency in using C for low-level system simulations and bitwise-style logic.

🧪 Simulation Test Cases
Use these scenarios to validate the logic of the simulator:

Test Case 1: Cold Start (Compulsory Misses)
Input: 1, 2, 3, 4

Expected Result: 4 Misses.

Reason: The cache starts empty; every unique address must be loaded once from main memory.

Test Case 2: Temporal Locality (Hits)
Input: 5, 5, 5, 5

Expected Result: 1 Miss, 3 Hits.

Reason: After the first miss, address 5 is stored in the cache. Subsequent accesses result in immediate hits.

Test Case 3: Conflict Misses (Thrashing)
Input: 1, 17, 1, 17 (Assuming a 16-block cache)

Expected Result: 4 Misses.

Reason: Both addresses map to index 1 (1 % 16 = 1 and 17 % 16 = 1). Because they share the same index, they constantly overwrite each other.
