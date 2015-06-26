/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "types_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>




THostPort::~THostPort() throw() {
}


void THostPort::__set_ip(const std::string& val) {
  this->ip = val;
}

void THostPort::__set_port(const int32_t val) {
  this->port = val;
}

const char* THostPort::ascii_fingerprint = "EEBC915CE44901401D881E6091423036";
const uint8_t THostPort::binary_fingerprint[16] = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

uint32_t THostPort::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->ip);
          this->__isset.ip = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->port);
          this->__isset.port = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t THostPort::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("THostPort");

  xfer += oprot->writeFieldBegin("ip", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->ip);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("port", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->port);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(THostPort &a, THostPort &b) {
  using ::std::swap;
  swap(a.ip, b.ip);
  swap(a.port, b.port);
  swap(a.__isset, b.__isset);
}

THostPort::THostPort(const THostPort& other0) {
  ip = other0.ip;
  port = other0.port;
  __isset = other0.__isset;
}
THostPort& THostPort::operator=(const THostPort& other1) {
  ip = other1.ip;
  port = other1.port;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const THostPort& obj) {
  using apache::thrift::to_string;
  out << "THostPort(";
  out << "ip=" << to_string(obj.ip);
  out << ", " << "port=" << to_string(obj.port);
  out << ")";
  return out;
}


QueryInput::~QueryInput() throw() {
}


void QueryInput::__set_tags(const std::vector<std::string> & val) {
  this->tags = val;
__isset.tags = true;
}

void QueryInput::__set_input(const std::string& val) {
  this->input = val;
}

const char* QueryInput::ascii_fingerprint = "EB6429E0D87CE2932B4C2857070CB2FA";
const uint8_t QueryInput::binary_fingerprint[16] = {0xEB,0x64,0x29,0xE0,0xD8,0x7C,0xE2,0x93,0x2B,0x4C,0x28,0x57,0x07,0x0C,0xB2,0xFA};

uint32_t QueryInput::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->tags.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->tags.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += iprot->readString(this->tags[_i6]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.tags = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->input);
          this->__isset.input = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QueryInput::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("QueryInput");

  if (this->__isset.tags) {
    xfer += oprot->writeFieldBegin("tags", ::apache::thrift::protocol::T_LIST, 1);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->tags.size()));
      std::vector<std::string> ::const_iterator _iter7;
      for (_iter7 = this->tags.begin(); _iter7 != this->tags.end(); ++_iter7)
      {
        xfer += oprot->writeString((*_iter7));
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("input", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeBinary(this->input);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(QueryInput &a, QueryInput &b) {
  using ::std::swap;
  swap(a.tags, b.tags);
  swap(a.input, b.input);
  swap(a.__isset, b.__isset);
}

QueryInput::QueryInput(const QueryInput& other8) {
  tags = other8.tags;
  input = other8.input;
  __isset = other8.__isset;
}
QueryInput& QueryInput::operator=(const QueryInput& other9) {
  tags = other9.tags;
  input = other9.input;
  __isset = other9.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const QueryInput& obj) {
  using apache::thrift::to_string;
  out << "QueryInput(";
  out << "tags="; (obj.__isset.tags ? (out << to_string(obj.tags)) : (out << "<null>"));
  out << ", " << "input=" << to_string(obj.input);
  out << ")";
  return out;
}


QuerySpec::~QuerySpec() throw() {
}


void QuerySpec::__set_name(const std::string& val) {
  this->name = val;
__isset.name = true;
}

void QuerySpec::__set_inputset(const std::map<std::string, QueryInput> & val) {
  this->inputset = val;
}

const char* QuerySpec::ascii_fingerprint = "0834F3A0696DB09FE503E5C1A4A62101";
const uint8_t QuerySpec::binary_fingerprint[16] = {0x08,0x34,0xF3,0xA0,0x69,0x6D,0xB0,0x9F,0xE5,0x03,0xE5,0xC1,0xA4,0xA6,0x21,0x01};

uint32_t QuerySpec::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->inputset.clear();
            uint32_t _size10;
            ::apache::thrift::protocol::TType _ktype11;
            ::apache::thrift::protocol::TType _vtype12;
            xfer += iprot->readMapBegin(_ktype11, _vtype12, _size10);
            uint32_t _i14;
            for (_i14 = 0; _i14 < _size10; ++_i14)
            {
              std::string _key15;
              xfer += iprot->readString(_key15);
              QueryInput& _val16 = this->inputset[_key15];
              xfer += _val16.read(iprot);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.inputset = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QuerySpec::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("QuerySpec");

  if (this->__isset.name) {
    xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeString(this->name);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("inputset", ::apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->inputset.size()));
    std::map<std::string, QueryInput> ::const_iterator _iter17;
    for (_iter17 = this->inputset.begin(); _iter17 != this->inputset.end(); ++_iter17)
    {
      xfer += oprot->writeString(_iter17->first);
      xfer += _iter17->second.write(oprot);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(QuerySpec &a, QuerySpec &b) {
  using ::std::swap;
  swap(a.name, b.name);
  swap(a.inputset, b.inputset);
  swap(a.__isset, b.__isset);
}

QuerySpec::QuerySpec(const QuerySpec& other18) {
  name = other18.name;
  inputset = other18.inputset;
  __isset = other18.__isset;
}
QuerySpec& QuerySpec::operator=(const QuerySpec& other19) {
  name = other19.name;
  inputset = other19.inputset;
  __isset = other19.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const QuerySpec& obj) {
  using apache::thrift::to_string;
  out << "QuerySpec(";
  out << "name="; (obj.__isset.name ? (out << to_string(obj.name)) : (out << "<null>"));
  out << ", " << "inputset=" << to_string(obj.inputset);
  out << ")";
  return out;
}


RegMessage::~RegMessage() throw() {
}


void RegMessage::__set_app_name(const std::string& val) {
  this->app_name = val;
}

void RegMessage::__set_endpoint(const THostPort& val) {
  this->endpoint = val;
}

const char* RegMessage::ascii_fingerprint = "8A6FE535189D3403D9FD6C98A103F76F";
const uint8_t RegMessage::binary_fingerprint[16] = {0x8A,0x6F,0xE5,0x35,0x18,0x9D,0x34,0x03,0xD9,0xFD,0x6C,0x98,0xA1,0x03,0xF7,0x6F};

uint32_t RegMessage::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->app_name);
          this->__isset.app_name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->endpoint.read(iprot);
          this->__isset.endpoint = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t RegMessage::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("RegMessage");

  xfer += oprot->writeFieldBegin("app_name", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->app_name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("endpoint", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->endpoint.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(RegMessage &a, RegMessage &b) {
  using ::std::swap;
  swap(a.app_name, b.app_name);
  swap(a.endpoint, b.endpoint);
  swap(a.__isset, b.__isset);
}

RegMessage::RegMessage(const RegMessage& other20) {
  app_name = other20.app_name;
  endpoint = other20.endpoint;
  __isset = other20.__isset;
}
RegMessage& RegMessage::operator=(const RegMessage& other21) {
  app_name = other21.app_name;
  endpoint = other21.endpoint;
  __isset = other21.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const RegMessage& obj) {
  using apache::thrift::to_string;
  out << "RegMessage(";
  out << "app_name=" << to_string(obj.app_name);
  out << ", " << "endpoint=" << to_string(obj.endpoint);
  out << ")";
  return out;
}


LatencyStat::~LatencyStat() throw() {
}


void LatencyStat::__set_hostport(const THostPort& val) {
  this->hostport = val;
}

void LatencyStat::__set_latency(const int64_t val) {
  this->latency = val;
}

const char* LatencyStat::ascii_fingerprint = "09E70C4FB217E12F46E0B39A783252CC";
const uint8_t LatencyStat::binary_fingerprint[16] = {0x09,0xE7,0x0C,0x4F,0xB2,0x17,0xE1,0x2F,0x46,0xE0,0xB3,0x9A,0x78,0x32,0x52,0xCC};

uint32_t LatencyStat::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->hostport.read(iprot);
          this->__isset.hostport = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->latency);
          this->__isset.latency = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t LatencyStat::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("LatencyStat");

  xfer += oprot->writeFieldBegin("hostport", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->hostport.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("latency", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->latency);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(LatencyStat &a, LatencyStat &b) {
  using ::std::swap;
  swap(a.hostport, b.hostport);
  swap(a.latency, b.latency);
  swap(a.__isset, b.__isset);
}

LatencyStat::LatencyStat(const LatencyStat& other22) {
  hostport = other22.hostport;
  latency = other22.latency;
  __isset = other22.__isset;
}
LatencyStat& LatencyStat::operator=(const LatencyStat& other23) {
  hostport = other23.hostport;
  latency = other23.latency;
  __isset = other23.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const LatencyStat& obj) {
  using apache::thrift::to_string;
  out << "LatencyStat(";
  out << "hostport=" << to_string(obj.hostport);
  out << ", " << "latency=" << to_string(obj.latency);
  out << ")";
  return out;
}


