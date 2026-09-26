#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMakeItem__17CInventDataManageFiiP13CGameDataUsed
// Address: 0x1fff30 - 0x1fffbc
void CheckMakeItem__17CInventDataManageFiiP13CGameDataUsed_0x1fff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMakeItem__17CInventDataManageFiiP13CGameDataUsed_0x1fff30");
#endif

    switch (ctx->pc) {
        case 0x1fff50u: goto label_1fff50;
        case 0x1fff60u: goto label_1fff60;
        case 0x1fff6cu: goto label_1fff6c;
        default: break;
    }

    ctx->pc = 0x1fff30u;

    // 0x1fff30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fff34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fff38: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1fff38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fff3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fff40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fff44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fff48: 0xc07ff68  jal         func_1FFDA0
    ctx->pc = 0x1FFF48u;
    SET_GPR_U32(ctx, 31, 0x1FFF50u);
    ctx->pc = 0x1FFF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF48u;
            // 0x1fff4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDA0u;
    if (runtime->hasFunction(0x1FFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF50u; }
        if (ctx->pc != 0x1FFF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HowMuchZairyouMakeItem__17CInventDataManageFiiPi_0x1ffda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF50u; }
        if (ctx->pc != 0x1FFF50u) { return; }
    }
    ctx->pc = 0x1FFF50u;
label_1fff50:
    // 0x1fff50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fff50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fff54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FFF58u;
    {
        const bool branch_taken_0x1fff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF58u;
            // 0x1fff5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff58) {
            ctx->pc = 0x1FFF88u;
            goto label_1fff88;
        }
    }
    ctx->pc = 0x1FFF60u;
label_1fff60:
    // 0x1fff60: 0x24530050  addiu       $s3, $v0, 0x50
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1fff64: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x1FFF64u;
    SET_GPR_U32(ctx, 31, 0x1FFF6Cu);
    ctx->pc = 0x1FFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF64u;
            // 0x1fff68: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF6Cu; }
        if (ctx->pc != 0x1FFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFF6Cu; }
        if (ctx->pc != 0x1FFF6Cu) { return; }
    }
    ctx->pc = 0x1FFF6Cu;
label_1fff6c:
    // 0x1fff6c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1fff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fff70: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1fff70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fff74: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FFF74u;
    {
        const bool branch_taken_0x1fff74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fff74) {
            ctx->pc = 0x1FFF80u;
            goto label_1fff80;
        }
    }
    ctx->pc = 0x1FFF7Cu;
    // 0x1fff7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fff80:
    // 0x1fff80: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1fff80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1fff84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fff88:
    // 0x1fff88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fff8c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1fff8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fff90: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FFF90u;
    {
        const bool branch_taken_0x1fff90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFF90u;
            // 0x1fff94: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fff90) {
            ctx->pc = 0x1FFF60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fff60;
        }
    }
    ctx->pc = 0x1FFF98u;
    // 0x1fff98: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1fff98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fff9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fff9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fffa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fffa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fffa4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fffa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fffa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fffa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fffac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fffacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fffb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fffb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fffb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFB4u;
            // 0x1fffb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFFBCu;
}
