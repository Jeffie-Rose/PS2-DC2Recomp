#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetArg__18CScriptInterpreterFv
// Address: 0x146c70 - 0x147054
void GetArg__18CScriptInterpreterFv_0x146c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArg__18CScriptInterpreterFv_0x146c70");
#endif

    switch (ctx->pc) {
        case 0x146ca4u: goto label_146ca4;
        case 0x146cb8u: goto label_146cb8;
        case 0x146cc0u: goto label_146cc0;
        case 0x146cd4u: goto label_146cd4;
        case 0x146ce4u: goto label_146ce4;
        case 0x146d50u: goto label_146d50;
        case 0x146d70u: goto label_146d70;
        case 0x146d80u: goto label_146d80;
        case 0x146da0u: goto label_146da0;
        case 0x146e54u: goto label_146e54;
        case 0x146e88u: goto label_146e88;
        case 0x146ec8u: goto label_146ec8;
        case 0x146f5cu: goto label_146f5c;
        case 0x146f8cu: goto label_146f8c;
        case 0x146fa4u: goto label_146fa4;
        case 0x146facu: goto label_146fac;
        case 0x146fd8u: goto label_146fd8;
        case 0x146ff8u: goto label_146ff8;
        case 0x147000u: goto label_147000;
        case 0x147014u: goto label_147014;
        default: break;
    }

    ctx->pc = 0x146c70u;

    // 0x146c70: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x146c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x146c74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x146c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x146c78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x146c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x146c7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x146c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x146c80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x146c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x146c84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x146c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x146c88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x146c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x146c8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x146c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x146c90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146c98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x146c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c9c: 0xc051ca0  jal         func_147280
    ctx->pc = 0x146C9Cu;
    SET_GPR_U32(ctx, 31, 0x146CA4u);
    ctx->pc = 0x146CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146C9Cu;
            // 0x146ca0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147280u;
    if (runtime->hasFunction(0x147280u)) {
        auto targetFn = runtime->lookupFunction(0x147280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CA4u; }
        if (ctx->pc != 0x146CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SkipSpace__FR9input_str_0x147280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CA4u; }
        if (ctx->pc != 0x146CA4u) { return; }
    }
    ctx->pc = 0x146CA4u;
label_146ca4:
    // 0x146ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146CA4u;
    {
        const bool branch_taken_0x146ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CA4u;
            // 0x146ca8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ca4) {
            ctx->pc = 0x146CB4u;
            goto label_146cb4;
        }
    }
    ctx->pc = 0x146CACu;
    // 0x146cac: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x146CACu;
    {
        const bool branch_taken_0x146cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CACu;
            // 0x146cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cac) {
            ctx->pc = 0x147024u;
            goto label_147024;
        }
    }
    ctx->pc = 0x146CB4u;
label_146cb4:
    // 0x146cb4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x146cb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146cb8:
    // 0x146cb8: 0xc051ca0  jal         func_147280
    ctx->pc = 0x146CB8u;
    SET_GPR_U32(ctx, 31, 0x146CC0u);
    ctx->pc = 0x146CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146CB8u;
            // 0x146cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147280u;
    if (runtime->hasFunction(0x147280u)) {
        auto targetFn = runtime->lookupFunction(0x147280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CC0u; }
        if (ctx->pc != 0x146CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SkipSpace__FR9input_str_0x147280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CC0u; }
        if (ctx->pc != 0x146CC0u) { return; }
    }
    ctx->pc = 0x146CC0u;
label_146cc0:
    // 0x146cc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146CC0u;
    {
        const bool branch_taken_0x146cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CC0u;
            // 0x146cc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cc0) {
            ctx->pc = 0x146CD0u;
            goto label_146cd0;
        }
    }
    ctx->pc = 0x146CC8u;
    // 0x146cc8: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x146CC8u;
    {
        const bool branch_taken_0x146cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CC8u;
            // 0x146ccc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cc8) {
            ctx->pc = 0x147024u;
            goto label_147024;
        }
    }
    ctx->pc = 0x146CD0u;
label_146cd0:
    // 0x146cd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146cd4:
    // 0x146cd4: 0x0  nop
    ctx->pc = 0x146cd4u;
    // NOP
    // 0x146cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146cdc: 0xc0518e8  jal         func_1463A0
    ctx->pc = 0x146CDCu;
    SET_GPR_U32(ctx, 31, 0x146CE4u);
    ctx->pc = 0x146CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146CDCu;
            // 0x146ce0: 0x27a501a8  addiu       $a1, $sp, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463A0u;
    if (runtime->hasFunction(0x1463A0u)) {
        auto targetFn = runtime->lookupFunction(0x1463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CE4u; }
        if (ctx->pc != 0x146CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get__9input_strFPi_0x1463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146CE4u; }
        if (ctx->pc != 0x146CE4u) { return; }
    }
    ctx->pc = 0x146CE4u;
label_146ce4:
    // 0x146ce4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146CE4u;
    {
        const bool branch_taken_0x146ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CE4u;
            // 0x146ce8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ce4) {
            ctx->pc = 0x146CF4u;
            goto label_146cf4;
        }
    }
    ctx->pc = 0x146CECu;
    // 0x146cec: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x146CECu;
    {
        const bool branch_taken_0x146cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CECu;
            // 0x146cf0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cec) {
            ctx->pc = 0x147028u;
            goto label_147028;
        }
    }
    ctx->pc = 0x146CF4u;
label_146cf4:
    // 0x146cf4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x146cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x146cf8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x146cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x146cfc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146CFCu;
    {
        const bool branch_taken_0x146cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x146D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146CFCu;
            // 0x146d00: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cfc) {
            ctx->pc = 0x146D0Cu;
            goto label_146d0c;
        }
    }
    ctx->pc = 0x146D04u;
    // 0x146d04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x146d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x146d08: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x146d08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_146d0c:
    // 0x146d0c: 0x0  nop
    ctx->pc = 0x146d0cu;
    // NOP
    // 0x146d10: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x146D10u;
    {
        const bool branch_taken_0x146d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D10u;
            // 0x146d14: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d10) {
            ctx->pc = 0x146DACu;
            goto label_146dac;
        }
    }
    ctx->pc = 0x146D18u;
    // 0x146d18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x146D18u;
    {
        const bool branch_taken_0x146d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D18u;
            // 0x146d1c: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d18) {
            ctx->pc = 0x146D60u;
            goto label_146d60;
        }
    }
    ctx->pc = 0x146D20u;
    // 0x146d20: 0x286200a1  slti        $v0, $v1, 0xA1
    ctx->pc = 0x146d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x146d24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146D24u;
    {
        const bool branch_taken_0x146d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D24u;
            // 0x146d28: 0x286100e0  slti        $at, $v1, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d24) {
            ctx->pc = 0x146D34u;
            goto label_146d34;
        }
    }
    ctx->pc = 0x146D2Cu;
    // 0x146d2c: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x146D2Cu;
    {
        const bool branch_taken_0x146d2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x146d2c) {
            ctx->pc = 0x146DACu;
            goto label_146dac;
        }
    }
    ctx->pc = 0x146D34u;
label_146d34:
    // 0x146d34: 0x0  nop
    ctx->pc = 0x146d34u;
    // NOP
    // 0x146d38: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x146d3c: 0xa04300a0  sb          $v1, 0xA0($v0)
    ctx->pc = 0x146d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x146d40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d44: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x146d48: 0xc0518e8  jal         func_1463A0
    ctx->pc = 0x146D48u;
    SET_GPR_U32(ctx, 31, 0x146D50u);
    ctx->pc = 0x146D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146D48u;
            // 0x146d4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463A0u;
    if (runtime->hasFunction(0x1463A0u)) {
        auto targetFn = runtime->lookupFunction(0x1463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D50u; }
        if (ctx->pc != 0x146D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get__9input_strFPi_0x1463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D50u; }
        if (ctx->pc != 0x146D50u) { return; }
    }
    ctx->pc = 0x146D50u;
label_146d50:
    // 0x146d50: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x146D50u;
    {
        const bool branch_taken_0x146d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D50u;
            // 0x146d54: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d50) {
            ctx->pc = 0x146DACu;
            goto label_146dac;
        }
    }
    ctx->pc = 0x146D58u;
    // 0x146d58: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x146D58u;
    {
        const bool branch_taken_0x146d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146d58) {
            ctx->pc = 0x147024u;
            goto label_147024;
        }
    }
    ctx->pc = 0x146D60u;
label_146d60:
    // 0x146d60: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x146D60u;
    {
        const bool branch_taken_0x146d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x146D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D60u;
            // 0x146d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d60) {
            ctx->pc = 0x146DACu;
            goto label_146dac;
        }
    }
    ctx->pc = 0x146D68u;
    // 0x146d68: 0xc0518e8  jal         func_1463A0
    ctx->pc = 0x146D68u;
    SET_GPR_U32(ctx, 31, 0x146D70u);
    ctx->pc = 0x146D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146D68u;
            // 0x146d6c: 0x27a501ac  addiu       $a1, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463A0u;
    if (runtime->hasFunction(0x1463A0u)) {
        auto targetFn = runtime->lookupFunction(0x1463A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D70u; }
        if (ctx->pc != 0x146D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get__9input_strFPi_0x1463a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D70u; }
        if (ctx->pc != 0x146D70u) { return; }
    }
    ctx->pc = 0x146D70u;
label_146d70:
    // 0x146d70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146D70u;
    {
        const bool branch_taken_0x146d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D70u;
            // 0x146d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d70) {
            ctx->pc = 0x146D88u;
            goto label_146d88;
        }
    }
    ctx->pc = 0x146D78u;
    // 0x146d78: 0xc051c18  jal         func_147060
    ctx->pc = 0x146D78u;
    SET_GPR_U32(ctx, 31, 0x146D80u);
    ctx->pc = 0x147060u;
    if (runtime->hasFunction(0x147060u)) {
        auto targetFn = runtime->lookupFunction(0x147060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D80u; }
        if (ctx->pc != 0x146D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        back__9input_strFv_0x147060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D80u; }
        if (ctx->pc != 0x146D80u) { return; }
    }
    ctx->pc = 0x146D80u;
label_146d80:
    // 0x146d80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x146D80u;
    {
        const bool branch_taken_0x146d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146d80) {
            ctx->pc = 0x146DACu;
            goto label_146dac;
        }
    }
    ctx->pc = 0x146D88u;
label_146d88:
    // 0x146d88: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x146d8c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x146d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x146d90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146D90u;
    {
        const bool branch_taken_0x146d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D90u;
            // 0x146d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d90) {
            ctx->pc = 0x146DA8u;
            goto label_146da8;
        }
    }
    ctx->pc = 0x146D98u;
    // 0x146d98: 0xc051c18  jal         func_147060
    ctx->pc = 0x146D98u;
    SET_GPR_U32(ctx, 31, 0x146DA0u);
    ctx->pc = 0x147060u;
    if (runtime->hasFunction(0x147060u)) {
        auto targetFn = runtime->lookupFunction(0x147060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146DA0u; }
        if (ctx->pc != 0x146DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        back__9input_strFv_0x147060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146DA0u; }
        if (ctx->pc != 0x146DA0u) { return; }
    }
    ctx->pc = 0x146DA0u;
label_146da0:
    // 0x146da0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146DA0u;
    {
        const bool branch_taken_0x146da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146da0) {
            ctx->pc = 0x146DACu;
            goto label_146dac;
        }
    }
    ctx->pc = 0x146DA8u;
label_146da8:
    // 0x146da8: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x146da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_146dac:
    // 0x146dac: 0x0  nop
    ctx->pc = 0x146dacu;
    // NOP
    // 0x146db0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146DB0u;
    {
        const bool branch_taken_0x146db0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x146db0) {
            ctx->pc = 0x146DD8u;
            goto label_146dd8;
        }
    }
    ctx->pc = 0x146DB8u;
    // 0x146db8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x146dbc: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x146dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x146dc0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x146DC0u;
    {
        const bool branch_taken_0x146dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DC0u;
            // 0x146dc4: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dc0) {
            ctx->pc = 0x146DECu;
            goto label_146dec;
        }
    }
    ctx->pc = 0x146DC8u;
    // 0x146dc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146DC8u;
    {
        const bool branch_taken_0x146dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146dc8) {
            ctx->pc = 0x146DD8u;
            goto label_146dd8;
        }
    }
    ctx->pc = 0x146DD0u;
    // 0x146dd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x146DD0u;
    {
        const bool branch_taken_0x146dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DD0u;
            // 0x146dd4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dd0) {
            ctx->pc = 0x146DECu;
            goto label_146dec;
        }
    }
    ctx->pc = 0x146DD8u;
label_146dd8:
    // 0x146dd8: 0x83a301a8  lb          $v1, 0x1A8($sp)
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x146ddc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x146ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x146de0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x146de4: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x146DE4u;
    {
        const bool branch_taken_0x146de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DE4u;
            // 0x146de8: 0xa04300a0  sb          $v1, 0xA0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146de4) {
            ctx->pc = 0x146CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146cd4;
        }
    }
    ctx->pc = 0x146DECu;
label_146dec:
    // 0x146dec: 0x0  nop
    ctx->pc = 0x146decu;
    // NOP
    // 0x146df0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x146DF0u;
    {
        const bool branch_taken_0x146df0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x146DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146DF0u;
            // 0x146df4: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146df0) {
            ctx->pc = 0x146E00u;
            goto label_146e00;
        }
    }
    ctx->pc = 0x146DF8u;
    // 0x146df8: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x146DF8u;
    {
        const bool branch_taken_0x146df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146df8) {
            ctx->pc = 0x14701Cu;
            goto label_14701c;
        }
    }
    ctx->pc = 0x146E00u;
label_146e00:
    // 0x146e00: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x146e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x146e04: 0xa04000a0  sb          $zero, 0xA0($v0)
    ctx->pc = 0x146e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e08: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x146e08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x146e0c: 0x83a300a0  lb          $v1, 0xA0($sp)
    ctx->pc = 0x146e0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146e10: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x146e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x146e14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e18: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146e1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x146e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e20: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x146e20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e24: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146E24u;
    {
        const bool branch_taken_0x146e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x146E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E24u;
            // 0x146e28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e24) {
            ctx->pc = 0x146E30u;
            goto label_146e30;
        }
    }
    ctx->pc = 0x146E2Cu;
    // 0x146e2c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x146e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_146e30:
    // 0x146e30: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x146e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x146e34: 0x2444009f  addiu       $a0, $v0, 0x9F
    ctx->pc = 0x146e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 159));
    // 0x146e38: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x146e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146e3c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x146e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x146e40: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x146E40u;
    {
        const bool branch_taken_0x146e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146e40) {
            ctx->pc = 0x146EDCu;
            goto label_146edc;
        }
    }
    ctx->pc = 0x146E48u;
    // 0x146e48: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x146e48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e4c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x146E4Cu;
    {
        const bool branch_taken_0x146e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E4Cu;
            // 0x146e50: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e4c) {
            ctx->pc = 0x146EDCu;
            goto label_146edc;
        }
    }
    ctx->pc = 0x146E54u;
label_146e54:
    // 0x146e54: 0x0  nop
    ctx->pc = 0x146e54u;
    // NOP
    // 0x146e58: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x146E58u;
    {
        const bool branch_taken_0x146e58 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x146e58) {
            ctx->pc = 0x146ED8u;
            goto label_146ed8;
        }
    }
    ctx->pc = 0x146E60u;
    // 0x146e60: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x146E60u;
    {
        const bool branch_taken_0x146e60 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x146E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E60u;
            // 0x146e64: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e60) {
            ctx->pc = 0x146E7Cu;
            goto label_146e7c;
        }
    }
    ctx->pc = 0x146E68u;
    // 0x146e68: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x146e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x146e6c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x146e6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x146e70: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146E70u;
    {
        const bool branch_taken_0x146e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146e70) {
            ctx->pc = 0x146E7Cu;
            goto label_146e7c;
        }
    }
    ctx->pc = 0x146E78u;
    // 0x146e78: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x146e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_146e7c:
    // 0x146e7c: 0x0  nop
    ctx->pc = 0x146e7cu;
    // NOP
    // 0x146e80: 0xc051cc0  jal         func_147300
    ctx->pc = 0x146E80u;
    SET_GPR_U32(ctx, 31, 0x146E88u);
    ctx->pc = 0x147300u;
    if (runtime->hasFunction(0x147300u)) {
        auto targetFn = runtime->lookupFunction(0x147300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146E88u; }
        if (ctx->pc != 0x146E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckChar__Fc_0x147300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146E88u; }
        if (ctx->pc != 0x146E88u) { return; }
    }
    ctx->pc = 0x146E88u;
label_146e88:
    // 0x146e88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x146E88u;
    {
        const bool branch_taken_0x146e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e88) {
            ctx->pc = 0x146EBCu;
            goto label_146ebc;
        }
    }
    ctx->pc = 0x146E90u;
    // 0x146e90: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x146e90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146e94: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x146e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x146e98: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146E98u;
    {
        const bool branch_taken_0x146e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E98u;
            // 0x146e9c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e98) {
            ctx->pc = 0x146EBCu;
            goto label_146ebc;
        }
    }
    ctx->pc = 0x146EA0u;
    // 0x146ea0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x146EA0u;
    {
        const bool branch_taken_0x146ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146EA0u;
            // 0x146ea4: 0x28620030  slti        $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ea0) {
            ctx->pc = 0x146EBCu;
            goto label_146ebc;
        }
    }
    ctx->pc = 0x146EA8u;
    // 0x146ea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146EA8u;
    {
        const bool branch_taken_0x146ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146EA8u;
            // 0x146eac: 0x2861003a  slti        $at, $v1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ea8) {
            ctx->pc = 0x146EB8u;
            goto label_146eb8;
        }
    }
    ctx->pc = 0x146EB0u;
    // 0x146eb0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x146EB0u;
    {
        const bool branch_taken_0x146eb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x146eb0) {
            ctx->pc = 0x146EBCu;
            goto label_146ebc;
        }
    }
    ctx->pc = 0x146EB8u;
label_146eb8:
    // 0x146eb8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x146eb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146ebc:
    // 0x146ebc: 0x0  nop
    ctx->pc = 0x146ebcu;
    // NOP
    // 0x146ec0: 0xc051cc0  jal         func_147300
    ctx->pc = 0x146EC0u;
    SET_GPR_U32(ctx, 31, 0x146EC8u);
    ctx->pc = 0x146EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146EC0u;
            // 0x146ec4: 0x82440000  lb          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147300u;
    if (runtime->hasFunction(0x147300u)) {
        auto targetFn = runtime->lookupFunction(0x147300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146EC8u; }
        if (ctx->pc != 0x146EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckChar__Fc_0x147300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146EC8u; }
        if (ctx->pc != 0x146EC8u) { return; }
    }
    ctx->pc = 0x146EC8u;
label_146ec8:
    // 0x146ec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146EC8u;
    {
        const bool branch_taken_0x146ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146ec8) {
            ctx->pc = 0x146ED8u;
            goto label_146ed8;
        }
    }
    ctx->pc = 0x146ED0u;
    // 0x146ed0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x146ED0u;
    {
        const bool branch_taken_0x146ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146ED0u;
            // 0x146ed4: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ed0) {
            ctx->pc = 0x146EF4u;
            goto label_146ef4;
        }
    }
    ctx->pc = 0x146ED8u;
label_146ed8:
    // 0x146ed8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x146ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_146edc:
    // 0x146edc: 0x0  nop
    ctx->pc = 0x146edcu;
    // NOP
    // 0x146ee0: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x146ee4: 0x245200a0  addiu       $s2, $v0, 0xA0
    ctx->pc = 0x146ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x146ee8: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x146ee8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146eec: 0x1480ffd9  bnez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x146EECu;
    {
        const bool branch_taken_0x146eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x146eec) {
            ctx->pc = 0x146E54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146e54;
        }
    }
    ctx->pc = 0x146EF4u;
label_146ef4:
    // 0x146ef4: 0x0  nop
    ctx->pc = 0x146ef4u;
    // NOP
    // 0x146ef8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x146ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146efc: 0x16820002  bne         $s4, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146EFCu;
    {
        const bool branch_taken_0x146efc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x146efc) {
            ctx->pc = 0x146F08u;
            goto label_146f08;
        }
    }
    ctx->pc = 0x146F04u;
    // 0x146f04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x146f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146f08:
    // 0x146f08: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x146F08u;
    {
        const bool branch_taken_0x146f08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f08) {
            ctx->pc = 0x146F1Cu;
            goto label_146f1c;
        }
    }
    ctx->pc = 0x146F10u;
    // 0x146f10: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x146F10u;
    {
        const bool branch_taken_0x146f10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f10) {
            ctx->pc = 0x146F1Cu;
            goto label_146f1c;
        }
    }
    ctx->pc = 0x146F18u;
    // 0x146f18: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146f1c:
    // 0x146f1c: 0x0  nop
    ctx->pc = 0x146f1cu;
    // NOP
    // 0x146f20: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146F20u;
    {
        const bool branch_taken_0x146f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x146f20) {
            ctx->pc = 0x146F2Cu;
            goto label_146f2c;
        }
    }
    ctx->pc = 0x146F28u;
    // 0x146f28: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x146f28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146f2c:
    // 0x146f2c: 0x0  nop
    ctx->pc = 0x146f2cu;
    // NOP
    // 0x146f30: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x146F30u;
    {
        const bool branch_taken_0x146f30 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146F30u;
            // 0x146f34: 0xafb301a0  sw          $s3, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f30) {
            ctx->pc = 0x146F44u;
            goto label_146f44;
        }
    }
    ctx->pc = 0x146F38u;
    // 0x146f38: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x146f3c: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x146f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x146f40: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x146f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_146f44:
    // 0x146f44: 0x0  nop
    ctx->pc = 0x146f44u;
    // NOP
    // 0x146f48: 0x1660001c  bnez        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x146F48u;
    {
        const bool branch_taken_0x146f48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x146F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146F48u;
            // 0x146f4c: 0x27b000a0  addiu       $s0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f48) {
            ctx->pc = 0x146FBCu;
            goto label_146fbc;
        }
    }
    ctx->pc = 0x146F50u;
    // 0x146f50: 0x27b000a1  addiu       $s0, $sp, 0xA1
    ctx->pc = 0x146f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 161));
    // 0x146f54: 0xc04a422  jal         func_129088
    ctx->pc = 0x146F54u;
    SET_GPR_U32(ctx, 31, 0x146F5Cu);
    ctx->pc = 0x146F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146F54u;
            // 0x146f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F5Cu; }
        if (ctx->pc != 0x146F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F5Cu; }
        if (ctx->pc != 0x146F5Cu) { return; }
    }
    ctx->pc = 0x146F5Cu;
label_146f5c:
    // 0x146f5c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x146f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x146f60: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x146f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x146f64: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x146f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x146f68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x146f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146f6c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x146f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146f70: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x146f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x146f74: 0x46082b  sltu        $at, $v0, $a2
    ctx->pc = 0x146f74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x146f78: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x146F78u;
    {
        const bool branch_taken_0x146f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f78) {
            ctx->pc = 0x146F94u;
            goto label_146f94;
        }
    }
    ctx->pc = 0x146F80u;
    // 0x146f80: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x146f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x146f84: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x146F84u;
    SET_GPR_U32(ctx, 31, 0x146F8Cu);
    ctx->pc = 0x146F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146F84u;
            // 0x146f88: 0x24842720  addiu       $a0, $a0, 0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F8Cu; }
        if (ctx->pc != 0x146F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F8Cu; }
        if (ctx->pc != 0x146F8Cu) { return; }
    }
    ctx->pc = 0x146F8Cu;
label_146f8c:
    // 0x146f8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x146F8Cu;
    {
        const bool branch_taken_0x146f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146F8Cu;
            // 0x146f90: 0xafa001a4  sw          $zero, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f8c) {
            ctx->pc = 0x146FBCu;
            goto label_146fbc;
        }
    }
    ctx->pc = 0x146F94u;
label_146f94:
    // 0x146f94: 0x0  nop
    ctx->pc = 0x146f94u;
    // NOP
    // 0x146f98: 0xafa401a4  sw          $a0, 0x1A4($sp)
    ctx->pc = 0x146f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
    // 0x146f9c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x146F9Cu;
    SET_GPR_U32(ctx, 31, 0x146FA4u);
    ctx->pc = 0x146FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146F9Cu;
            // 0x146fa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FA4u; }
        if (ctx->pc != 0x146FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FA4u; }
        if (ctx->pc != 0x146FA4u) { return; }
    }
    ctx->pc = 0x146FA4u;
label_146fa4:
    // 0x146fa4: 0xc04a422  jal         func_129088
    ctx->pc = 0x146FA4u;
    SET_GPR_U32(ctx, 31, 0x146FACu);
    ctx->pc = 0x146FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146FA4u;
            // 0x146fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FACu; }
        if (ctx->pc != 0x146FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FACu; }
        if (ctx->pc != 0x146FACu) { return; }
    }
    ctx->pc = 0x146FACu;
label_146fac:
    // 0x146fac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146fb0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x146fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x146fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146fb8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x146fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_146fbc:
    // 0x146fbc: 0x0  nop
    ctx->pc = 0x146fbcu;
    // NOP
    // 0x146fc0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x146fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x146fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146fc8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146FC8u;
    {
        const bool branch_taken_0x146fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x146FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146FC8u;
            // 0x146fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fc8) {
            ctx->pc = 0x146FDCu;
            goto label_146fdc;
        }
    }
    ctx->pc = 0x146FD0u;
    // 0x146fd0: 0xc048fc0  jal         func_123F00
    ctx->pc = 0x146FD0u;
    SET_GPR_U32(ctx, 31, 0x146FD8u);
    ctx->pc = 0x123F00u;
    if (runtime->hasFunction(0x123F00u)) {
        auto targetFn = runtime->lookupFunction(0x123F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FD8u; }
        if (ctx->pc != 0x146FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x123f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FD8u; }
        if (ctx->pc != 0x146FD8u) { return; }
    }
    ctx->pc = 0x146FD8u;
label_146fd8:
    // 0x146fd8: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x146fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_146fdc:
    // 0x146fdc: 0x0  nop
    ctx->pc = 0x146fdcu;
    // NOP
    // 0x146fe0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x146fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x146fe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x146fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146fe8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x146FE8u;
    {
        const bool branch_taken_0x146fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x146FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146FE8u;
            // 0x146fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fe8) {
            ctx->pc = 0x147004u;
            goto label_147004;
        }
    }
    ctx->pc = 0x146FF0u;
    // 0x146ff0: 0xc048fb8  jal         func_123EE0
    ctx->pc = 0x146FF0u;
    SET_GPR_U32(ctx, 31, 0x146FF8u);
    ctx->pc = 0x123EE0u;
    if (runtime->hasFunction(0x123EE0u)) {
        auto targetFn = runtime->lookupFunction(0x123EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FF8u; }
        if (ctx->pc != 0x146FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atof_0x123ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FF8u; }
        if (ctx->pc != 0x146FF8u) { return; }
    }
    ctx->pc = 0x146FF8u;
label_146ff8:
    // 0x146ff8: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x146FF8u;
    SET_GPR_U32(ctx, 31, 0x147000u);
    ctx->pc = 0x146FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146FF8u;
            // 0x146ffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147000u; }
        if (ctx->pc != 0x147000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147000u; }
        if (ctx->pc != 0x147000u) { return; }
    }
    ctx->pc = 0x147000u;
label_147000:
    // 0x147000: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x147000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_147004:
    // 0x147004: 0x0  nop
    ctx->pc = 0x147004u;
    // NOP
    // 0x147008: 0xdfa501a0  ld          $a1, 0x1A0($sp)
    ctx->pc = 0x147008u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x14700c: 0xc051940  jal         func_146500
    ctx->pc = 0x14700Cu;
    SET_GPR_U32(ctx, 31, 0x147014u);
    ctx->pc = 0x147010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14700Cu;
            // 0x147010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146500u;
    if (runtime->hasFunction(0x146500u)) {
        auto targetFn = runtime->lookupFunction(0x146500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147014u; }
        if (ctx->pc != 0x147014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PushStack__18CScriptInterpreterF9SPI_STACK_0x146500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147014u; }
        if (ctx->pc != 0x147014u) { return; }
    }
    ctx->pc = 0x147014u;
label_147014:
    // 0x147014: 0x17c0ff28  bnez        $fp, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x147014u;
    {
        const bool branch_taken_0x147014 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x147014) {
            ctx->pc = 0x146CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146cb8;
        }
    }
    ctx->pc = 0x14701Cu;
label_14701c:
    // 0x14701c: 0x0  nop
    ctx->pc = 0x14701cu;
    // NOP
    // 0x147020: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x147020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_147024:
    // 0x147024: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x147024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_147028:
    // 0x147028: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x147028u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14702c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14702cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147030: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x147030u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147034: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x147034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147038: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x147038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14703c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14703cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14704c: 0x3e00008  jr          $ra
    ctx->pc = 0x14704Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14704Cu;
            // 0x147050: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147054u;
}
