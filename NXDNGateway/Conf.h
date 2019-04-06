/*
 *   Copyright (C) 2015,2016,2017,2018 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(CONF_H)
#define	CONF_H

#include <string>
#include <vector>

class CConf
{
public:
  CConf(const std::string& file);
  ~CConf();

  bool read();

  // The General section
  std::string  getCallsign() const;
  std::string  getSuffix() const;
  std::string  getRptAddress() const;
  unsigned int getRptPort() const;
  unsigned int getMyPort() const;
  bool         getRptDebug() const;
  bool         getDaemon() const;

  // The Info section
  unsigned int getRxFrequency() const;
  unsigned int getTxFrequency() const;
  unsigned int getPower() const;
  float        getLatitude() const;
  float        getLongitude() const;
  int          getHeight() const;
  std::string  getName() const;
  std::string  getDescription() const;

  // The Id Lookup section
  std::string  getLookupName() const;
  unsigned int getLookupTime() const;

  // The Voice section
  bool         getVoiceEnabled() const;
  std::string  getVoiceLanguage() const;
  std::string  getVoiceDirectory() const;

  // The aprs.fi section
  bool         getAPRSEnabled() const;
  std::string  getAPRSServer() const;
  unsigned int getAPRSPort() const;
  std::string  getAPRSPassword() const;
  std::string  getAPRSSuffix() const;
  std::string  getAPRSDescription() const;

  // The Log section
  std::string  getLogFilePath() const;
  std::string  getLogFileRoot() const;
  bool         getLogUTC() const;

  // The Network section
  unsigned int   getNetworkPort() const;
  std::string    getNetworkHosts1() const;
  std::string    getNetworkHosts2() const;
  unsigned int   getNetworkReloadTime() const;
  std::string    getNetworkParrotAddress() const;
  unsigned int   getNetworkParrotPort() const;
  std::string    getNetworkNXDN2DMRAddress() const;
  unsigned int   getNetworkNXDN2DMRPort() const;
  unsigned short getNetworkStartup() const;
  unsigned int   getNetworkInactivityTimeout() const;
  bool           getNetworkDebug() const;

  // The Mobile GPS section
  bool         getMobileGPSEnabled() const;
  std::string  getMobileGPSAddress() const;
  unsigned int getMobileGPSPort() const;

private:
  std::string  m_file;
  std::string  m_callsign;
  std::string  m_suffix;
  std::string  m_rptAddress;
  unsigned int m_rptPort;
  unsigned int m_myPort;
  bool         m_rptDebug;
  bool         m_daemon;

  unsigned int m_rxFrequency;
  unsigned int m_txFrequency;
  unsigned int m_power;
  float        m_latitude;
  float        m_longitude;
  int          m_height;
  std::string  m_name;
  std::string  m_description;

  std::string  m_lookupName;
  unsigned int m_lookupTime;

  bool         m_voiceEnabled;
  std::string  m_voiceLanguage;
  std::string  m_voiceDirectory;

  std::string  m_logFilePath;
  std::string  m_logFileRoot;
  bool         m_logUTC;

  bool         m_aprsEnabled;
  std::string  m_aprsServer;
  unsigned int m_aprsPort;
  std::string  m_aprsPassword;
  std::string  m_aprsSuffix;
  std::string  m_aprsDescription;

  unsigned int   m_networkPort;
  std::string    m_networkHosts1;
  std::string    m_networkHosts2;
  unsigned int   m_networkReloadTime;
  std::string    m_networkParrotAddress;
  unsigned int   m_networkParrotPort;
  std::string    m_networkNXDN2DMRAddress;
  unsigned int   m_networkNXDN2DMRPort;
  unsigned short m_networkStartup;
  unsigned int   m_networkInactivityTimeout;
  bool           m_networkDebug;

  bool         m_mobileGPSEnabled;
  std::string  m_mobileGPSAddress;
  unsigned int m_mobileGPSPort;
};

#endif
