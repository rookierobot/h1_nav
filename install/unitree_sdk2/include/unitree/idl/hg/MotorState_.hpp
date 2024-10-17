/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to CXX Translator
  File name: MotorState_.idl
  Source: MotorState_.hpp
  Cyclone DDS: v0.10.2

*****************************************************************/
#ifndef DDSCXX_UNITREE_IDL_HG_MOTORSTATE__HPP
#define DDSCXX_UNITREE_IDL_HG_MOTORSTATE__HPP

#include <cstdint>
#include <array>

namespace unitree_hg
{
namespace msg
{
namespace dds_
{
class MotorState_
{
private:
 uint8_t mode_ = 0;
 float q_ = 0.0f;
 float dq_ = 0.0f;
 float ddq_ = 0.0f;
 float tau_est_ = 0.0f;
 std::array<int16_t, 2> temperature_ = { };
 float vol_ = 0.0f;
 std::array<uint32_t, 2> sensor_ = { };
 uint32_t motorstate_ = 0;
 std::array<uint32_t, 4> reserve_ = { };

public:
  MotorState_() = default;

  explicit MotorState_(
    uint8_t mode,
    float q,
    float dq,
    float ddq,
    float tau_est,
    const std::array<int16_t, 2>& temperature,
    float vol,
    const std::array<uint32_t, 2>& sensor,
    uint32_t motorstate,
    const std::array<uint32_t, 4>& reserve) :
    mode_(mode),
    q_(q),
    dq_(dq),
    ddq_(ddq),
    tau_est_(tau_est),
    temperature_(temperature),
    vol_(vol),
    sensor_(sensor),
    motorstate_(motorstate),
    reserve_(reserve) { }

  uint8_t mode() const { return this->mode_; }
  uint8_t& mode() { return this->mode_; }
  void mode(uint8_t _val_) { this->mode_ = _val_; }
  float q() const { return this->q_; }
  float& q() { return this->q_; }
  void q(float _val_) { this->q_ = _val_; }
  float dq() const { return this->dq_; }
  float& dq() { return this->dq_; }
  void dq(float _val_) { this->dq_ = _val_; }
  float ddq() const { return this->ddq_; }
  float& ddq() { return this->ddq_; }
  void ddq(float _val_) { this->ddq_ = _val_; }
  float tau_est() const { return this->tau_est_; }
  float& tau_est() { return this->tau_est_; }
  void tau_est(float _val_) { this->tau_est_ = _val_; }
  const std::array<int16_t, 2>& temperature() const { return this->temperature_; }
  std::array<int16_t, 2>& temperature() { return this->temperature_; }
  void temperature(const std::array<int16_t, 2>& _val_) { this->temperature_ = _val_; }
  void temperature(std::array<int16_t, 2>&& _val_) { this->temperature_ = _val_; }
  float vol() const { return this->vol_; }
  float& vol() { return this->vol_; }
  void vol(float _val_) { this->vol_ = _val_; }
  const std::array<uint32_t, 2>& sensor() const { return this->sensor_; }
  std::array<uint32_t, 2>& sensor() { return this->sensor_; }
  void sensor(const std::array<uint32_t, 2>& _val_) { this->sensor_ = _val_; }
  void sensor(std::array<uint32_t, 2>&& _val_) { this->sensor_ = _val_; }
  uint32_t motorstate() const { return this->motorstate_; }
  uint32_t& motorstate() { return this->motorstate_; }
  void motorstate(uint32_t _val_) { this->motorstate_ = _val_; }
  const std::array<uint32_t, 4>& reserve() const { return this->reserve_; }
  std::array<uint32_t, 4>& reserve() { return this->reserve_; }
  void reserve(const std::array<uint32_t, 4>& _val_) { this->reserve_ = _val_; }
  void reserve(std::array<uint32_t, 4>&& _val_) { this->reserve_ = _val_; }

  bool operator==(const MotorState_& _other) const
  {
    (void) _other;
    return mode_ == _other.mode_ &&
      q_ == _other.q_ &&
      dq_ == _other.dq_ &&
      ddq_ == _other.ddq_ &&
      tau_est_ == _other.tau_est_ &&
      temperature_ == _other.temperature_ &&
      vol_ == _other.vol_ &&
      sensor_ == _other.sensor_ &&
      motorstate_ == _other.motorstate_ &&
      reserve_ == _other.reserve_;
  }

  bool operator!=(const MotorState_& _other) const
  {
    return !(*this == _other);
  }

};

}

}

}

#include "dds/topic/TopicTraits.hpp"
#include "org/eclipse/cyclonedds/topic/datatopic.hpp"

namespace org {
namespace eclipse {
namespace cyclonedds {
namespace topic {

template <> constexpr const char* TopicTraits<::unitree_hg::msg::dds_::MotorState_>::getTypeName()
{
  return "unitree_hg::msg::dds_::MotorState_";
}

template <> constexpr bool TopicTraits<::unitree_hg::msg::dds_::MotorState_>::isKeyless()
{
  return true;
}

#ifdef DDSCXX_HAS_TYPE_DISCOVERY
template<> constexpr unsigned int TopicTraits<::unitree_hg::msg::dds_::MotorState_>::type_map_blob_sz() { return 670; }
template<> constexpr unsigned int TopicTraits<::unitree_hg::msg::dds_::MotorState_>::type_info_blob_sz() { return 100; }
template<> inline const uint8_t * TopicTraits<::unitree_hg::msg::dds_::MotorState_>::type_map_blob() {
  static const uint8_t blob[] = {
 0xee,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf1,  0x7c,  0xc5,  0x84,  0xed,  0x94,  0x0b,  0x8f, 
 0x30,  0x18,  0xf1,  0x8d,  0xe0,  0xed,  0x24,  0x00,  0xd6,  0x00,  0x00,  0x00,  0xf1,  0x51,  0x01,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0xc6,  0x00,  0x00,  0x00,  0x0a,  0x00,  0x00,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x02,  0x15,  0xd6,  0x17,  0x12,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x76,  0x94,  0xf4,  0xa6,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x47,  0xbc,  0xdc,  0xd7,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0xe9,  0x16,  0x89,  0x09,  0x00, 
 0x0b,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x8a,  0xf7,  0xae,  0xdf,  0x00, 
 0x16,  0x00,  0x00,  0x00,  0x05,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x02,  0x03,  0xee,  0xf4,  0x38,  0xf7,  0x00,  0x00,  0x0b,  0x00,  0x00,  0x00, 
 0x06,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x0a,  0xcf,  0x8b,  0xe1,  0x00,  0x16,  0x00,  0x00,  0x00, 
 0x07,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00, 
 0x02,  0x07,  0xa5,  0xfe,  0x26,  0xd5,  0x00,  0x00,  0x0b,  0x00,  0x00,  0x00,  0x08,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x07,  0xd1,  0x41,  0x1a,  0xed,  0x00,  0x16,  0x00,  0x00,  0x00,  0x09,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x04,  0x07,  0x9c,  0x3b, 
 0x62,  0x94,  0x00,  0x00,  0x7e,  0x01,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0xf2,  0xa8,  0x6c,  0xba, 
 0xb3,  0xae,  0x0a,  0xa9,  0x8a,  0x1e,  0x74,  0x66,  0x43,  0xa0,  0x99,  0x00,  0x66,  0x01,  0x00,  0x00, 
 0xf2,  0x51,  0x01,  0x00,  0x2b,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x23,  0x00,  0x00,  0x00, 
 0x75,  0x6e,  0x69,  0x74,  0x72,  0x65,  0x65,  0x5f,  0x68,  0x67,  0x3a,  0x3a,  0x6d,  0x73,  0x67,  0x3a, 
 0x3a,  0x64,  0x64,  0x73,  0x5f,  0x3a,  0x3a,  0x4d,  0x6f,  0x74,  0x6f,  0x72,  0x53,  0x74,  0x61,  0x74, 
 0x65,  0x5f,  0x00,  0x00,  0x2e,  0x01,  0x00,  0x00,  0x0a,  0x00,  0x00,  0x00,  0x13,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x02,  0x00,  0x05,  0x00,  0x00,  0x00,  0x6d,  0x6f,  0x64,  0x65, 
 0x00,  0x00,  0x00,  0x00,  0x10,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x00, 
 0x02,  0x00,  0x00,  0x00,  0x71,  0x00,  0x00,  0x00,  0x11,  0x00,  0x00,  0x00,  0x02,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x09,  0x00,  0x03,  0x00,  0x00,  0x00,  0x64,  0x71,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x12,  0x00,  0x00,  0x00,  0x03,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x64,  0x64,  0x71,  0x00,  0x00,  0x00,  0x00,  0x00,  0x16,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x09,  0x00,  0x08,  0x00,  0x00,  0x00,  0x74,  0x61,  0x75,  0x5f,  0x65,  0x73,  0x74,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x26,  0x00,  0x00,  0x00,  0x05,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3, 
 0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x02,  0x03,  0x00,  0x00,  0x0c,  0x00,  0x00,  0x00, 
 0x74,  0x65,  0x6d,  0x70,  0x65,  0x72,  0x61,  0x74,  0x75,  0x72,  0x65,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x12,  0x00,  0x00,  0x00,  0x06,  0x00,  0x00,  0x00,  0x01,  0x00,  0x09,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x76,  0x6f,  0x6c,  0x00,  0x00,  0x00,  0x00,  0x00,  0x21,  0x00,  0x00,  0x00,  0x07,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00,  0x02,  0x07,  0x00,  0x00, 
 0x07,  0x00,  0x00,  0x00,  0x73,  0x65,  0x6e,  0x73,  0x6f,  0x72,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x19,  0x00,  0x00,  0x00,  0x08,  0x00,  0x00,  0x00,  0x01,  0x00,  0x07,  0x00,  0x0b,  0x00,  0x00,  0x00, 
 0x6d,  0x6f,  0x74,  0x6f,  0x72,  0x73,  0x74,  0x61,  0x74,  0x65,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00, 
 0x22,  0x00,  0x00,  0x00,  0x09,  0x00,  0x00,  0x00,  0x01,  0x00,  0x90,  0xf3,  0x01,  0x00,  0x00,  0x00, 
 0x01,  0x00,  0x00,  0x00,  0x04,  0x07,  0x00,  0x00,  0x08,  0x00,  0x00,  0x00,  0x72,  0x65,  0x73,  0x65, 
 0x72,  0x76,  0x65,  0x00,  0x00,  0x00,  0x00,  0x00,  0x22,  0x00,  0x00,  0x00,  0x01,  0x00,  0x00,  0x00, 
 0xf2,  0xa8,  0x6c,  0xba,  0xb3,  0xae,  0x0a,  0xa9,  0x8a,  0x1e,  0x74,  0x66,  0x43,  0xa0,  0x99,  0xf1, 
 0x7c,  0xc5,  0x84,  0xed,  0x94,  0x0b,  0x8f,  0x30,  0x18,  0xf1,  0x8d,  0xe0,  0xed,  0x24, };
  return blob;
}
template<> inline const uint8_t * TopicTraits<::unitree_hg::msg::dds_::MotorState_>::type_info_blob() {
  static const uint8_t blob[] = {
 0x60,  0x00,  0x00,  0x00,  0x01,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf1,  0x7c,  0xc5,  0x84,  0xed,  0x94,  0x0b,  0x8f,  0x30,  0x18,  0xf1,  0x8d, 
 0xe0,  0xed,  0x24,  0x00,  0xda,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00,  0x02,  0x10,  0x00,  0x40,  0x28,  0x00,  0x00,  0x00,  0x24,  0x00,  0x00,  0x00, 
 0x14,  0x00,  0x00,  0x00,  0xf2,  0xa8,  0x6c,  0xba,  0xb3,  0xae,  0x0a,  0xa9,  0x8a,  0x1e,  0x74,  0x66, 
 0x43,  0xa0,  0x99,  0x00,  0x6a,  0x01,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x04,  0x00,  0x00,  0x00, 
 0x00,  0x00,  0x00,  0x00, };
  return blob;
}
#endif //DDSCXX_HAS_TYPE_DISCOVERY

} //namespace topic
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

namespace dds {
namespace topic {

template <>
struct topic_type_name<::unitree_hg::msg::dds_::MotorState_>
{
    static std::string value()
    {
      return org::eclipse::cyclonedds::topic::TopicTraits<::unitree_hg::msg::dds_::MotorState_>::getTypeName();
    }
};

}
}

REGISTER_TOPIC_TYPE(::unitree_hg::msg::dds_::MotorState_)

namespace org{
namespace eclipse{
namespace cyclonedds{
namespace core{
namespace cdr{

template<>
propvec &get_type_props<::unitree_hg::msg::dds_::MotorState_>();

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool write(T& streamer, const ::unitree_hg::msg::dds_::MotorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.ddq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.tau_est()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!write(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.vol()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 7:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!write(streamer, instance.sensor()[0], instance.sensor().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 8:
      if (!streamer.start_member(*prop))
        return false;
      if (!write(streamer, instance.motorstate()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 9:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!write(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool write(S& str, const ::unitree_hg::msg::dds_::MotorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::MotorState_>();
  str.set_mode(cdr_stream::stream_mode::write, as_key);
  return write(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool read(T& streamer, ::unitree_hg::msg::dds_::MotorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.ddq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.tau_est()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!read(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.vol()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 7:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!read(streamer, instance.sensor()[0], instance.sensor().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 8:
      if (!streamer.start_member(*prop))
        return false;
      if (!read(streamer, instance.motorstate()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 9:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!read(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool read(S& str, ::unitree_hg::msg::dds_::MotorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::MotorState_>();
  str.set_mode(cdr_stream::stream_mode::read, as_key);
  return read(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool move(T& streamer, const ::unitree_hg::msg::dds_::MotorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.ddq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.tau_est()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!move(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.vol()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 7:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!move(streamer, instance.sensor()[0], instance.sensor().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 8:
      if (!streamer.start_member(*prop))
        return false;
      if (!move(streamer, instance.motorstate()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 9:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!move(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool move(S& str, const ::unitree_hg::msg::dds_::MotorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::MotorState_>();
  str.set_mode(cdr_stream::stream_mode::move, as_key);
  return move(str, instance, props.data()); 
}

template<typename T, std::enable_if_t<std::is_base_of<cdr_stream, T>::value, bool> = true >
bool max(T& streamer, const ::unitree_hg::msg::dds_::MotorState_& instance, entity_properties_t *props) {
  (void)instance;
  if (!streamer.start_struct(*props))
    return false;
  auto prop = streamer.first_entity(props);
  while (prop) {
    switch (prop->m_id) {
      case 0:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.mode()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 1:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.q()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 2:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.dq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 3:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.ddq()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 4:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.tau_est()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 5:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!max(streamer, instance.temperature()[0], instance.temperature().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 6:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.vol()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 7:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!max(streamer, instance.sensor()[0], instance.sensor().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 8:
      if (!streamer.start_member(*prop))
        return false;
      if (!max(streamer, instance.motorstate()))
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
      case 9:
      if (!streamer.start_member(*prop))
        return false;
      if (!streamer.start_consecutive(true, true))
        return false;
      if (!max(streamer, instance.reserve()[0], instance.reserve().size()))
        return false;
      if (!streamer.finish_consecutive())
        return false;
      if (!streamer.finish_member(*prop))
        return false;
      break;
    }
    prop = streamer.next_entity(prop);
  }
  return streamer.finish_struct(*props);
}

template<typename S, std::enable_if_t<std::is_base_of<cdr_stream, S>::value, bool> = true >
bool max(S& str, const ::unitree_hg::msg::dds_::MotorState_& instance, bool as_key) {
  auto &props = get_type_props<::unitree_hg::msg::dds_::MotorState_>();
  str.set_mode(cdr_stream::stream_mode::max, as_key);
  return max(str, instance, props.data()); 
}

} //namespace cdr
} //namespace core
} //namespace cyclonedds
} //namespace eclipse
} //namespace org

#endif // DDSCXX_UNITREE_IDL_HG_MOTORSTATE__HPP
