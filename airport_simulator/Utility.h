#pragma once
enum Runway_activity { idle, land, takeoff };

enum Plane_status { null, arriving, departing };

enum Error_code {
	success, fail, utility_range_error, underflow, overflow, fatal,
	not_present, duplicate_error, entry_inserted, entry_found,
	internal_error, range_error
};