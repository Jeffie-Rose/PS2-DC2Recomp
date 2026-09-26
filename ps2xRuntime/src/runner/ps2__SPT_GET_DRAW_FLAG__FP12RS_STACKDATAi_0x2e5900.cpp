#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_GET_DRAW_FLAG__FP12RS_STACKDATAi
// Address: 0x2e5900 - 0x2e5960
void ps2__SPT_GET_DRAW_FLAG__FP12RS_STACKDATAi_0x2e5900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_GET_DRAW_FLAG__FP12RS_STACKDATAi_0x2e5900");
#endif

    switch (ctx->pc) {
        case 0x2e5924u: goto label_2e5924;
        case 0x2e5930u: goto label_2e5930;
        case 0x2e594cu: goto label_2e594c;
        default: break;
    }

    ctx->pc = 0x2e5900u;

    // 0x2e5900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e5908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e590c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E590Cu;
    {
        const bool branch_taken_0x2e590c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E590Cu;
            // 0x2e5910: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e590c) {
            ctx->pc = 0x2E591Cu;
            goto label_2e591c;
        }
    }
    ctx->pc = 0x2E5914u;
    // 0x2e5914: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E5914u;
    {
        const bool branch_taken_0x2e5914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5914u;
            // 0x2e5918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5914) {
            ctx->pc = 0x2E5950u;
            goto label_2e5950;
        }
    }
    ctx->pc = 0x2E591Cu;
label_2e591c:
    // 0x2e591c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E591Cu;
    SET_GPR_U32(ctx, 31, 0x2E5924u);
    ctx->pc = 0x2E5920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E591Cu;
            // 0x2e5920: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5924u; }
        if (ctx->pc != 0x2E5924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5924u; }
        if (ctx->pc != 0x2E5924u) { return; }
    }
    ctx->pc = 0x2E5924u;
label_2e5924:
    // 0x2e5924: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e5924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e5928: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5928u;
    SET_GPR_U32(ctx, 31, 0x2E5930u);
    ctx->pc = 0x2E592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5928u;
            // 0x2e592c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5930u; }
        if (ctx->pc != 0x2E5930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5930u; }
        if (ctx->pc != 0x2E5930u) { return; }
    }
    ctx->pc = 0x2E5930u;
label_2e5930:
    // 0x2e5930: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5930u;
    {
        const bool branch_taken_0x2e5930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5930) {
            ctx->pc = 0x2E5940u;
            goto label_2e5940;
        }
    }
    ctx->pc = 0x2E5938u;
    // 0x2e5938: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5938u;
    {
        const bool branch_taken_0x2e5938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5938u;
            // 0x2e593c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5938) {
            ctx->pc = 0x2E5950u;
            goto label_2e5950;
        }
    }
    ctx->pc = 0x2E5940u;
label_2e5940:
    // 0x2e5940: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e5940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5944: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E5944u;
    SET_GPR_U32(ctx, 31, 0x2E594Cu);
    ctx->pc = 0x2E5948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5944u;
            // 0x2e5948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E594Cu; }
        if (ctx->pc != 0x2E594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E594Cu; }
        if (ctx->pc != 0x2E594Cu) { return; }
    }
    ctx->pc = 0x2E594Cu;
label_2e594c:
    // 0x2e594c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5950:
    // 0x2e5950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5958: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5958u;
            // 0x2e595c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5960u;
}
