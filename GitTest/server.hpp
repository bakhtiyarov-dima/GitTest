#include <boost/asio/basic_socket.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/lockfree/queue.hpp>
#include <vector>

class Socket_t
{
	boost::asio::ip::tcp::socket m_sock;
	boost::lockfree::queue<std::vector<uint8_t>> m_DataToSend;
};