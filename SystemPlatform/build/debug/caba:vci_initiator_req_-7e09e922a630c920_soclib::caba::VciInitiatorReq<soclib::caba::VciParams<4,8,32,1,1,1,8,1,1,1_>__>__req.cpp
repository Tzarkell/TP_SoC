#include "vci_buffers.h"
#include "mapping_table.h"
#include "address_masking_table.h"
#include "vci_param.h"
#include "int_tab.h"
#include "address_decoding_table.h"
#include "vci_initiator.h"
#include "exception.h"
#include "dpp_placeholder.h"
#include "caba_base_module.h"
#include "vci_initiator_fsm.h"
#include "base_module.h"
#include "segment.h"
#include "/softl1/TPSoC3A/Simulation/SoCLib/soclib/soclib/lib/vci_initiator_req/src/caba/vci/vci_initiator/req.cpp"
#ifndef ENABLE_SCPARSE
template class soclib::caba::VciInitiatorReq<soclib::caba::VciParams<4,8,32,1,1,1,8,1,1,1 >  > ;
#endif
