#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dbgSetAnalyzeFlag__9CEditDataFiii
// Address: 0x2aa2a0 - 0x2aa328
void dbgSetAnalyzeFlag__9CEditDataFiii_0x2aa2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dbgSetAnalyzeFlag__9CEditDataFiii_0x2aa2a0");
#endif

    switch (ctx->pc) {
        case 0x2aa2ccu: goto label_2aa2cc;
        case 0x2aa2dcu: goto label_2aa2dc;
        case 0x2aa2f4u: goto label_2aa2f4;
        default: break;
    }

    ctx->pc = 0x2aa2a0u;

    // 0x2aa2a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2aa2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2aa2a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2aa2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2aa2a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2aa2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2aa2ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aa2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aa2b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2aa2b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aa2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aa2b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2aa2b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa2c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2aa2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2c4: 0xc0aa828  jal         func_2AA0A0
    ctx->pc = 0x2AA2C4u;
    SET_GPR_U32(ctx, 31, 0x2AA2CCu);
    ctx->pc = 0x2AA2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA2C4u;
            // 0x2aa2c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A0u;
    if (runtime->hasFunction(0x2AA0A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA2CCu; }
        if (ctx->pc != 0x2AA2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeData__9CEditDataFii_0x2aa0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA2CCu; }
        if (ctx->pc != 0x2AA2CCu) { return; }
    }
    ctx->pc = 0x2AA2CCu;
label_2aa2cc:
    // 0x2aa2cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2d0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AA2D0u;
    {
        const bool branch_taken_0x2aa2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA2D0u;
            // 0x2aa2d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2d0) {
            ctx->pc = 0x2AA308u;
            goto label_2aa308;
        }
    }
    ctx->pc = 0x2AA2D8u;
    // 0x2aa2d8: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2aa2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2aa2dc:
    // 0x2aa2dc: 0x80660008  lb          $a2, 0x8($v1)
    ctx->pc = 0x2aa2dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2aa2e0: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA2E0u;
    {
        const bool branch_taken_0x2aa2e0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2AA2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA2E0u;
            // 0x2aa2e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2e0) {
            ctx->pc = 0x2AA304u;
            goto label_2aa304;
        }
    }
    ctx->pc = 0x2AA2E8u;
    // 0x2aa2e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2aa2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa2ec: 0xc0aa89c  jal         func_2AA270
    ctx->pc = 0x2AA2ECu;
    SET_GPR_U32(ctx, 31, 0x2AA2F4u);
    ctx->pc = 0x2AA2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA2ECu;
            // 0x2aa2f0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA270u;
    if (runtime->hasFunction(0x2AA270u)) {
        auto targetFn = runtime->lookupFunction(0x2AA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA2F4u; }
        if (ctx->pc != 0x2AA2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dbgSetContintionFlag__9CEditDataFiii_0x2aa270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA2F4u; }
        if (ctx->pc != 0x2AA2F4u) { return; }
    }
    ctx->pc = 0x2AA2F4u;
label_2aa2f4:
    // 0x2aa2f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2aa2f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2aa2f8: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2aa2f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2aa2fc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AA2FCu;
    {
        const bool branch_taken_0x2aa2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA2FCu;
            // 0x2aa300: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2fc) {
            ctx->pc = 0x2AA2DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa2dc;
        }
    }
    ctx->pc = 0x2AA304u;
label_2aa304:
    // 0x2aa304: 0x0  nop
    ctx->pc = 0x2aa304u;
    // NOP
label_2aa308:
    // 0x2aa308: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2aa308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa30c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2aa30cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa310: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aa310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aa314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa31c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa320: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA320u;
            // 0x2aa324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA328u;
}
