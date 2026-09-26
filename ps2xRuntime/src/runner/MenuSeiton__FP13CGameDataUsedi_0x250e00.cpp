#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSeiton__FP13CGameDataUsedi
// Address: 0x250e00 - 0x250f8c
void MenuSeiton__FP13CGameDataUsedi_0x250e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSeiton__FP13CGameDataUsedi_0x250e00");
#endif

    switch (ctx->pc) {
        case 0x250e54u: goto label_250e54;
        case 0x250e64u: goto label_250e64;
        case 0x250e88u: goto label_250e88;
        case 0x250ea8u: goto label_250ea8;
        case 0x250ebcu: goto label_250ebc;
        case 0x250ee0u: goto label_250ee0;
        case 0x250eecu: goto label_250eec;
        case 0x250f14u: goto label_250f14;
        case 0x250f20u: goto label_250f20;
        default: break;
    }

    ctx->pc = 0x250e00u;

    // 0x250e00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x250e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x250e04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x250e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x250e08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x250e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x250e0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x250e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x250e10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x250e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x250e14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x250e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x250e18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x250e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x250e1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x250e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x250e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x250e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x250e24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x250e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250e2c: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x250e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x250e30: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x250e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x250e34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250E34u;
    {
        const bool branch_taken_0x250e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250E34u;
            // 0x250e38: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e34) {
            ctx->pc = 0x250E44u;
            goto label_250e44;
        }
    }
    ctx->pc = 0x250E3Cu;
    // 0x250e3c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x250E3Cu;
    {
        const bool branch_taken_0x250e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250E3Cu;
            // 0x250e40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e3c) {
            ctx->pc = 0x250F5Cu;
            goto label_250f5c;
        }
    }
    ctx->pc = 0x250E44u;
label_250e44:
    // 0x250e44: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x250e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x250e48: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x250E48u;
    {
        const bool branch_taken_0x250e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250E48u;
            // 0x250e4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e48) {
            ctx->pc = 0x250F10u;
            goto label_250f10;
        }
    }
    ctx->pc = 0x250E50u;
    // 0x250e50: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x250e50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250e54:
    // 0x250e54: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x250e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x250e58: 0x5ea021  addu        $s4, $v0, $fp
    ctx->pc = 0x250e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x250e5c: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x250E5Cu;
    SET_GPR_U32(ctx, 31, 0x250E64u);
    ctx->pc = 0x250E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250E5Cu;
            // 0x250e60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250E64u; }
        if (ctx->pc != 0x250E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250E64u; }
        if (ctx->pc != 0x250E64u) { return; }
    }
    ctx->pc = 0x250E64u;
label_250e64:
    // 0x250e64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x250E64u;
    {
        const bool branch_taken_0x250e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250E64u;
            // 0x250e68: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e64) {
            ctx->pc = 0x250F00u;
            goto label_250f00;
        }
    }
    ctx->pc = 0x250E6Cu;
    // 0x250e6c: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x250e6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x250e70: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x250E70u;
    {
        const bool branch_taken_0x250e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250E70u;
            // 0x250e74: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e70) {
            ctx->pc = 0x250F00u;
            goto label_250f00;
        }
    }
    ctx->pc = 0x250E78u;
    // 0x250e78: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x250e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x250e7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x250e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x250e80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x250e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250e84: 0x2b880  sll         $s7, $v0, 2
    ctx->pc = 0x250e84u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_250e88:
    // 0x250e88: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x250e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x250e8c: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x250e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x250e90: 0x57b021  addu        $s6, $v0, $s7
    ctx->pc = 0x250e90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x250e94: 0x86c20002  lh          $v0, 0x2($s6)
    ctx->pc = 0x250e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x250e98: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x250E98u;
    {
        const bool branch_taken_0x250e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x250E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250E98u;
            // 0x250e9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e98) {
            ctx->pc = 0x250EECu;
            goto label_250eec;
        }
    }
    ctx->pc = 0x250EA0u;
    // 0x250ea0: 0xc065c9c  jal         func_197270
    ctx->pc = 0x250EA0u;
    SET_GPR_U32(ctx, 31, 0x250EA8u);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EA8u; }
        if (ctx->pc != 0x250EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EA8u; }
        if (ctx->pc != 0x250EA8u) { return; }
    }
    ctx->pc = 0x250EA8u;
label_250ea8:
    // 0x250ea8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x250ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250eac: 0x1a400014  blez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x250EACu;
    {
        const bool branch_taken_0x250eac = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x250EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250EACu;
            // 0x250eb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250eac) {
            ctx->pc = 0x250F00u;
            goto label_250f00;
        }
    }
    ctx->pc = 0x250EB4u;
    // 0x250eb4: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x250EB4u;
    SET_GPR_U32(ctx, 31, 0x250EBCu);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EBCu; }
        if (ctx->pc != 0x250EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EBCu; }
        if (ctx->pc != 0x250EBCu) { return; }
    }
    ctx->pc = 0x250EBCu;
label_250ebc:
    // 0x250ebc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x250ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ec0: 0x253082a  slt         $at, $s2, $s3
    ctx->pc = 0x250ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x250ec4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x250EC4u;
    {
        const bool branch_taken_0x250ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ec4) {
            ctx->pc = 0x250ED0u;
            goto label_250ed0;
        }
    }
    ctx->pc = 0x250ECCu;
    // 0x250ecc: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x250eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_250ed0:
    // 0x250ed0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x250ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ed4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x250ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ed8: 0xc065cdc  jal         func_197370
    ctx->pc = 0x250ED8u;
    SET_GPR_U32(ctx, 31, 0x250EE0u);
    ctx->pc = 0x250EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250ED8u;
            // 0x250edc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EE0u; }
        if (ctx->pc != 0x250EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EE0u; }
        if (ctx->pc != 0x250EE0u) { return; }
    }
    ctx->pc = 0x250EE0u;
label_250ee0:
    // 0x250ee0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x250ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250ee4: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x250EE4u;
    SET_GPR_U32(ctx, 31, 0x250EECu);
    ctx->pc = 0x250EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250EE4u;
            // 0x250ee8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EECu; }
        if (ctx->pc != 0x250EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250EECu; }
        if (ctx->pc != 0x250EECu) { return; }
    }
    ctx->pc = 0x250EECu;
label_250eec:
    // 0x250eec: 0x0  nop
    ctx->pc = 0x250eecu;
    // NOP
    // 0x250ef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x250ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x250ef4: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x250ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x250ef8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x250EF8u;
    {
        const bool branch_taken_0x250ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250EF8u;
            // 0x250efc: 0x26f7006c  addiu       $s7, $s7, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ef8) {
            ctx->pc = 0x250E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250e88;
        }
    }
    ctx->pc = 0x250F00u;
label_250f00:
    // 0x250f00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x250f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x250f04: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x250f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x250f08: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x250F08u;
    {
        const bool branch_taken_0x250f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250F08u;
            // 0x250f0c: 0x27de006c  addiu       $fp, $fp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f08) {
            ctx->pc = 0x250E54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250e54;
        }
    }
    ctx->pc = 0x250F10u;
label_250f10:
    // 0x250f10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x250f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250f14:
    // 0x250f14: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x250f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x250f18: 0xc09432c  jal         func_250CB0
    ctx->pc = 0x250F18u;
    SET_GPR_U32(ctx, 31, 0x250F20u);
    ctx->pc = 0x250F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250F18u;
            // 0x250f1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250CB0u;
    if (runtime->hasFunction(0x250CB0u)) {
        auto targetFn = runtime->lookupFunction(0x250CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250F20u; }
        if (ctx->pc != 0x250F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeitonItemBoardSub__FP13CGameDataUsedi_0x250cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250F20u; }
        if (ctx->pc != 0x250F20u) { return; }
    }
    ctx->pc = 0x250F20u;
label_250f20:
    // 0x250f20: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x250F20u;
    {
        const bool branch_taken_0x250f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250f20) {
            ctx->pc = 0x250F58u;
            goto label_250f58;
        }
    }
    ctx->pc = 0x250F28u;
    // 0x250f28: 0x878283f0  lh          $v0, -0x7C10($gp)
    ctx->pc = 0x250f28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x250f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x250f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x250f30: 0xa78283f0  sh          $v0, -0x7C10($gp)
    ctx->pc = 0x250f30u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935536), (uint16_t)GPR_U32(ctx, 2));
    // 0x250f34: 0x878283f0  lh          $v0, -0x7C10($gp)
    ctx->pc = 0x250f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x250f38: 0x28420024  slti        $v0, $v0, 0x24
    ctx->pc = 0x250f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x250f3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x250F3Cu;
    {
        const bool branch_taken_0x250f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250F3Cu;
            // 0x250f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f3c) {
            ctx->pc = 0x250F48u;
            goto label_250f48;
        }
    }
    ctx->pc = 0x250F44u;
    // 0x250f44: 0xa78283f0  sh          $v0, -0x7C10($gp)
    ctx->pc = 0x250f44u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935536), (uint16_t)GPR_U32(ctx, 2));
label_250f48:
    // 0x250f48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x250f4c: 0x2a020024  slti        $v0, $s0, 0x24
    ctx->pc = 0x250f4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x250f50: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x250F50u;
    {
        const bool branch_taken_0x250f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250f50) {
            ctx->pc = 0x250F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250f14;
        }
    }
    ctx->pc = 0x250F58u;
label_250f58:
    // 0x250f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250f5c:
    // 0x250f5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x250f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x250f60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x250f60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x250f64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x250f64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x250f68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x250f68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250f6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x250f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250f70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x250f70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250f74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x250f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250f78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x250f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x250f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250f84: 0x3e00008  jr          $ra
    ctx->pc = 0x250F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250F84u;
            // 0x250f88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250F8Cu;
}
