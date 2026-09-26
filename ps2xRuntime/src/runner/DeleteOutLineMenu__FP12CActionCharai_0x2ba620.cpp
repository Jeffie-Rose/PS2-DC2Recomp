#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteOutLineMenu__FP12CActionCharai
// Address: 0x2ba620 - 0x2ba690
void DeleteOutLineMenu__FP12CActionCharai_0x2ba620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteOutLineMenu__FP12CActionCharai_0x2ba620");
#endif

    switch (ctx->pc) {
        case 0x2ba654u: goto label_2ba654;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba67cu: goto label_2ba67c;
        default: break;
    }

    ctx->pc = 0x2ba620u;

    // 0x2ba620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ba620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ba624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ba628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba630: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BA630u;
    {
        const bool branch_taken_0x2ba630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA630u;
            // 0x2ba634: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba630) {
            ctx->pc = 0x2BA67Cu;
            goto label_2ba67c;
        }
    }
    ctx->pc = 0x2BA638u;
    // 0x2ba638: 0x8c860128  lw          $a2, 0x128($a0)
    ctx->pc = 0x2ba638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x2ba63c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ba63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ba640: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2ba640u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2ba644: 0x24a5f4e0  addiu       $a1, $a1, -0xB20
    ctx->pc = 0x2ba644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964448));
    // 0x2ba648: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2ba648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x2ba64c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2BA64Cu;
    SET_GPR_U32(ctx, 31, 0x2BA654u);
    ctx->pc = 0x2BA650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA64Cu;
            // 0x2ba650: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA654u; }
        if (ctx->pc != 0x2BA654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA654u; }
        if (ctx->pc != 0x2BA654u) { return; }
    }
    ctx->pc = 0x2BA654u;
label_2ba654:
    // 0x2ba654: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA654u;
    {
        const bool branch_taken_0x2ba654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA654u;
            // 0x2ba658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba654) {
            ctx->pc = 0x2BA670u;
            goto label_2ba670;
        }
    }
    ctx->pc = 0x2BA65Cu;
    // 0x2ba65c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ba65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ba660: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ba660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ba664: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2BA664u;
    SET_GPR_U32(ctx, 31, 0x2BA66Cu);
    ctx->pc = 0x2BA668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA664u;
            // 0x2ba668: 0x24a5f488  addiu       $a1, $a1, -0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA66Cu; }
        if (ctx->pc != 0x2BA66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA66Cu; }
        if (ctx->pc != 0x2BA66Cu) { return; }
    }
    ctx->pc = 0x2BA66Cu;
label_2ba66c:
    // 0x2ba66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba670:
    // 0x2ba670: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2ba670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ba674: 0xc04b93c  jal         func_12E4F0
    ctx->pc = 0x2BA674u;
    SET_GPR_U32(ctx, 31, 0x2BA67Cu);
    ctx->pc = 0x2BA678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA674u;
            // 0x2ba678: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4F0u;
    if (runtime->hasFunction(0x12E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA67Cu; }
        if (ctx->pc != 0x2BA67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexture__17mgCTextureManagerFPci_0x12e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA67Cu; }
        if (ctx->pc != 0x2BA67Cu) { return; }
    }
    ctx->pc = 0x2BA67Cu;
label_2ba67c:
    // 0x2ba67c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba688: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA688u;
            // 0x2ba68c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA690u;
}
