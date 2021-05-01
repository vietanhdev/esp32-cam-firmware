/****************************************************************************************************************************
 * VIA Bot Wifi / Configuration
 * Initialized from ESPAsync_WiFiManager 1.7.1. https://github.com/khoih-prog/ESPAsync_WiFiManager
 *****************************************************************************************************************************/

#pragma once

#ifndef ESPAsync_WiFiManager_Debug_H
#define ESPAsync_WiFiManager_Debug_H

#ifdef ESPASYNC_WIFIMGR_DEBUG_PORT
  #define DBG_PORT_ESP_WM      ESPASYNC_WIFIMGR_DEBUG_PORT
#else
  #define DBG_PORT_ESP_WM      Serial
#endif

// Change _ESPASYNC_WIFIMGR_LOGLEVEL_ to set tracing and logging verbosity
// 0: DISABLED: no logging
// 1: ERROR: errors
// 2: WARN: errors and warnings
// 3: INFO: errors, warnings and informational (default)
// 4: DEBUG: errors, warnings, informational and debug

#ifndef _ESPASYNC_WIFIMGR_LOGLEVEL_
  #define _ESPASYNC_WIFIMGR_LOGLEVEL_       0
#endif

/////////////////////////////////////////////////////////

const char ESP_WM_MARK[] = "[WM] ";
const char ESP_WM_SP[]   = " ";

#define ESP_WM_PRINT        DBG_PORT_ESP_WM.print
#define ESP_WM_PRINTLN      DBG_PORT_ESP_WM.println

#define ESP_WM_PRINT_MARK   ESP_WM_PRINT(ESP_WM_MARK)
#define ESP_WM_PRINT_SP     ESP_WM_PRINT(ESP_WM_SP)



/////////////////////////////////////////////////////////

#define LOGERROR(x)         if(_ESPASYNC_WIFIMGR_LOGLEVEL_>0) { ESP_WM_PRINT_MARK; ESP_WM_PRINTLN(x); }
#define LOGERROR0(x)        if(_ESPASYNC_WIFIMGR_LOGLEVEL_>0) { ESP_WM_PRINT(x); }
#define LOGERROR1(x,y)      if(_ESPASYNC_WIFIMGR_LOGLEVEL_>0) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(y); }
#define LOGERROR2(x,y,z)    if(_ESPASYNC_WIFIMGR_LOGLEVEL_>0) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP;  ESP_WM_PRINTLN(z); }
#define LOGERROR3(x,y,z,w)  if(_ESPASYNC_WIFIMGR_LOGLEVEL_>0) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP; ESP_WM_PRINT(z); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define LOGWARN(x)          if(_ESPASYNC_WIFIMGR_LOGLEVEL_>1) { ESP_WM_PRINT_MARK; ESP_WM_PRINTLN(x); }
#define LOGWARN0(x)         if(_ESPASYNC_WIFIMGR_LOGLEVEL_>1) { ESP_WM_PRINT(x); }
#define LOGWARN1(x,y)       if(_ESPASYNC_WIFIMGR_LOGLEVEL_>1) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(y); }
#define LOGWARN2(x,y,z)     if(_ESPASYNC_WIFIMGR_LOGLEVEL_>1) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP;  ESP_WM_PRINTLN(z); }
#define LOGWARN3(x,y,z,w)   if(_ESPASYNC_WIFIMGR_LOGLEVEL_>1) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP; ESP_WM_PRINT(z); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define LOGINFO(x)          if(_ESPASYNC_WIFIMGR_LOGLEVEL_>2) { ESP_WM_PRINT_MARK; ESP_WM_PRINTLN(x); }
#define LOGINFO0(x)         if(_ESPASYNC_WIFIMGR_LOGLEVEL_>2) { ESP_WM_PRINT(x); }
#define LOGINFO1(x,y)       if(_ESPASYNC_WIFIMGR_LOGLEVEL_>2) { ESP_WM_PRINT_MARK; ESP_WM_PRINT_SP; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(y); }
#define LOGINFO2(x,y,z)     if(_ESPASYNC_WIFIMGR_LOGLEVEL_>2) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(z); }
#define LOGINFO3(x,y,z,w)   if(_ESPASYNC_WIFIMGR_LOGLEVEL_>2) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP; ESP_WM_PRINT(z); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define LOGDEBUG(x)         if(_ESPASYNC_WIFIMGR_LOGLEVEL_>3) { ESP_WM_PRINT_MARK; ESP_WM_PRINTLN(x); }
#define LOGDEBUG0(x)        if(_ESPASYNC_WIFIMGR_LOGLEVEL_>3) { ESP_WM_PRINT(x); }
#define LOGDEBUG1(x,y)      if(_ESPASYNC_WIFIMGR_LOGLEVEL_>3) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(y); }
#define LOGDEBUG2(x,y,z)    if(_ESPASYNC_WIFIMGR_LOGLEVEL_>3) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(z); }
#define LOGDEBUG3(x,y,z,w)  if(_ESPASYNC_WIFIMGR_LOGLEVEL_>3) { ESP_WM_PRINT_MARK; ESP_WM_PRINT(x); ESP_WM_PRINT_SP; ESP_WM_PRINT(y); ESP_WM_PRINT_SP; ESP_WM_PRINT(z); ESP_WM_PRINT_SP; ESP_WM_PRINTLN(w); }

/////////////////////////////////////////////////////////

#endif    // ESPAsync_WiFiManager_Debug_H

