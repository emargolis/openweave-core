/*
 *
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef ESP_UTILS_H
#define ESP_UTILS_H

#include <internal/WeaveDeviceInternal.h>
#include <Weave/Profiles/network-provisioning/NetworkProvisioning.h>

namespace nl {
namespace Weave {
namespace Device {
namespace Internal {

class ESPUtils
{
public:
    static WEAVE_ERROR IsAPEnabled(bool & apEnabled);
    static bool IsStationProvisioned(void);
    static WEAVE_ERROR IsStationConnected(bool & connected);
    static WEAVE_ERROR StartWiFiLayer(void);
    static WEAVE_ERROR EnableStationMode(void);
    static WEAVE_ERROR SetAPMode(bool enabled);
    static ::nl::Weave::Profiles::NetworkProvisioning::WiFiSecurityType WiFiAuthModeToWeaveWiFiSecurityType(wifi_auth_mode_t authMode);
    static int OrderScanResultsByRSSI(const void * _res1, const void * _res2);
    static const char * WiFiModeToStr(wifi_mode_t wifiMode);
    static struct netif * GetStationNetif(void);
    static const char * InterfaceIdToName(tcpip_adapter_if_t intfId);
};

} // namespace Internal
} // namespace Device
} // namespace Weave
} // namespace nl

#endif // ESP_UTILS_H