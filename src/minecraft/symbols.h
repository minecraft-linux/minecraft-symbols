#pragma once

void minecraft_symbols_init(void* handle);
void *minecraft_dlsym(void *handle, const char *sym);
void minecraft_get_version(int *major, int *minor, int *patch, int *revision);