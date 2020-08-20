#include "hook.h"
extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT driver_object, PUNICODE_STRING reg_path)
{
	UNREFERENCED_PARAMETER(driver_object);
	UNREFERENCED_PARAMETER(reg_path);

	wirezhook::call_kernel_function(&wirezhook::hook_handler);

	return STATUS_SUCCESS;
}