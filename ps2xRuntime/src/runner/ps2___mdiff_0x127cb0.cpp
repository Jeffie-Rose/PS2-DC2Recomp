#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __mdiff
// Address: 0x127cb0 - 0x127e40
void ps2___mdiff_0x127cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mdiff_0x127cb0");
#endif

    switch (ctx->pc) {
        case 0x127ce0u: goto label_127ce0;
        case 0x127cf4u: goto label_127cf4;
        case 0x127d2cu: goto label_127d2c;
        case 0x127d60u: goto label_127d60;
        case 0x127db8u: goto label_127db8;
        case 0x127e00u: goto label_127e00;
        default: break;
    }

    ctx->pc = 0x127cb0u;

    // 0x127cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x127cb4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x127cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x127cb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x127cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x127cbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x127cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x127cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x127cc4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x127cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x127cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127cd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x127cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x127cd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x127cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cd8: 0xc049f12  jal         func_127C48
    ctx->pc = 0x127CD8u;
    SET_GPR_U32(ctx, 31, 0x127CE0u);
    ctx->pc = 0x127CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127CD8u;
            // 0x127cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CE0u; }
        if (ctx->pc != 0x127CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CE0u; }
        if (ctx->pc != 0x127CE0u) { return; }
    }
    ctx->pc = 0x127CE0u;
label_127ce0:
    // 0x127ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x127ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ce4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127CE4u;
    {
        const bool branch_taken_0x127ce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x127CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127CE4u;
            // 0x127ce8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ce4) {
            ctx->pc = 0x127D08u;
            goto label_127d08;
        }
    }
    ctx->pc = 0x127CECu;
    // 0x127cec: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x127CECu;
    SET_GPR_U32(ctx, 31, 0x127CF4u);
    ctx->pc = 0x127CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127CECu;
            // 0x127cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CF4u; }
        if (ctx->pc != 0x127CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127CF4u; }
        if (ctx->pc != 0x127CF4u) { return; }
    }
    ctx->pc = 0x127CF4u;
label_127cf4:
    // 0x127cf4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x127cf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127cfc: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x127cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x127d00: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x127D00u;
    {
        const bool branch_taken_0x127d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D00u;
            // 0x127d04: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d00) {
            ctx->pc = 0x127E20u;
            goto label_127e20;
        }
    }
    ctx->pc = 0x127D08u;
label_127d08:
    // 0x127d08: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127D08u;
    {
        const bool branch_taken_0x127d08 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x127D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127D08u;
            // 0x127d0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d08) {
            ctx->pc = 0x127D20u;
            goto label_127d20;
        }
    }
    ctx->pc = 0x127D10u;
    // 0x127d10: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x127d10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x127d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127d18: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x127d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d1c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x127d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_127d20:
    // 0x127d20: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x127d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x127d24: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x127D24u;
    SET_GPR_U32(ctx, 31, 0x127D2Cu);
    ctx->pc = 0x127D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127D24u;
            // 0x127d28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D2Cu; }
        if (ctx->pc != 0x127D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127D2Cu; }
        if (ctx->pc != 0x127D2Cu) { return; }
    }
    ctx->pc = 0x127D2Cu;
label_127d2c:
    // 0x127d2c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x127d2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d30: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x127d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x127d34: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x127d34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x127d38: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x127d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x127d3c: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x127d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x127d40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x127d40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d44: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x127d44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x127d48: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x127d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x127d4c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x127d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x127d50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127d54: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x127d54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x127d58: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x127d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x127d5c: 0x0  nop
    ctx->pc = 0x127d5cu;
    // NOP
label_127d60:
    // 0x127d60: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x127d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x127d64: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x127d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x127d68: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x127d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x127d6c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x127d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x127d70: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x127d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x127d74: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x127d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x127d78: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x127d7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x127d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x127d80: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x127d84: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x127d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x127d88: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x127d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x127d8c: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x127d8cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x127d90: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x127d90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x127d94: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x127d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x127d98: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x127d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x127d9c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x127d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x127da0: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x127da0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x127da4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x127DA4u;
    {
        const bool branch_taken_0x127da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127DA4u;
            // 0x127da8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127da4) {
            ctx->pc = 0x127D60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127d60;
        }
    }
    ctx->pc = 0x127DACu;
    // 0x127dac: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x127dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x127db0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x127DB0u;
    {
        const bool branch_taken_0x127db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127db0) {
            ctx->pc = 0x127DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127DB0u;
            // 0x127db4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127DF0u;
            goto label_127df0;
        }
    }
    ctx->pc = 0x127DB8u;
label_127db8:
    // 0x127db8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x127db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x127dbc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x127dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x127dc0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x127dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x127dc4: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x127dc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x127dc8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x127dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x127dcc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x127dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x127dd0: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x127dd0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x127dd4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x127dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x127dd8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x127dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x127ddc: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x127ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x127de0: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x127de0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x127de4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x127DE4u;
    {
        const bool branch_taken_0x127de4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x127DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127DE4u;
            // 0x127de8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127de4) {
            ctx->pc = 0x127DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127db8;
        }
    }
    ctx->pc = 0x127DECu;
    // 0x127dec: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x127decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_127df0:
    // 0x127df0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x127df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127df4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x127DF4u;
    {
        const bool branch_taken_0x127df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127df4) {
            ctx->pc = 0x127DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127DF4u;
            // 0x127df8: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127E20u;
            goto label_127e20;
        }
    }
    ctx->pc = 0x127DFCu;
    // 0x127dfc: 0x0  nop
    ctx->pc = 0x127dfcu;
    // NOP
label_127e00:
    // 0x127e00: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x127e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x127e04: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x127e04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x127e08: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x127e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127e0c: 0x0  nop
    ctx->pc = 0x127e0cu;
    // NOP
    // 0x127e10: 0x0  nop
    ctx->pc = 0x127e10u;
    // NOP
    // 0x127e14: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127E14u;
    {
        const bool branch_taken_0x127e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127e14) {
            ctx->pc = 0x127E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127e00;
        }
    }
    ctx->pc = 0x127E1Cu;
    // 0x127e1c: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x127e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_127e20:
    // 0x127e20: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x127e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x127e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127e28: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127e2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127e30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127e38: 0x3e00008  jr          $ra
    ctx->pc = 0x127E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E38u;
            // 0x127e3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127E40u;
}
