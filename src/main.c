#include <zephyr.h>

#include <logging/log.h>
LOG_MODULE_REGISTER(app_main);

void main(void)
{
    LOG_INF("Build Type: %s, Version: %s", CONFIG_APP_RELEASE_TYPE, CONFIG_APP_VERSION);
}
