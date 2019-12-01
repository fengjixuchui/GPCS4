#include "GnmCommandBuffer.h"
#include "../Gve/GveContext.h"
#include "../Gve/GveResourceManager.h"
#include "../Gve/GveCmdList.h"
#include "../Gve/GveDevice.h"

GnmCommandBuffer::GnmCommandBuffer(const RcPtr<gve::GveDevice>& device):
	m_device(device),
	m_cmd(m_device->createCmdList()),
	m_context(m_device->createContext())
{
}

GnmCommandBuffer::~GnmCommandBuffer()
{
}

RcPtr<gve::GveCmdList> GnmCommandBuffer::getCmdList()
{
	return m_cmd;
}
