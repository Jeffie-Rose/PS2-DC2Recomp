#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckItemBoardFunc_MenuIconDrawPrepare__FP16CUserDataManagerP18MENUFORMPARTS_TYPE
// Address: 0x22bfd0 - 0x22c0b0
void CheckItemBoardFunc_MenuIconDrawPrepare__FP16CUserDataManagerP18MENUFORMPARTS_TYPE_0x22bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckItemBoardFunc_MenuIconDrawPrepare__FP16CUserDataManagerP18MENUFORMPARTS_TYPE_0x22bfd0");
#endif

    switch (ctx->pc) {
        case 0x22c000u: goto label_22c000;
        case 0x22c010u: goto label_22c010;
        case 0x22c01cu: goto label_22c01c;
        case 0x22c030u: goto label_22c030;
        case 0x22c044u: goto label_22c044;
        case 0x22c058u: goto label_22c058;
        default: break;
    }

    ctx->pc = 0x22bfd0u;

    // 0x22bfd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22bfd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22bfd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22bfdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22bfe0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x22bfe0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfe4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22bfe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22bfec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22bff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22bff4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22bff8: 0xc08aea0  jal         func_22BA80
    ctx->pc = 0x22BFF8u;
    SET_GPR_U32(ctx, 31, 0x22C000u);
    ctx->pc = 0x22BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFF8u;
            // 0x22bffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BA80u;
    if (runtime->hasFunction(0x22BA80u)) {
        auto targetFn = runtime->lookupFunction(0x22BA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C000u; }
        if (ctx->pc != 0x22C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowUseNeedItemCheck__FP16CUserDataManager_0x22ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C000u; }
        if (ctx->pc != 0x22C000u) { return; }
    }
    ctx->pc = 0x22C000u;
label_22c000:
    // 0x22c000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c008: 0xc066d14  jal         func_19B450
    ctx->pc = 0x22C008u;
    SET_GPR_U32(ctx, 31, 0x22C010u);
    ctx->pc = 0x22C00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C008u;
            // 0x22c00c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B450u;
    if (runtime->hasFunction(0x19B450u)) {
        auto targetFn = runtime->lookupFunction(0x19B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C010u; }
        if (ctx->pc != 0x22C010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedDataPtr__16CUserDataManagerFi_0x19b450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C010u; }
        if (ctx->pc != 0x22C010u) { return; }
    }
    ctx->pc = 0x22C010u;
label_22c010:
    // 0x22c010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22c010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c014: 0xc068644  jal         func_1A1910
    ctx->pc = 0x22C014u;
    SET_GPR_U32(ctx, 31, 0x22C01Cu);
    ctx->pc = 0x22C018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C014u;
            // 0x22c018: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C01Cu; }
        if (ctx->pc != 0x22C01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C01Cu; }
        if (ctx->pc != 0x22C01Cu) { return; }
    }
    ctx->pc = 0x22C01Cu;
label_22c01c:
    // 0x22c01c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22c01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c020: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x22c020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22c024: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x22C024u;
    {
        const bool branch_taken_0x22c024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C024u;
            // 0x22c028: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c024) {
            ctx->pc = 0x22C084u;
            goto label_22c084;
        }
    }
    ctx->pc = 0x22C02Cu;
    // 0x22c02c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22c02cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c030:
    // 0x22c030: 0x2d4a821  addu        $s5, $s6, $s4
    ctx->pc = 0x22c030u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x22c034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22c034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c038: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22c038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c03c: 0xc08af60  jal         func_22BD80
    ctx->pc = 0x22C03Cu;
    SET_GPR_U32(ctx, 31, 0x22C044u);
    ctx->pc = 0x22C040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C03Cu;
            // 0x22c040: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD80u;
    if (runtime->hasFunction(0x22BD80u)) {
        auto targetFn = runtime->lookupFunction(0x22BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C044u; }
        if (ctx->pc != 0x22C044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuIconDrawPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedi_0x22bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C044u; }
        if (ctx->pc != 0x22C044u) { return; }
    }
    ctx->pc = 0x22C044u;
label_22c044:
    // 0x22c044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c04c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c050: 0xc092afc  jal         func_24ABF0
    ctx->pc = 0x22C050u;
    SET_GPR_U32(ctx, 31, 0x22C058u);
    ctx->pc = 0x22C054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C050u;
            // 0x22c054: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24ABF0u;
    if (runtime->hasFunction(0x24ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x24ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C058u; }
        if (ctx->pc != 0x22C058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C058u; }
        if (ctx->pc != 0x22C058u) { return; }
    }
    ctx->pc = 0x22C058u;
label_22c058:
    // 0x22c058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C058u;
    {
        const bool branch_taken_0x22c058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c058) {
            ctx->pc = 0x22C06Cu;
            goto label_22c06c;
        }
    }
    ctx->pc = 0x22C060u;
    // 0x22c060: 0x92a30045  lbu         $v1, 0x45($s5)
    ctx->pc = 0x22c060u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 69)));
    // 0x22c064: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x22c064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x22c068: 0xa2a30045  sb          $v1, 0x45($s5)
    ctx->pc = 0x22c068u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 69), (uint8_t)GPR_U32(ctx, 3));
label_22c06c:
    // 0x22c06c: 0x0  nop
    ctx->pc = 0x22c06cu;
    // NOP
    // 0x22c070: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22c070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22c074: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x22c074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22c078: 0x2631006c  addiu       $s1, $s1, 0x6C
    ctx->pc = 0x22c078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x22c07c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22C07Cu;
    {
        const bool branch_taken_0x22c07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C07Cu;
            // 0x22c080: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c07c) {
            ctx->pc = 0x22C030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c030;
        }
    }
    ctx->pc = 0x22C084u;
label_22c084:
    // 0x22c084: 0x0  nop
    ctx->pc = 0x22c084u;
    // NOP
    // 0x22c088: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22c088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c08c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22c08cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c090: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22c090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22c094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22c098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c09c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c09cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c0a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c0a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22c0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22C0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0A8u;
            // 0x22c0ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C0B0u;
}
