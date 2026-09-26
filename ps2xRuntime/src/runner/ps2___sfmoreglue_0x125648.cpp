#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sfmoreglue
// Address: 0x125648 - 0x1256b8
void ps2___sfmoreglue_0x125648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfmoreglue_0x125648");
#endif

    switch (ctx->pc) {
        case 0x125670u: goto label_125670;
        case 0x12569cu: goto label_12569c;
        default: break;
    }

    ctx->pc = 0x125648u;

    // 0x125648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12564c: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x12564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x125650: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x125650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x125654: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x125654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x125658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12565c: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x12565cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x125660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125668: 0xc0499cc  jal         func_126730
    ctx->pc = 0x125668u;
    SET_GPR_U32(ctx, 31, 0x125670u);
    ctx->pc = 0x12566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125668u;
            // 0x12566c: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126730u;
    if (runtime->hasFunction(0x126730u)) {
        auto targetFn = runtime->lookupFunction(0x126730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125670u; }
        if (ctx->pc != 0x125670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _malloc_r_0x126730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125670u; }
        if (ctx->pc != 0x125670u) { return; }
    }
    ctx->pc = 0x125670u;
label_125670:
    // 0x125670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125674: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x125674u;
    {
        const bool branch_taken_0x125674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x125678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125674u;
            // 0x125678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125674) {
            ctx->pc = 0x1256A0u;
            goto label_1256a0;
        }
    }
    ctx->pc = 0x12567Cu;
    // 0x12567c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x125680: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x125680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x125684: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x125684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x125688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12568c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125690: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x125690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x125694: 0xc049c86  jal         func_127218
    ctx->pc = 0x125694u;
    SET_GPR_U32(ctx, 31, 0x12569Cu);
    ctx->pc = 0x125698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125694u;
            // 0x125698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12569Cu; }
        if (ctx->pc != 0x12569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12569Cu; }
        if (ctx->pc != 0x12569Cu) { return; }
    }
    ctx->pc = 0x12569Cu;
label_12569c:
    // 0x12569c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12569cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1256a0:
    // 0x1256a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1256a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1256a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1256a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1256a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1256a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1256ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1256acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1256b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1256B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1256B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256B0u;
            // 0x1256b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1256B8u;
}
