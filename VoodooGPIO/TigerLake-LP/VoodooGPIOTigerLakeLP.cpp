#include "VoodooGPIOTigerLakeLP.hpp"

OSDefineMetaClassAndStructors(VoodooGPIOTigerLakeLP, VoodooGPIO);

bool VoodooGPIOTigerLakeLP::start(IOService *provider) {
    this->pins = tgllp_pins;
    this->npins = ARRAY_SIZE(tgllp_pins);
    this->groups = tgllp_groups;
    this->ngroups = ARRAY_SIZE(tgllp_groups);
    this->functions = tgllp_functions;
    this->nfunctions = ARRAY_SIZE(tgllp_functions);
    this->communities = tgllp_communities;
    this->ncommunities = ARRAY_SIZE(tgllp_communities);

    IOLog("%s::Loading GPIO Data for TigerLake-LP\n", getName());

    return VoodooGPIO::start(provider);
}
