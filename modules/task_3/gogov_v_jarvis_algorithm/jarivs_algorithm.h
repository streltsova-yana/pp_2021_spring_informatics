// Copyright 2021 Gogov Vladislav
#ifndef MODULES_TASK_3_GOGOV_V_JARVIS_ALGORITHM_JARIVS_ALGORITHM_H_
#define MODULES_TASK_3_GOGOV_V_JARVIS_ALGORITHM_JARIVS_ALGORITHM_H_
#include <tbb/tbb.h>
#include <ostream>
#include <vector>
#include <utility>

using Point = std::pair<size_t, size_t>;

Point searchBottomLeft(const std::vector<Point>& points);
int rotate(const Point& A, const Point& B, const Point& C);
bool checkPointsDistances(const Point& current, const Point& next, const Point& temp);
std::vector<Point> getRandomPoints(size_t size);
std::vector<Point> jarvisAlgorithmSeq(const std::vector<Point>& points);
std::vector<Point> jarvisAlgorithmTbb(const std::vector<Point>& points);

#endif  // MODULES_TASK_3_GOGOV_V_JARVIS_ALGORITHM_JARIVS_ALGORITHM_H_
