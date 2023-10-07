uint32_t tick;
// the setup function runs once when you press reset or power the board
void setup() {
  tick = 0;
  R_IOPORT_PinCfg(NULL, BSP_IO_PORT_00_PIN_12, IOPORT_CFG_PORT_DIRECTION_OUTPUT);
  R_IOPORT_PinCfg(NULL, BSP_IO_PORT_00_PIN_13, IOPORT_CFG_PORT_DIRECTION_INPUT | IOPORT_CFG_PULLUP_ENABLE);
}

// the loop function runs over and over again forever
void loop() {
  bsp_io_level_t ret;
  R_IOPORT_PinRead(NULL, BSP_IO_PORT_00_PIN_13, &ret);

  tick++;

  if (ret == BSP_IO_LEVEL_LOW) {
    if (tick % 100 == 0) {
      R_IOPORT_PinWrite(NULL, BSP_IO_PORT_00_PIN_12, BSP_IO_LEVEL_HIGH);
    }
    if(tick % 200 == 0)
    {
      R_IOPORT_PinWrite(NULL, BSP_IO_PORT_00_PIN_12, BSP_IO_LEVEL_LOW);
    }
  }
  else
  {
    if (tick % 1000 == 0) {
      R_IOPORT_PinWrite(NULL, BSP_IO_PORT_00_PIN_12, BSP_IO_LEVEL_HIGH);
    }
    if(tick % 2000 == 0)
    {
      R_IOPORT_PinWrite(NULL, BSP_IO_PORT_00_PIN_12, BSP_IO_LEVEL_LOW);
    }
  }
  delay(1);                                                                 // wait for a second
}
