#include "main.hpp"

using namespace Updater;
using namespace UpdaterAPI;

UpdaterBody *GetBody(bool flag, UPDATER_ACTION_MODE mode, firmware_information_t::information *info)
{
    return new UpdaterBodyImpl;
}

void ReleaseBody(UpdaterBody *body)
{
    delete body;
}

bool UpdaterBodyImpl::Execute(RingBuffer *buffer, CallbackInterface *interface)
{
    return true;
}
