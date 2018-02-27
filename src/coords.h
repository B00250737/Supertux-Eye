#pragma once
#include <gazeapi.h>

class MyGaze : public gtl::IGazeListener
{
public:
  gtl::Point2D m_coord;

  MyGaze();
  ~MyGaze();
private:
  // IGazeListener
  void on_gaze_data(gtl::GazeData const & gaze_data);
private:
  gtl::GazeApi m_api;
};
