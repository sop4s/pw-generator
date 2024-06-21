#ifndef UTILITIES_H
#define UTILITIES_H

#include <cstddef>
#include <string>

bool ask_use(const char* message);
std::string generate_password(std::string charset, size_t pw_len);

#endif // !UTILITIES_H
