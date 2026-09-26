#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFormInfo__14CPosDataManageFPc
// Address: 0x22ae40 - 0x22aee8
void GetFormInfo__14CPosDataManageFPc_0x22ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFormInfo__14CPosDataManageFPc_0x22ae40");
#endif

    switch (ctx->pc) {
        case 0x22ae74u: goto label_22ae74;
        case 0x22ae80u: goto label_22ae80;
        case 0x22ae94u: goto label_22ae94;
        default: break;
    }

    ctx->pc = 0x22ae40u;

    // 0x22ae40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22ae44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22ae48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ae4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ae50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22ae50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ae58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22ae58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae5c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AE5Cu;
    {
        const bool branch_taken_0x22ae5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE5Cu;
            // 0x22ae60: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae5c) {
            ctx->pc = 0x22AE6Cu;
            goto label_22ae6c;
        }
    }
    ctx->pc = 0x22AE64u;
    // 0x22ae64: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x22AE64u;
    {
        const bool branch_taken_0x22ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE64u;
            // 0x22ae68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae64) {
            ctx->pc = 0x22AECCu;
            goto label_22aecc;
        }
    }
    ctx->pc = 0x22AE6Cu;
label_22ae6c:
    // 0x22ae6c: 0xc08ac34  jal         func_22B0D0
    ctx->pc = 0x22AE6Cu;
    SET_GPR_U32(ctx, 31, 0x22AE74u);
    ctx->pc = 0x22B0D0u;
    if (runtime->hasFunction(0x22B0D0u)) {
        auto targetFn = runtime->lookupFunction(0x22B0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE74u; }
        if (ctx->pc != 0x22AE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawTopList__14CPosDataManageFv_0x22b0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE74u; }
        if (ctx->pc != 0x22AE74u) { return; }
    }
    ctx->pc = 0x22AE74u;
label_22ae74:
    // 0x22ae74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ae74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae78: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22AE78u;
    {
        const bool branch_taken_0x22ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE78u;
            // 0x22ae7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae78) {
            ctx->pc = 0x22AEACu;
            goto label_22aeac;
        }
    }
    ctx->pc = 0x22AE80u;
label_22ae80:
    // 0x22ae80: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x22ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22ae84: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22AE84u;
    {
        const bool branch_taken_0x22ae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE84u;
            // 0x22ae88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae84) {
            ctx->pc = 0x22AEC8u;
            goto label_22aec8;
        }
    }
    ctx->pc = 0x22AE8Cu;
    // 0x22ae8c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x22AE8Cu;
    SET_GPR_U32(ctx, 31, 0x22AE94u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE94u; }
        if (ctx->pc != 0x22AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AE94u; }
        if (ctx->pc != 0x22AE94u) { return; }
    }
    ctx->pc = 0x22AE94u;
label_22ae94:
    // 0x22ae94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AE94u;
    {
        const bool branch_taken_0x22ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE94u;
            // 0x22ae98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae94) {
            ctx->pc = 0x22AEA4u;
            goto label_22aea4;
        }
    }
    ctx->pc = 0x22AE9Cu;
    // 0x22ae9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22AE9Cu;
    {
        const bool branch_taken_0x22ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AE9Cu;
            // 0x22aea0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae9c) {
            ctx->pc = 0x22AED0u;
            goto label_22aed0;
        }
    }
    ctx->pc = 0x22AEA4u;
label_22aea4:
    // 0x22aea4: 0x8e100074  lw          $s0, 0x74($s0)
    ctx->pc = 0x22aea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x22aea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22aea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22aeac:
    // 0x22aeac: 0x0  nop
    ctx->pc = 0x22aeacu;
    // NOP
    // 0x22aeb0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AEB0u;
    {
        const bool branch_taken_0x22aeb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aeb0) {
            ctx->pc = 0x22AEC8u;
            goto label_22aec8;
        }
    }
    ctx->pc = 0x22AEB8u;
    // 0x22aeb8: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x22aeb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x22aebc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x22aebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22aec0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x22AEC0u;
    {
        const bool branch_taken_0x22aec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aec0) {
            ctx->pc = 0x22AE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ae80;
        }
    }
    ctx->pc = 0x22AEC8u;
label_22aec8:
    // 0x22aec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22aec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22aecc:
    // 0x22aecc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22aeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22aed0:
    // 0x22aed0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22aed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22aed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22aed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22aed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aedc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aee0: 0x3e00008  jr          $ra
    ctx->pc = 0x22AEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AEE0u;
            // 0x22aee4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AEE8u;
}
