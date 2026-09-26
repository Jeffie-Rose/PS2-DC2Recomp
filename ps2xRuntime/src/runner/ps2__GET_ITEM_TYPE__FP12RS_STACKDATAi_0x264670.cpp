#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ITEM_TYPE__FP12RS_STACKDATAi
// Address: 0x264670 - 0x2646f0
void ps2__GET_ITEM_TYPE__FP12RS_STACKDATAi_0x264670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ITEM_TYPE__FP12RS_STACKDATAi_0x264670");
#endif

    switch (ctx->pc) {
        case 0x264684u: goto label_264684;
        case 0x26468cu: goto label_26468c;
        case 0x2646dcu: goto label_2646dc;
        default: break;
    }

    ctx->pc = 0x264670u;

    // 0x264670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26467c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26467Cu;
    SET_GPR_U32(ctx, 31, 0x264684u);
    ctx->pc = 0x264680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26467Cu;
            // 0x264680: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264684u; }
        if (ctx->pc != 0x264684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264684u; }
        if (ctx->pc != 0x264684u) { return; }
    }
    ctx->pc = 0x264684u;
label_264684:
    // 0x264684: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x264684u;
    SET_GPR_U32(ctx, 31, 0x26468Cu);
    ctx->pc = 0x264688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264684u;
            // 0x264688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26468Cu; }
        if (ctx->pc != 0x26468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26468Cu; }
        if (ctx->pc != 0x26468Cu) { return; }
    }
    ctx->pc = 0x26468Cu;
label_26468c:
    // 0x26468c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26468Cu;
    {
        const bool branch_taken_0x26468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26468Cu;
            // 0x264690: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26468c) {
            ctx->pc = 0x2646A0u;
            goto label_2646a0;
        }
    }
    ctx->pc = 0x264694u;
    // 0x264694: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x264694u;
    {
        const bool branch_taken_0x264694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264694u;
            // 0x264698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264694) {
            ctx->pc = 0x2646E0u;
            goto label_2646e0;
        }
    }
    ctx->pc = 0x26469Cu;
    // 0x26469c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26469cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2646a0:
    // 0x2646a0: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2646A0u;
    {
        const bool branch_taken_0x2646a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2646A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2646A0u;
            // 0x2646a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646a0) {
            ctx->pc = 0x2646D4u;
            goto label_2646d4;
        }
    }
    ctx->pc = 0x2646A8u;
    // 0x2646a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2646a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2646ac: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2646ACu;
    {
        const bool branch_taken_0x2646ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2646ac) {
            ctx->pc = 0x2646D0u;
            goto label_2646d0;
        }
    }
    ctx->pc = 0x2646B4u;
    // 0x2646b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2646b8: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2646B8u;
    {
        const bool branch_taken_0x2646b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2646b8) {
            ctx->pc = 0x2646D0u;
            goto label_2646d0;
        }
    }
    ctx->pc = 0x2646C0u;
    // 0x2646c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2646c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2646c4: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2646C4u;
    {
        const bool branch_taken_0x2646c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2646c4) {
            ctx->pc = 0x2646D0u;
            goto label_2646d0;
        }
    }
    ctx->pc = 0x2646CCu;
    // 0x2646cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2646ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2646d0:
    // 0x2646d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2646d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2646d4:
    // 0x2646d4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2646D4u;
    SET_GPR_U32(ctx, 31, 0x2646DCu);
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646DCu; }
        if (ctx->pc != 0x2646DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646DCu; }
        if (ctx->pc != 0x2646DCu) { return; }
    }
    ctx->pc = 0x2646DCu;
label_2646dc:
    // 0x2646dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2646dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2646e0:
    // 0x2646e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2646e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2646e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2646e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2646e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2646E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2646ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2646E8u;
            // 0x2646ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2646F0u;
}
