#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgRestartSubGame__FP11SubGameInfo
// Address: 0x3042c0 - 0x304344
void sgRestartSubGame__FP11SubGameInfo_0x3042c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgRestartSubGame__FP11SubGameInfo_0x3042c0");
#endif

    switch (ctx->pc) {
        case 0x3042dcu: goto label_3042dc;
        case 0x304328u: goto label_304328;
        default: break;
    }

    ctx->pc = 0x3042c0u;

    // 0x3042c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3042c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3042c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3042c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3042c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3042c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3042cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3042ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3042d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3042d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042d4: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x3042D4u;
    SET_GPR_U32(ctx, 31, 0x3042DCu);
    ctx->pc = 0x3042D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3042D4u;
            // 0x3042d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3042DCu; }
        if (ctx->pc != 0x3042DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3042DCu; }
        if (ctx->pc != 0x3042DCu) { return; }
    }
    ctx->pc = 0x3042DCu;
label_3042dc:
    // 0x3042dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3042DCu;
    {
        const bool branch_taken_0x3042dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3042E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042DCu;
            // 0x3042e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042dc) {
            ctx->pc = 0x3042ECu;
            goto label_3042ec;
        }
    }
    ctx->pc = 0x3042E4u;
    // 0x3042e4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3042E4u;
    {
        const bool branch_taken_0x3042e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042E4u;
            // 0x3042e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042e4) {
            ctx->pc = 0x304334u;
            goto label_304334;
        }
    }
    ctx->pc = 0x3042ECu;
label_3042ec:
    // 0x3042ec: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x3042ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x3042f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3042f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3042f4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3042F4u;
    {
        const bool branch_taken_0x3042f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3042F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3042F4u;
            // 0x3042f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042f4) {
            ctx->pc = 0x304330u;
            goto label_304330;
        }
    }
    ctx->pc = 0x3042FCu;
    // 0x3042fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3042fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304300: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x304300u;
    {
        const bool branch_taken_0x304300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304300u;
            // 0x304304: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304300) {
            ctx->pc = 0x30432Cu;
            goto label_30432c;
        }
    }
    ctx->pc = 0x304308u;
    // 0x304308: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x304308u;
    {
        const bool branch_taken_0x304308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304308u;
            // 0x30430c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304308) {
            ctx->pc = 0x30432Cu;
            goto label_30432c;
        }
    }
    ctx->pc = 0x304310u;
    // 0x304310: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304310u;
    {
        const bool branch_taken_0x304310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304310u;
            // 0x304314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304310) {
            ctx->pc = 0x304320u;
            goto label_304320;
        }
    }
    ctx->pc = 0x304318u;
    // 0x304318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x304318u;
    {
        const bool branch_taken_0x304318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304318) {
            ctx->pc = 0x30432Cu;
            goto label_30432c;
        }
    }
    ctx->pc = 0x304320u;
label_304320:
    // 0x304320: 0xc0bf248  jal         func_2FC920
    ctx->pc = 0x304320u;
    SET_GPR_U32(ctx, 31, 0x304328u);
    ctx->pc = 0x2FC920u;
    if (runtime->hasFunction(0x2FC920u)) {
        auto targetFn = runtime->lookupFunction(0x2FC920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304328u; }
        if (ctx->pc != 0x304328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgRestartFishing__FP11SubGameInfo_0x2fc920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304328u; }
        if (ctx->pc != 0x304328u) { return; }
    }
    ctx->pc = 0x304328u;
label_304328:
    // 0x304328: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x304328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30432c:
    // 0x30432c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30432cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304330:
    // 0x304330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x304330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_304334:
    // 0x304334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30433c: 0x3e00008  jr          $ra
    ctx->pc = 0x30433Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30433Cu;
            // 0x304340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304344u;
}
