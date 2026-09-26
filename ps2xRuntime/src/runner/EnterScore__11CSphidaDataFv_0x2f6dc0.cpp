#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterScore__11CSphidaDataFv
// Address: 0x2f6dc0 - 0x2f6f54
void EnterScore__11CSphidaDataFv_0x2f6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterScore__11CSphidaDataFv_0x2f6dc0");
#endif

    switch (ctx->pc) {
        case 0x2f6decu: goto label_2f6dec;
        case 0x2f6df8u: goto label_2f6df8;
        case 0x2f6e00u: goto label_2f6e00;
        case 0x2f6e20u: goto label_2f6e20;
        case 0x2f6e28u: goto label_2f6e28;
        case 0x2f6e38u: goto label_2f6e38;
        case 0x2f6e58u: goto label_2f6e58;
        case 0x2f6e6cu: goto label_2f6e6c;
        case 0x2f6eccu: goto label_2f6ecc;
        case 0x2f6ef8u: goto label_2f6ef8;
        default: break;
    }

    ctx->pc = 0x2f6dc0u;

    // 0x2f6dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f6dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f6dc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f6dc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f6dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f6dcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f6dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f6dd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f6dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f6dd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f6dd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f6dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f6ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6de0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2f6de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6de4: 0xc0bdb0c  jal         func_2F6C30
    ctx->pc = 0x2F6DE4u;
    SET_GPR_U32(ctx, 31, 0x2F6DECu);
    ctx->pc = 0x2F6DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6DE4u;
            // 0x2f6de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6C30u;
    if (runtime->hasFunction(0x2F6C30u)) {
        auto targetFn = runtime->lookupFunction(0x2F6C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6DECu; }
        if (ctx->pc != 0x2F6DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHorlScore__11CSphidaDataFi_0x2f6c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6DECu; }
        if (ctx->pc != 0x2F6DECu) { return; }
    }
    ctx->pc = 0x2F6DECu;
label_2f6dec:
    // 0x2f6dec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f6decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6df0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f6df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6df4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f6df8:
    // 0x2f6df8: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2F6DF8u;
    SET_GPR_U32(ctx, 31, 0x2F6E00u);
    ctx->pc = 0x2F6DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6DF8u;
            // 0x2f6dfc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E00u; }
        if (ctx->pc != 0x2F6E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E00u; }
        if (ctx->pc != 0x2F6E00u) { return; }
    }
    ctx->pc = 0x2F6E00u;
label_2f6e00:
    // 0x2f6e00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f6e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e04: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x2f6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f6e08: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x2f6e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f6e0c: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x2F6E0Cu;
    {
        const bool branch_taken_0x2f6e0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E0Cu;
            // 0x2f6e10: 0x2a81003f  slti        $at, $s4, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e0c) {
            ctx->pc = 0x2F6F14u;
            goto label_2f6f14;
        }
    }
    ctx->pc = 0x2F6E14u;
    // 0x2f6e14: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2F6E14u;
    {
        const bool branch_taken_0x2f6e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E14u;
            // 0x2f6e18: 0x2410003e  addiu       $s0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e14) {
            ctx->pc = 0x2F6E48u;
            goto label_2f6e48;
        }
    }
    ctx->pc = 0x2F6E1Cu;
    // 0x2f6e1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f6e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f6e20:
    // 0x2f6e20: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2F6E20u;
    SET_GPR_U32(ctx, 31, 0x2F6E28u);
    ctx->pc = 0x2F6E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E20u;
            // 0x2f6e24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E28u; }
        if (ctx->pc != 0x2F6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E28u; }
        if (ctx->pc != 0x2F6E28u) { return; }
    }
    ctx->pc = 0x2F6E28u;
label_2f6e28:
    // 0x2f6e28: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2f6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2f6e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f6e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e30: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F6E30u;
    SET_GPR_U32(ctx, 31, 0x2F6E38u);
    ctx->pc = 0x2F6E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E30u;
            // 0x2f6e34: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E38u; }
        if (ctx->pc != 0x2F6E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E38u; }
        if (ctx->pc != 0x2F6E38u) { return; }
    }
    ctx->pc = 0x2F6E38u;
label_2f6e38:
    // 0x2f6e38: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2f6e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f6e3c: 0x214082a  slt         $at, $s0, $s4
    ctx->pc = 0x2f6e3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2f6e40: 0x1020fff7  beqz        $at, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F6E40u;
    {
        const bool branch_taken_0x2f6e40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E40u;
            // 0x2f6e44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e40) {
            ctx->pc = 0x2F6E20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6e20;
        }
    }
    ctx->pc = 0x2F6E48u;
label_2f6e48:
    // 0x2f6e48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f6e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e4c: 0x2665147c  addiu       $a1, $s3, 0x147C
    ctx->pc = 0x2f6e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5244));
    // 0x2f6e50: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F6E50u;
    SET_GPR_U32(ctx, 31, 0x2F6E58u);
    ctx->pc = 0x2F6E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6E50u;
            // 0x2f6e54: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E58u; }
        if (ctx->pc != 0x2F6E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6E58u; }
        if (ctx->pc != 0x2F6E58u) { return; }
    }
    ctx->pc = 0x2F6E58u;
label_2f6e58:
    // 0x2f6e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e60: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x2f6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x2f6e64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e68: 0xae510020  sw          $s1, 0x20($s2)
    ctx->pc = 0x2f6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 17));
label_2f6e6c:
    // 0x2f6e6c: 0x2643021  addu        $a2, $s3, $a0
    ctx->pc = 0x2f6e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2f6e70: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x2f6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2f6e74: 0x90c21448  lbu         $v0, 0x1448($a2)
    ctx->pc = 0x2f6e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5192)));
    // 0x2f6e78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2f6e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2f6e7c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2f6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f6e80: 0xa0620024  sb          $v0, 0x24($v1)
    ctx->pc = 0x2f6e80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6e84: 0x90c2144a  lbu         $v0, 0x144A($a2)
    ctx->pc = 0x2f6e84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5194)));
    // 0x2f6e88: 0xa0620025  sb          $v0, 0x25($v1)
    ctx->pc = 0x2f6e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6e8c: 0x90c2144c  lbu         $v0, 0x144C($a2)
    ctx->pc = 0x2f6e8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5196)));
    // 0x2f6e90: 0xa0620026  sb          $v0, 0x26($v1)
    ctx->pc = 0x2f6e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6e94: 0x90c2144e  lbu         $v0, 0x144E($a2)
    ctx->pc = 0x2f6e94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5198)));
    // 0x2f6e98: 0xa0620027  sb          $v0, 0x27($v1)
    ctx->pc = 0x2f6e98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6e9c: 0x90c21450  lbu         $v0, 0x1450($a2)
    ctx->pc = 0x2f6e9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5200)));
    // 0x2f6ea0: 0xa0620028  sb          $v0, 0x28($v1)
    ctx->pc = 0x2f6ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6ea4: 0x90c21452  lbu         $v0, 0x1452($a2)
    ctx->pc = 0x2f6ea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5202)));
    // 0x2f6ea8: 0xa0620029  sb          $v0, 0x29($v1)
    ctx->pc = 0x2f6ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6eac: 0x90c21454  lbu         $v0, 0x1454($a2)
    ctx->pc = 0x2f6eacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5204)));
    // 0x2f6eb0: 0xa062002a  sb          $v0, 0x2A($v1)
    ctx->pc = 0x2f6eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6eb4: 0x90c21456  lbu         $v0, 0x1456($a2)
    ctx->pc = 0x2f6eb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5206)));
    // 0x2f6eb8: 0x18a0ffec  blez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F6EB8u;
    {
        const bool branch_taken_0x2f6eb8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2F6EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6EB8u;
            // 0x2f6ebc: 0xa062002b  sb          $v0, 0x2B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6eb8) {
            ctx->pc = 0x2F6E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6e6c;
        }
    }
    ctx->pc = 0x2F6EC0u;
    // 0x2f6ec0: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x2f6ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f6ec4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6EC4u;
    {
        const bool branch_taken_0x2f6ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6EC4u;
            // 0x2f6ec8: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ec4) {
            ctx->pc = 0x2F6EECu;
            goto label_2f6eec;
        }
    }
    ctx->pc = 0x2F6ECCu;
label_2f6ecc:
    // 0x2f6ecc: 0x2661021  addu        $v0, $s3, $a2
    ctx->pc = 0x2f6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2f6ed0: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x2f6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2f6ed4: 0x90441448  lbu         $a0, 0x1448($v0)
    ctx->pc = 0x2f6ed4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5192)));
    // 0x2f6ed8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f6ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f6edc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2f6edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2f6ee0: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x2f6ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f6ee4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F6EE4u;
    {
        const bool branch_taken_0x2f6ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6EE4u;
            // 0x2f6ee8: 0xa0640024  sb          $a0, 0x24($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ee4) {
            ctx->pc = 0x2F6ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6ecc;
        }
    }
    ctx->pc = 0x2F6EECu;
label_2f6eec:
    // 0x2f6eec: 0x0  nop
    ctx->pc = 0x2f6eecu;
    // NOP
    // 0x2f6ef0: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2F6EF0u;
    SET_GPR_U32(ctx, 31, 0x2F6EF8u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6EF8u; }
        if (ctx->pc != 0x2F6EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6EF8u; }
        if (ctx->pc != 0x2F6EF8u) { return; }
    }
    ctx->pc = 0x2F6EF8u;
label_2f6ef8:
    // 0x2f6ef8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2f6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f6efc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2f6efcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f6f00: 0x0  nop
    ctx->pc = 0x2f6f00u;
    // NOP
    // 0x2f6f04: 0x0  nop
    ctx->pc = 0x2f6f04u;
    // NOP
    // 0x2f6f08: 0x1010  mfhi        $v0
    ctx->pc = 0x2f6f08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f6f0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F0Cu;
    {
        const bool branch_taken_0x2f6f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F0Cu;
            // 0x2f6f10: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f0c) {
            ctx->pc = 0x2F6F24u;
            goto label_2f6f24;
        }
    }
    ctx->pc = 0x2F6F14u;
label_2f6f14:
    // 0x2f6f14: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f6f14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f6f18: 0x2a820040  slti        $v0, $s4, 0x40
    ctx->pc = 0x2f6f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2f6f1c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2F6F1Cu;
    {
        const bool branch_taken_0x2f6f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F1Cu;
            // 0x2f6f20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f1c) {
            ctx->pc = 0x2F6DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6df8;
        }
    }
    ctx->pc = 0x2F6F24u;
label_2f6f24:
    // 0x2f6f24: 0x0  nop
    ctx->pc = 0x2f6f24u;
    // NOP
    // 0x2f6f28: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6F28u;
    {
        const bool branch_taken_0x2f6f28 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2F6F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F28u;
            // 0x2f6f2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f28) {
            ctx->pc = 0x2F6F34u;
            goto label_2f6f34;
        }
    }
    ctx->pc = 0x2F6F30u;
    // 0x2f6f30: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2f6f34:
    // 0x2f6f34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f6f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6f38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f6f38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6f3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f6f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F4Cu;
            // 0x2f6f50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6F54u;
}
