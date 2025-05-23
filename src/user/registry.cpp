#include "registry.h"
#include <os/process.h>
#include <os/registry.h>

void Registry::Save()
{
    os::registry::WriteValue("ExecutableFilePath", os::process::GetExecutablePath());
}
