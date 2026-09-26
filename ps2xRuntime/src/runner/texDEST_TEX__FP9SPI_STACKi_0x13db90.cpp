#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texDEST_TEX__FP9SPI_STACKi
// Address: 0x13db90 - 0x13dd0c
void texDEST_TEX__FP9SPI_STACKi_0x13db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texDEST_TEX__FP9SPI_STACKi_0x13db90");
#endif

    switch (ctx->pc) {
        case 0x13dbb0u: goto label_13dbb0;
        case 0x13dbd8u: goto label_13dbd8;
        case 0x13dbf0u: goto label_13dbf0;
        case 0x13dc0cu: goto label_13dc0c;
        case 0x13dc34u: goto label_13dc34;
        case 0x13dc50u: goto label_13dc50;
        case 0x13dc74u: goto label_13dc74;
        case 0x13dcf0u: goto label_13dcf0;
        default: break;
    }

    ctx->pc = 0x13db90u;

    // 0x13db90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13db94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13db98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13db98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13db9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13dba0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13dba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dba4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13dba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dba8: 0xc05191c  jal         func_146470
    ctx->pc = 0x13DBA8u;
    SET_GPR_U32(ctx, 31, 0x13DBB0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBB0u; }
        if (ctx->pc != 0x13DBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBB0u; }
        if (ctx->pc != 0x13DBB0u) { return; }
    }
    ctx->pc = 0x13DBB0u;
label_13dbb0:
    // 0x13dbb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DBB0u;
    {
        const bool branch_taken_0x13dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dbb0) {
            ctx->pc = 0x13DBC4u;
            goto label_13dbc4;
        }
    }
    ctx->pc = 0x13DBB8u;
    // 0x13dbb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13dbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dbbc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x13DBBCu;
    {
        const bool branch_taken_0x13dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dbbc) {
            ctx->pc = 0x13DCF4u;
            goto label_13dcf4;
        }
    }
    ctx->pc = 0x13DBC4u;
label_13dbc4:
    // 0x13dbc4: 0x8f848738  lw          $a0, -0x78C8($gp)
    ctx->pc = 0x13dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x13dbc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dbcc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x13dbccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13dbd0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x13DBD0u;
    SET_GPR_U32(ctx, 31, 0x13DBD8u);
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBD8u; }
        if (ctx->pc != 0x13DBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBD8u; }
        if (ctx->pc != 0x13DBD8u) { return; }
    }
    ctx->pc = 0x13DBD8u;
label_13dbd8:
    // 0x13dbd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dbdc: 0xac220e78  sw          $v0, 0xE78($at)
    ctx->pc = 0x13dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3704), GPR_U32(ctx, 2));
    // 0x13dbe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dbe4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13dbe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dbe8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DBE8u;
    SET_GPR_U32(ctx, 31, 0x13DBF0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBF0u; }
        if (ctx->pc != 0x13DBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBF0u; }
        if (ctx->pc != 0x13DBF0u) { return; }
    }
    ctx->pc = 0x13DBF0u;
label_13dbf0:
    // 0x13dbf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dbf4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dbf8: 0xa4220e84  sh          $v0, 0xE84($at)
    ctx->pc = 0x13dbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3716), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc00: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13dc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dc04: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DC04u;
    SET_GPR_U32(ctx, 31, 0x13DC0Cu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC0Cu; }
        if (ctx->pc != 0x13DC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC0Cu; }
        if (ctx->pc != 0x13DC0Cu) { return; }
    }
    ctx->pc = 0x13DC0Cu;
label_13dc0c:
    // 0x13dc0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dc10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dc14: 0xa4220e86  sh          $v0, 0xE86($at)
    ctx->pc = 0x13dc14u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3718), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dc18: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x13dc18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13dc1c: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x13DC1Cu;
    {
        const bool branch_taken_0x13dc1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dc1c) {
            ctx->pc = 0x13DC84u;
            goto label_13dc84;
        }
    }
    ctx->pc = 0x13DC24u;
    // 0x13dc24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc28: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13dc28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dc2c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DC2Cu;
    SET_GPR_U32(ctx, 31, 0x13DC34u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC34u; }
        if (ctx->pc != 0x13DC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC34u; }
        if (ctx->pc != 0x13DC34u) { return; }
    }
    ctx->pc = 0x13DC34u;
label_13dc34:
    // 0x13dc34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dc38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dc3c: 0xa4220e88  sh          $v0, 0xE88($at)
    ctx->pc = 0x13dc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3720), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dc40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc44: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x13dc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dc48: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DC48u;
    SET_GPR_U32(ctx, 31, 0x13DC50u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC50u; }
        if (ctx->pc != 0x13DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC50u; }
        if (ctx->pc != 0x13DC50u) { return; }
    }
    ctx->pc = 0x13DC50u;
label_13dc50:
    // 0x13dc50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13dc54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dc58: 0xa4220e8a  sh          $v0, 0xE8A($at)
    ctx->pc = 0x13dc58u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3722), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dc5c: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x13dc5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x13dc60: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x13DC60u;
    {
        const bool branch_taken_0x13dc60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dc60) {
            ctx->pc = 0x13DCA4u;
            goto label_13dca4;
        }
    }
    ctx->pc = 0x13DC68u;
    // 0x13dc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc6c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DC6Cu;
    SET_GPR_U32(ctx, 31, 0x13DC74u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC74u; }
        if (ctx->pc != 0x13DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC74u; }
        if (ctx->pc != 0x13DC74u) { return; }
    }
    ctx->pc = 0x13DC74u;
label_13dc74:
    // 0x13dc74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dc78: 0xa0220e9c  sb          $v0, 0xE9C($at)
    ctx->pc = 0x13dc78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3740), (uint8_t)GPR_U32(ctx, 2));
    // 0x13dc7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13DC7Cu;
    {
        const bool branch_taken_0x13dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc7c) {
            ctx->pc = 0x13DCA4u;
            goto label_13dca4;
        }
    }
    ctx->pc = 0x13DC84u;
label_13dc84:
    // 0x13dc84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dc88: 0x84220e80  lh          $v0, 0xE80($at)
    ctx->pc = 0x13dc88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 3712)));
    // 0x13dc8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dc90: 0xa4220e88  sh          $v0, 0xE88($at)
    ctx->pc = 0x13dc90u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3720), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dc94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dc98: 0x84220e82  lh          $v0, 0xE82($at)
    ctx->pc = 0x13dc98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 3714)));
    // 0x13dc9c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dca0: 0xa4220e8a  sh          $v0, 0xE8A($at)
    ctx->pc = 0x13dca0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3722), (uint16_t)GPR_U32(ctx, 2));
label_13dca4:
    // 0x13dca4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dca8: 0x8c230e78  lw          $v1, 0xE78($at)
    ctx->pc = 0x13dca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3704)));
    // 0x13dcac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13DCACu;
    {
        const bool branch_taken_0x13dcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dcac) {
            ctx->pc = 0x13DCF0u;
            goto label_13dcf0;
        }
    }
    ctx->pc = 0x13DCB4u;
    // 0x13dcb4: 0x8f848748  lw          $a0, -0x78B8($gp)
    ctx->pc = 0x13dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936392)));
    // 0x13dcb8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DCB8u;
    {
        const bool branch_taken_0x13dcb8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13dcb8) {
            ctx->pc = 0x13DCD0u;
            goto label_13dcd0;
        }
    }
    ctx->pc = 0x13DCC0u;
    // 0x13dcc0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dcc4: 0xaf828748  sw          $v0, -0x78B8($gp)
    ctx->pc = 0x13dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 2));
    // 0x13dcc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13DCC8u;
    {
        const bool branch_taken_0x13dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dcc8) {
            ctx->pc = 0x13DCF0u;
            goto label_13dcf0;
        }
    }
    ctx->pc = 0x13DCD0u;
label_13dcd0:
    // 0x13dcd0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x13dcd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13dcd4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DCD4u;
    {
        const bool branch_taken_0x13dcd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13dcd4) {
            ctx->pc = 0x13DCF0u;
            goto label_13dcf0;
        }
    }
    ctx->pc = 0x13DCDCu;
    // 0x13dcdc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x13dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x13dce0: 0x24842690  addiu       $a0, $a0, 0x2690
    ctx->pc = 0x13dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9872));
    // 0x13dce4: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x13dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x13dce8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x13DCE8u;
    SET_GPR_U32(ctx, 31, 0x13DCF0u);
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DCF0u; }
        if (ctx->pc != 0x13DCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DCF0u; }
        if (ctx->pc != 0x13DCF0u) { return; }
    }
    ctx->pc = 0x13DCF0u;
label_13dcf0:
    // 0x13dcf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13dcf4:
    // 0x13dcf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13dcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dcf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dcf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dcfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dd00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13dd04: 0x3e00008  jr          $ra
    ctx->pc = 0x13DD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DD0Cu;
}
