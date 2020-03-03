
#include "h265_buffer_sink.h"

sld::lib::net::rtsp::client::h265_buffer_sink::h265_buffer_sink(sld::lib::net::rtsp::client::core * front, UsageEnvironment & env, const char * vps, unsigned vps_size, const char * sps, unsigned sps_size, const char * pps, unsigned pps_size, unsigned buffer_size)
	: sld::lib::net::rtsp::client::h2645_buffer_sink(front, sld::lib::net::rtsp::client::video_codec_t::hevc, env, vps, vps_size, sps, sps_size, pps, pps_size, buffer_size)
{

}

sld::lib::net::rtsp::client::h265_buffer_sink::~h265_buffer_sink(void)
{

}

sld::lib::net::rtsp::client::h265_buffer_sink * sld::lib::net::rtsp::client::h265_buffer_sink::createNew(sld::lib::net::rtsp::client::core * front, UsageEnvironment & env, const char * vps, unsigned vps_size, const char * sps, unsigned sps_size, const char * pps, unsigned pps_size, unsigned buffer_size)
{
	return new h265_buffer_sink(front, env, vps, vps_size, sps, sps_size, pps, pps_size, buffer_size);
}