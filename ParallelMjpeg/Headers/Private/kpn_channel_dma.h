#include "/softslin/TPSoC3A/Simulation/Apes/Components/KahnProcessNetworkLibrary/Headers/Public/KahnProcessNetwork/KahnProcessNetwork.h"

kpn_status_t kpn_channel_write_dma (kpn_channel_t c, void * data, int32_t size);
kpn_status_t kpn_channel_read_dma (kpn_channel_t c, void * data, int32_t size);
