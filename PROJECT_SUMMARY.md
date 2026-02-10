# Cache Memory Simulator - Project Summary

## 🎯 Project Overview
This project is a functional simulation of a CPU Cache Memory system. It demonstrates the fundamental logic used by processors to reduce memory access latency by storing recently accessed data in a faster, smaller memory tier.

## 📁 Files Included
1. **cache_simulator.c** - C implementation of the mapping and hit/miss logic.
2. **README.md** - Documentation and compilation guide.
3. **TEST_CASES.md** - Validation scenarios for hit/miss ratios.

## ✨ Key Features
- ✅ **Direct-Mapped Architecture**: Simulates the simplest and most common cache mapping technique.
- ✅ **Address Decomposition**: Automatically splits memory addresses into Tag and Index bits.
- ✅ **Hit/Miss Analysis**: Real-time tracking and reporting of cache performance.
- ✅ **Performance Metrics**: Calculates the Hit Rate percentage to evaluate efficiency.

## 🎓 Skills Demonstrated
### Computer Architecture
- Understanding of **Memory Hierarchy** (L1 Cache vs. Main Memory).
- Implementation of **Temporal and Spatial Locality** principles.
- Knowledge of **Cache Mapping Policies** and collision handling.

### Programming & Systems
- Use of bitwise logic and modulo arithmetic for address mapping.
- Data structure management using C structs and arrays.
- Modular code design for system simulation.

## 📈 AMD Relevance
Cache optimization is a core component of AMD's "Zen" architecture. This project showcases an understanding of the performance bottlenecks AMD engineers solve daily, such as minimizing the "Average Memory Access Time" (AMAT).