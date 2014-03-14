#include <iostream>
#include <boost/lockfree/queue.hpp>
#include <boost/atomic/atomic.hpp>
#include <boost/log/trivial.hpp>


boost::asio::io_service* service = nullptr;
