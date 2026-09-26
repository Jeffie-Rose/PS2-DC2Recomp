#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _lf_version
// Address: 0x117438 - 0x1174c4
void _lf_version_0x117438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lf_version_0x117438");
#endif

    switch (ctx->pc) {
        case 0x117474u: goto label_117474;
        case 0x11748cu: goto label_11748c;
        case 0x1174a0u: goto label_1174a0;
        default: break;
    }

    ctx->pc = 0x117438u;

    // 0x117438: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11743c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x117440: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117444: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x117444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x117448: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11744c: 0x245306cc  addiu       $s3, $v0, 0x6CC
    ctx->pc = 0x11744cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1740));
    // 0x117450: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117454: 0x2471cd28  addiu       $s1, $v1, -0x32D8
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954280));
    // 0x117458: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11745c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11745cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117468: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11746c: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x11746Cu;
    SET_GPR_U32(ctx, 31, 0x117474u);
    ctx->pc = 0x117470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11746Cu;
            // 0x117470: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117474u; }
        if (ctx->pc != 0x117474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117474u; }
        if (ctx->pc != 0x117474u) { return; }
    }
    ctx->pc = 0x117474u;
label_117474:
    // 0x117474: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x117474u;
    {
        const bool branch_taken_0x117474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117474u;
            // 0x117478: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117474) {
            ctx->pc = 0x1174A4u;
            goto label_1174a4;
        }
    }
    ctx->pc = 0x11747Cu;
    // 0x11747c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117480: 0x8e050f44  lw          $a1, 0xF44($s0)
    ctx->pc = 0x117480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3908)));
    // 0x117484: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x117484u;
    SET_GPR_U32(ctx, 31, 0x11748Cu);
    ctx->pc = 0x117488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117484u;
            // 0x117488: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11748Cu; }
        if (ctx->pc != 0x11748Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11748Cu; }
        if (ctx->pc != 0x11748Cu) { return; }
    }
    ctx->pc = 0x11748Cu;
label_11748c:
    // 0x11748c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11748Cu;
    {
        const bool branch_taken_0x11748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11748Cu;
            // 0x117490: 0x8e050f44  lw          $a1, 0xF44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11748c) {
            ctx->pc = 0x1174A4u;
            goto label_1174a4;
        }
    }
    ctx->pc = 0x117494u;
    // 0x117494: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x117494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117498: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x117498u;
    SET_GPR_U32(ctx, 31, 0x1174A0u);
    ctx->pc = 0x11749Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117498u;
            // 0x11749c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174A0u; }
        if (ctx->pc != 0x1174A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174A0u; }
        if (ctx->pc != 0x1174A0u) { return; }
    }
    ctx->pc = 0x1174A0u;
label_1174a0:
    // 0x1174a0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1174a0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1174a4:
    // 0x1174a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1174a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1174a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1174ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1174acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1174b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1174b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1174b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1174b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1174b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1174b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1174bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1174BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1174C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1174BCu;
            // 0x1174c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1174C4u;
}
