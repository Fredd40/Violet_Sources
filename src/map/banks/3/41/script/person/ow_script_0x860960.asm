.include "flags.s"
.include "species.s"
.include "overworld_script.s"


.global ow_script_0x860960
ow_script_0x860960:
setflag TRANS_DISABLE
showpokepic POKEMON_GLUMANDA 0x0 0x0
clearflag TRANS_DISABLE
end
