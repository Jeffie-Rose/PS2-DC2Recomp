#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetTextureInfoAll__14CPosDataManageFv
// Address: 0x22aa00 - 0x22aac0
void ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetTextureInfoAll__14CPosDataManageFv_0x22aa00");
#endif

    switch (ctx->pc) {
        case 0x22aa2cu: goto label_22aa2c;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aa44u: goto label_22aa44;
        case 0x22aa54u: goto label_22aa54;
        case 0x22aa6cu: goto label_22aa6c;
        default: break;
    }

    ctx->pc = 0x22aa00u;

    // 0x22aa00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22aa04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22aa08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22aa0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22aa10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22aa10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22aa18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22aa1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22aa20: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x22aa20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x22aa24: 0xc08ac34  jal         func_22B0D0
    ctx->pc = 0x22AA24u;
    SET_GPR_U32(ctx, 31, 0x22AA2Cu);
    ctx->pc = 0x22AA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA24u;
            // 0x22aa28: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B0D0u;
    if (runtime->hasFunction(0x22B0D0u)) {
        auto targetFn = runtime->lookupFunction(0x22B0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA2Cu; }
        if (ctx->pc != 0x22AA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawTopList__14CPosDataManageFv_0x22b0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA2Cu; }
        if (ctx->pc != 0x22AA2Cu) { return; }
    }
    ctx->pc = 0x22AA2Cu;
label_22aa2c:
    // 0x22aa2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22aa2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa30: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x22AA30u;
    {
        const bool branch_taken_0x22aa30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa30) {
            ctx->pc = 0x22AA9Cu;
            goto label_22aa9c;
        }
    }
    ctx->pc = 0x22AA38u;
label_22aa38:
    // 0x22aa38: 0x8e32006c  lw          $s2, 0x6C($s1)
    ctx->pc = 0x22aa38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x22aa3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22AA3Cu;
    {
        const bool branch_taken_0x22aa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA3Cu;
            // 0x22aa40: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa3c) {
            ctx->pc = 0x22AA78u;
            goto label_22aa78;
        }
    }
    ctx->pc = 0x22AA44u;
label_22aa44:
    // 0x22aa44: 0x0  nop
    ctx->pc = 0x22aa44u;
    // NOP
    // 0x22aa48: 0x92450018  lbu         $a1, 0x18($s2)
    ctx->pc = 0x22aa48u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x22aa4c: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x22AA4Cu;
    SET_GPR_U32(ctx, 31, 0x22AA54u);
    ctx->pc = 0x22AA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA4Cu;
            // 0x22aa50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA54u; }
        if (ctx->pc != 0x22AA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFi_0x22a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA54u; }
        if (ctx->pc != 0x22AA54u) { return; }
    }
    ctx->pc = 0x22AA54u;
label_22aa54:
    // 0x22aa54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AA54u;
    {
        const bool branch_taken_0x22aa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa54) {
            ctx->pc = 0x22AA70u;
            goto label_22aa70;
        }
    }
    ctx->pc = 0x22AA5Cu;
    // 0x22aa5c: 0x90460018  lbu         $a2, 0x18($v0)
    ctx->pc = 0x22aa5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x22aa60: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x22aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x22aa64: 0xc04b414  jal         func_12D050
    ctx->pc = 0x22AA64u;
    SET_GPR_U32(ctx, 31, 0x22AA6Cu);
    ctx->pc = 0x22AA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AA64u;
            // 0x22aa68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA6Cu; }
        if (ctx->pc != 0x22AA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AA6Cu; }
        if (ctx->pc != 0x22AA6Cu) { return; }
    }
    ctx->pc = 0x22AA6Cu;
label_22aa6c:
    // 0x22aa6c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x22aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_22aa70:
    // 0x22aa70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22aa70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22aa74: 0x26520048  addiu       $s2, $s2, 0x48
    ctx->pc = 0x22aa74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_22aa78:
    // 0x22aa78: 0x86230068  lh          $v1, 0x68($s1)
    ctx->pc = 0x22aa78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x22aa7c: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x22aa7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22aa80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AA80u;
    {
        const bool branch_taken_0x22aa80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa80) {
            ctx->pc = 0x22AA90u;
            goto label_22aa90;
        }
    }
    ctx->pc = 0x22AA88u;
    // 0x22aa88: 0x1640ffee  bnez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22AA88u;
    {
        const bool branch_taken_0x22aa88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aa88) {
            ctx->pc = 0x22AA44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22aa44;
        }
    }
    ctx->pc = 0x22AA90u;
label_22aa90:
    // 0x22aa90: 0x8e310074  lw          $s1, 0x74($s1)
    ctx->pc = 0x22aa90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x22aa94: 0x1620ffe8  bnez        $s1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x22AA94u;
    {
        const bool branch_taken_0x22aa94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aa94) {
            ctx->pc = 0x22AA38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22aa38;
        }
    }
    ctx->pc = 0x22AA9Cu;
label_22aa9c:
    // 0x22aa9c: 0x0  nop
    ctx->pc = 0x22aa9cu;
    // NOP
    // 0x22aaa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22aaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22aaa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22aaa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22aaa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22aaa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22aaac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22aaacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22aab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aab8: 0x3e00008  jr          $ra
    ctx->pc = 0x22AAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AAB8u;
            // 0x22aabc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AAC0u;
}
