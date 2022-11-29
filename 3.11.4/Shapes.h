#pragma once
#ifndef SHAPES_EXPORT
#define SHAPES_API __declspec(dllexport)
#else
#define SHAPESLIBRARY_API __declspec(dllimport)
#endif