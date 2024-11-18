#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "group7undergrad_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block group7undergrad/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_group7undergrad_std_msgs_Float64> Sub_group7undergrad_67;

// For Block group7undergrad/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_group7undergrad_std_msgs_Float64> Pub_group7undergrad_20;

void slros_node_init(int argc, char** argv);

#endif
