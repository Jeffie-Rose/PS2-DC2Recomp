#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateRiver__9CEditGridFii
// Address: 0x297d10 - 0x29803c
void UpdateRiver__9CEditGridFii_0x297d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateRiver__9CEditGridFii_0x297d10");
#endif

    switch (ctx->pc) {
        case 0x297d4cu: goto label_297d4c;
        case 0x297db4u: goto label_297db4;
        case 0x297e28u: goto label_297e28;
        case 0x297e3cu: goto label_297e3c;
        case 0x297e50u: goto label_297e50;
        case 0x297e68u: goto label_297e68;
        case 0x297e7cu: goto label_297e7c;
        case 0x297e90u: goto label_297e90;
        case 0x297ea8u: goto label_297ea8;
        case 0x297ebcu: goto label_297ebc;
        case 0x297ed0u: goto label_297ed0;
        case 0x297ee8u: goto label_297ee8;
        case 0x297efcu: goto label_297efc;
        case 0x297f10u: goto label_297f10;
        default: break;
    }

    ctx->pc = 0x297d10u;

    // 0x297d10: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x297d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x297d14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x297d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x297d18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x297d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x297d1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x297d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x297d20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x297d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x297d24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x297d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x297d28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x297d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x297d2c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x297d2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x297d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x297d34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x297d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297d3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x297d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297d44: 0xc0a5e40  jal         func_297900
    ctx->pc = 0x297D44u;
    SET_GPR_U32(ctx, 31, 0x297D4Cu);
    ctx->pc = 0x297D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297D44u;
            // 0x297d48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297900u;
    if (runtime->hasFunction(0x297900u)) {
        auto targetFn = runtime->lookupFunction(0x297900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D4Cu; }
        if (ctx->pc != 0x297D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__9CEditGridFii_0x297900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297D4Cu; }
        if (ctx->pc != 0x297D4Cu) { return; }
    }
    ctx->pc = 0x297D4Cu;
label_297d4c:
    // 0x297d4c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x297d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x297d50: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x297d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297d54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297D54u;
    {
        const bool branch_taken_0x297d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297d54) {
            ctx->pc = 0x297D64u;
            goto label_297d64;
        }
    }
    ctx->pc = 0x297D5Cu;
    // 0x297d5c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x297D5Cu;
    {
        const bool branch_taken_0x297d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D5Cu;
            // 0x297d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d5c) {
            ctx->pc = 0x29800Cu;
            goto label_29800c;
        }
    }
    ctx->pc = 0x297D64u;
label_297d64:
    // 0x297d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x297d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297d68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297D68u;
    {
        const bool branch_taken_0x297d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D68u;
            // 0x297d6c: 0x3c0201f0  lui         $v0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d68) {
            ctx->pc = 0x297D78u;
            goto label_297d78;
        }
    }
    ctx->pc = 0x297D70u;
    // 0x297d70: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x297D70u;
    {
        const bool branch_taken_0x297d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297D70u;
            // 0x297d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297d70) {
            ctx->pc = 0x29800Cu;
            goto label_29800c;
        }
    }
    ctx->pc = 0x297D78u;
label_297d78:
    // 0x297d78: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x297d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x297d7c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x297d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x297d80: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x297d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x297d84: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x297d84u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297d88: 0x24845340  addiu       $a0, $a0, 0x5340
    ctx->pc = 0x297d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21312));
    // 0x297d8c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x297d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x297d90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x297d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x297d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d98: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x297d98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297d9c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x297d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x297da0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x297da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x297da4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x297da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x297da8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x297da8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x297dac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x297dacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x297db0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x297db0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_297db4:
    // 0x297db4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x297db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x297db8: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x297db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x297dbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x297dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x297dc0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x297dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297dc4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x297dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297dc8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x297dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x297dcc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x297dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x297dd0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x297dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297dd4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297DD4u;
    {
        const bool branch_taken_0x297dd4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x297DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297DD4u;
            // 0x297dd8: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297dd4) {
            ctx->pc = 0x297DE4u;
            goto label_297de4;
        }
    }
    ctx->pc = 0x297DDCu;
    // 0x297ddc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297de0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x297de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_297de4:
    // 0x297de4: 0x0  nop
    ctx->pc = 0x297de4u;
    // NOP
    // 0x297de8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x297de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x297dec: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x297DECu;
    {
        const bool branch_taken_0x297dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x297DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297DECu;
            // 0x297df0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297dec) {
            ctx->pc = 0x297ED8u;
            goto label_297ed8;
        }
    }
    ctx->pc = 0x297DF4u;
    // 0x297df4: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x297DF4u;
    {
        const bool branch_taken_0x297df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x297DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297DF4u;
            // 0x297df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297df4) {
            ctx->pc = 0x297E98u;
            goto label_297e98;
        }
    }
    ctx->pc = 0x297DFCu;
    // 0x297dfc: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x297DFCu;
    {
        const bool branch_taken_0x297dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x297dfc) {
            ctx->pc = 0x297E58u;
            goto label_297e58;
        }
    }
    ctx->pc = 0x297E04u;
    // 0x297e04: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297E04u;
    {
        const bool branch_taken_0x297e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e04) {
            ctx->pc = 0x297E14u;
            goto label_297e14;
        }
    }
    ctx->pc = 0x297E0Cu;
    // 0x297e0c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x297E0Cu;
    {
        const bool branch_taken_0x297e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e0c) {
            ctx->pc = 0x297F14u;
            goto label_297f14;
        }
    }
    ctx->pc = 0x297E14u;
label_297e14:
    // 0x297e14: 0x0  nop
    ctx->pc = 0x297e14u;
    // NOP
    // 0x297e18: 0x2685ffff  addiu       $a1, $s4, -0x1
    ctx->pc = 0x297e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x297e1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e20: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297E20u;
    SET_GPR_U32(ctx, 31, 0x297E28u);
    ctx->pc = 0x297E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E20u;
            // 0x297e24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E28u; }
        if (ctx->pc != 0x297E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E28u; }
        if (ctx->pc != 0x297E28u) { return; }
    }
    ctx->pc = 0x297E28u;
label_297e28:
    // 0x297e28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e2c: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x297e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x297e30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e34: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297E34u;
    SET_GPR_U32(ctx, 31, 0x297E3Cu);
    ctx->pc = 0x297E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E34u;
            // 0x297e38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E3Cu; }
        if (ctx->pc != 0x297E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E3Cu; }
        if (ctx->pc != 0x297E3Cu) { return; }
    }
    ctx->pc = 0x297E3Cu;
label_297e3c:
    // 0x297e3c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x297e3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e40: 0x2685ffff  addiu       $a1, $s4, -0x1
    ctx->pc = 0x297e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x297e44: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x297e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x297e48: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297E48u;
    SET_GPR_U32(ctx, 31, 0x297E50u);
    ctx->pc = 0x297E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E48u;
            // 0x297e4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E50u; }
        if (ctx->pc != 0x297E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E50u; }
        if (ctx->pc != 0x297E50u) { return; }
    }
    ctx->pc = 0x297E50u;
label_297e50:
    // 0x297e50: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x297E50u;
    {
        const bool branch_taken_0x297e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E50u;
            // 0x297e54: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e50) {
            ctx->pc = 0x297F14u;
            goto label_297f14;
        }
    }
    ctx->pc = 0x297E58u;
label_297e58:
    // 0x297e58: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x297e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x297e5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e60: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297E60u;
    SET_GPR_U32(ctx, 31, 0x297E68u);
    ctx->pc = 0x297E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E60u;
            // 0x297e64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E68u; }
        if (ctx->pc != 0x297E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E68u; }
        if (ctx->pc != 0x297E68u) { return; }
    }
    ctx->pc = 0x297E68u;
label_297e68:
    // 0x297e68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e6c: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x297e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x297e70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e74: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297E74u;
    SET_GPR_U32(ctx, 31, 0x297E7Cu);
    ctx->pc = 0x297E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E74u;
            // 0x297e78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E7Cu; }
        if (ctx->pc != 0x297E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E7Cu; }
        if (ctx->pc != 0x297E7Cu) { return; }
    }
    ctx->pc = 0x297E7Cu;
label_297e7c:
    // 0x297e7c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x297e7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e80: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x297e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x297e84: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x297e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x297e88: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297E88u;
    SET_GPR_U32(ctx, 31, 0x297E90u);
    ctx->pc = 0x297E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E88u;
            // 0x297e8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E90u; }
        if (ctx->pc != 0x297E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E90u; }
        if (ctx->pc != 0x297E90u) { return; }
    }
    ctx->pc = 0x297E90u;
label_297e90:
    // 0x297e90: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x297E90u;
    {
        const bool branch_taken_0x297e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E90u;
            // 0x297e94: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e90) {
            ctx->pc = 0x297F14u;
            goto label_297f14;
        }
    }
    ctx->pc = 0x297E98u;
label_297e98:
    // 0x297e98: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x297e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x297e9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ea0: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297EA0u;
    SET_GPR_U32(ctx, 31, 0x297EA8u);
    ctx->pc = 0x297EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EA0u;
            // 0x297ea4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA8u; }
        if (ctx->pc != 0x297EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA8u; }
        if (ctx->pc != 0x297EA8u) { return; }
    }
    ctx->pc = 0x297EA8u;
label_297ea8:
    // 0x297ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297eac: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x297eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x297eb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297eb4: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297EB4u;
    SET_GPR_U32(ctx, 31, 0x297EBCu);
    ctx->pc = 0x297EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EB4u;
            // 0x297eb8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EBCu; }
        if (ctx->pc != 0x297EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EBCu; }
        if (ctx->pc != 0x297EBCu) { return; }
    }
    ctx->pc = 0x297EBCu;
label_297ebc:
    // 0x297ebc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x297ebcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ec0: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x297ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x297ec4: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x297ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x297ec8: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297EC8u;
    SET_GPR_U32(ctx, 31, 0x297ED0u);
    ctx->pc = 0x297ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EC8u;
            // 0x297ecc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297ED0u; }
        if (ctx->pc != 0x297ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297ED0u; }
        if (ctx->pc != 0x297ED0u) { return; }
    }
    ctx->pc = 0x297ED0u;
label_297ed0:
    // 0x297ed0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x297ED0u;
    {
        const bool branch_taken_0x297ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297ED0u;
            // 0x297ed4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ed0) {
            ctx->pc = 0x297F14u;
            goto label_297f14;
        }
    }
    ctx->pc = 0x297ED8u;
label_297ed8:
    // 0x297ed8: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x297ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x297edc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ee0: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297EE0u;
    SET_GPR_U32(ctx, 31, 0x297EE8u);
    ctx->pc = 0x297EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EE0u;
            // 0x297ee4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EE8u; }
        if (ctx->pc != 0x297EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EE8u; }
        if (ctx->pc != 0x297EE8u) { return; }
    }
    ctx->pc = 0x297EE8u;
label_297ee8:
    // 0x297ee8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297eec: 0x2685ffff  addiu       $a1, $s4, -0x1
    ctx->pc = 0x297eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x297ef0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x297ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ef4: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297EF4u;
    SET_GPR_U32(ctx, 31, 0x297EFCu);
    ctx->pc = 0x297EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EF4u;
            // 0x297ef8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EFCu; }
        if (ctx->pc != 0x297EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EFCu; }
        if (ctx->pc != 0x297EFCu) { return; }
    }
    ctx->pc = 0x297EFCu;
label_297efc:
    // 0x297efc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x297efcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f00: 0x2685ffff  addiu       $a1, $s4, -0x1
    ctx->pc = 0x297f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x297f04: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x297f08: 0xc0a6010  jal         func_298040
    ctx->pc = 0x297F08u;
    SET_GPR_U32(ctx, 31, 0x297F10u);
    ctx->pc = 0x297F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F08u;
            // 0x297f0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F10u; }
        if (ctx->pc != 0x297F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F10u; }
        if (ctx->pc != 0x297F10u) { return; }
    }
    ctx->pc = 0x297F10u;
label_297f10:
    // 0x297f10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x297f10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297f14:
    // 0x297f14: 0x0  nop
    ctx->pc = 0x297f14u;
    // NOP
    // 0x297f18: 0x2372021  addu        $a0, $s1, $s7
    ctx->pc = 0x297f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x297f1c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x297F1Cu;
    {
        const bool branch_taken_0x297f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x297F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F1Cu;
            // 0x297f20: 0x25d1821  addu        $v1, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f1c) {
            ctx->pc = 0x297F48u;
            goto label_297f48;
        }
    }
    ctx->pc = 0x297F24u;
    // 0x297f24: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x297f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x297f28: 0xac6000d0  sw          $zero, 0xD0($v1)
    ctx->pc = 0x297f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
    // 0x297f2c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297F2Cu;
    {
        const bool branch_taken_0x297f2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x297F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F2Cu;
            // 0x297f30: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f2c) {
            ctx->pc = 0x297F40u;
            goto label_297f40;
        }
    }
    ctx->pc = 0x297F34u;
    // 0x297f34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x297F34u;
    {
        const bool branch_taken_0x297f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F34u;
            // 0x297f38: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f34) {
            ctx->pc = 0x297F44u;
            goto label_297f44;
        }
    }
    ctx->pc = 0x297F3Cu;
    // 0x297f3c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x297f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_297f40:
    // 0x297f40: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x297f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_297f44:
    // 0x297f44: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x297f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
label_297f48:
    // 0x297f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297f4c: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x297F4Cu;
    {
        const bool branch_taken_0x297f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x297F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F4Cu;
            // 0x297f50: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f4c) {
            ctx->pc = 0x297F98u;
            goto label_297f98;
        }
    }
    ctx->pc = 0x297F54u;
    // 0x297f54: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x297F54u;
    {
        const bool branch_taken_0x297f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F54u;
            // 0x297f58: 0xac4300d0  sw          $v1, 0xD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f54) {
            ctx->pc = 0x297F64u;
            goto label_297f64;
        }
    }
    ctx->pc = 0x297F5Cu;
    // 0x297f5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x297F5Cu;
    {
        const bool branch_taken_0x297f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F5Cu;
            // 0x297f60: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f5c) {
            ctx->pc = 0x297F6Cu;
            goto label_297f6c;
        }
    }
    ctx->pc = 0x297F64u;
label_297f64:
    // 0x297f64: 0x0  nop
    ctx->pc = 0x297f64u;
    // NOP
    // 0x297f68: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x297f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
label_297f6c:
    // 0x297f6c: 0x0  nop
    ctx->pc = 0x297f6cu;
    // NOP
    // 0x297f70: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x297f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x297f74: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x297f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x297f78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x297f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x297f7c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x297f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x297f80: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x297F80u;
    {
        const bool branch_taken_0x297f80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x297F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F80u;
            // 0x297f84: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f80) {
            ctx->pc = 0x297F94u;
            goto label_297f94;
        }
    }
    ctx->pc = 0x297F88u;
    // 0x297f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x297F88u;
    {
        const bool branch_taken_0x297f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297f88) {
            ctx->pc = 0x297F94u;
            goto label_297f94;
        }
    }
    ctx->pc = 0x297F90u;
    // 0x297f90: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x297f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_297f94:
    // 0x297f94: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x297f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_297f98:
    // 0x297f98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x297f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297f9c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x297F9Cu;
    {
        const bool branch_taken_0x297f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297f9c) {
            ctx->pc = 0x297FCCu;
            goto label_297fcc;
        }
    }
    ctx->pc = 0x297FA4u;
    // 0x297fa4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x297FA4u;
    {
        const bool branch_taken_0x297fa4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297FA4u;
            // 0x297fa8: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297fa4) {
            ctx->pc = 0x297FBCu;
            goto label_297fbc;
        }
    }
    ctx->pc = 0x297FACu;
    // 0x297fac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x297facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x297fb0: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x297fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x297fb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297FB4u;
    {
        const bool branch_taken_0x297fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297FB4u;
            // 0x297fb8: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297fb4) {
            ctx->pc = 0x297FCCu;
            goto label_297fcc;
        }
    }
    ctx->pc = 0x297FBCu;
label_297fbc:
    // 0x297fbc: 0x0  nop
    ctx->pc = 0x297fbcu;
    // NOP
    // 0x297fc0: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x297fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x297fc4: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x297fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x297fc8: 0xac5000e0  sw          $s0, 0xE0($v0)
    ctx->pc = 0x297fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 16));
label_297fcc:
    // 0x297fcc: 0x0  nop
    ctx->pc = 0x297fccu;
    // NOP
    // 0x297fd0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x297fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297fd4: 0x25d2821  addu        $a1, $s2, $sp
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x297fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x297fdc: 0x84a400d0  lh          $a0, 0xD0($a1)
    ctx->pc = 0x297fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x297fe0: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x297fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x297fe4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x297fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x297fe8: 0x5e3021  addu        $a2, $v0, $fp
    ctx->pc = 0x297fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x297fec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x297fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x297ff0: 0x27de0002  addiu       $fp, $fp, 0x2
    ctx->pc = 0x297ff0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 2));
    // 0x297ff4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x297ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x297ff8: 0xa4c20004  sh          $v0, 0x4($a2)
    ctx->pc = 0x297ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x297ffc: 0x84a200e0  lh          $v0, 0xE0($a1)
    ctx->pc = 0x297ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x298000: 0x1460ff6c  bnez        $v1, . + 4 + (-0x94 << 2)
    ctx->pc = 0x298000u;
    {
        const bool branch_taken_0x298000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298000u;
            // 0x298004: 0xa4c2000c  sh          $v0, 0xC($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298000) {
            ctx->pc = 0x297DB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297db4;
        }
    }
    ctx->pc = 0x298008u;
    // 0x298008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29800c:
    // 0x29800c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29800cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298010: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x298010u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298014: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x298014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298018: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x298018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29801c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29801cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x298020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x298024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29802c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29802cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298034: 0x3e00008  jr          $ra
    ctx->pc = 0x298034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298034u;
            // 0x298038: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29803Cu;
}
