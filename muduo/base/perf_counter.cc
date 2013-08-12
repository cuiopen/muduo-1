#include "perf_counter.h"

namespace muduo {
  std::atomic<unsigned long long> perf_counter::last_io_events = ATOMIC_VAR_INIT(0);
  std::atomic<unsigned long long> perf_counter::last_loop_time = ATOMIC_VAR_INIT(0);
}
