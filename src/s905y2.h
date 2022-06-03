#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
extern uint32_t readl(uint32_t addr);
extern void writel(uint32_t val, uint32_t addr);
extern uint32_t s905y2_get_gpio_mode(uint32_t pin);
extern void s905y2_gpio_fsel(uint32_t pin, uint8_t mode);
extern uint8_t s905y2_gpio_lev(uint32_t pin);
extern void s905y2_gpio_write(uint32_t pin, uint32_t on);
extern void s905y2_gpio_set_pud(uint32_t pin, uint8_t status);
extern int s905y2_init(int);
#ifdef __cplusplus
}
#endif
