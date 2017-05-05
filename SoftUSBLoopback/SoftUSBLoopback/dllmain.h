// dllmain.h : Declaration of module class.

class CSoftUSBLoopbackModule : public ATL::CAtlDllModuleT< CSoftUSBLoopbackModule >
{
public :
	DECLARE_LIBID(LIBID_SoftUSBLoopbackLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SOFTUSBLOOPBACK, "{A04C05FA-8498-452A-AA50-C4AC2E52F416}")
};

extern class CSoftUSBLoopbackModule _AtlModule;
