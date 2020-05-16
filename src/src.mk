SRC += ./src/modules/shell_cmds.c
SRC += ./src/modules/bq.c
SRC += ./src/modules/bms_logic.c
INC += ./includes
INC += ./src/drivers/v1

# Shared variables
ALLCSRC += $(SRC)
ALLINC  += $(INC)