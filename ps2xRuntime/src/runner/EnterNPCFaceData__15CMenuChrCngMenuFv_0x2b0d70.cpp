#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterNPCFaceData__15CMenuChrCngMenuFv
// Address: 0x2b0d70 - 0x2b0df4
void EnterNPCFaceData__15CMenuChrCngMenuFv_0x2b0d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterNPCFaceData__15CMenuChrCngMenuFv_0x2b0d70");
#endif

    switch (ctx->pc) {
        case 0x2b0da8u: goto label_2b0da8;
        case 0x2b0dccu: goto label_2b0dcc;
        case 0x2b0de4u: goto label_2b0de4;
        default: break;
    }

    ctx->pc = 0x2b0d70u;

    // 0x2b0d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b0d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0d7c: 0x80830200  lb          $v1, 0x200($a0)
    ctx->pc = 0x2b0d7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x2b0d80: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B0D80u;
    {
        const bool branch_taken_0x2b0d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0D80u;
            // 0x2b0d84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d80) {
            ctx->pc = 0x2B0DE4u;
            goto label_2b0de4;
        }
    }
    ctx->pc = 0x2B0D88u;
    // 0x2b0d88: 0x82040201  lb          $a0, 0x201($s0)
    ctx->pc = 0x2b0d88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 513)));
    // 0x2b0d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0d90: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B0D90u;
    {
        const bool branch_taken_0x2b0d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b0d90) {
            ctx->pc = 0x2B0DB0u;
            goto label_2b0db0;
        }
    }
    ctx->pc = 0x2B0D98u;
    // 0x2b0d98: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B0D98u;
    {
        const bool branch_taken_0x2b0d98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d98) {
            ctx->pc = 0x2B0DE4u;
            goto label_2b0de4;
        }
    }
    ctx->pc = 0x2B0DA0u;
    // 0x2b0da0: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2B0DA0u;
    SET_GPR_U32(ctx, 31, 0x2B0DA8u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0DA8u; }
        if (ctx->pc != 0x2B0DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0DA8u; }
        if (ctx->pc != 0x2B0DA8u) { return; }
    }
    ctx->pc = 0x2B0DA8u;
label_2b0da8:
    // 0x2b0da8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B0DA8u;
    {
        const bool branch_taken_0x2b0da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0da8) {
            ctx->pc = 0x2B0DE4u;
            goto label_2b0de4;
        }
    }
    ctx->pc = 0x2B0DB0u;
label_2b0db0:
    // 0x2b0db0: 0x8e050204  lw          $a1, 0x204($s0)
    ctx->pc = 0x2b0db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x2b0db4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b0db8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2b0db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b0dbc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2b0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2b0dc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b0dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0dc4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2B0DC4u;
    SET_GPR_U32(ctx, 31, 0x2B0DCCu);
    ctx->pc = 0x2B0DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0DC4u;
            // 0x2b0dc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0DCCu; }
        if (ctx->pc != 0x2B0DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0DCCu; }
        if (ctx->pc != 0x2B0DCCu) { return; }
    }
    ctx->pc = 0x2B0DCCu;
label_2b0dcc:
    // 0x2b0dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0dd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0dd8: 0xa2020200  sb          $v0, 0x200($s0)
    ctx->pc = 0x2b0dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 512), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b0ddc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B0DDCu;
    SET_GPR_U32(ctx, 31, 0x2B0DE4u);
    ctx->pc = 0x2B0DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0DDCu;
            // 0x2b0de0: 0x24a5eb58  addiu       $a1, $a1, -0x14A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0DE4u; }
        if (ctx->pc != 0x2B0DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0DE4u; }
        if (ctx->pc != 0x2B0DE4u) { return; }
    }
    ctx->pc = 0x2B0DE4u;
label_2b0de4:
    // 0x2b0de4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0dec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0DECu;
            // 0x2b0df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0DF4u;
}
