#ifndef TIME_HPP
#define TIME_HPP

#include <ctime>

std::time_t t = std::time(nullptr);
std::tm* localTime = std::localtime(&t);

int month = localTime->tm_mon + 1;
int dayOfMonth = localTime->tm_mday;
int dayOfWeek = localTime->tm_wday;

int hour = localTime->tm_hour;
int minute = localTime->tm_min;
std::string newMinute = std::to_string(minute);

int year = localTime->tm_year + 1900;

#endif TIME_HPP
