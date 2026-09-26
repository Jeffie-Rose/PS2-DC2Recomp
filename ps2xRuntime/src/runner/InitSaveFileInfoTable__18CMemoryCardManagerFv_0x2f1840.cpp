#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSaveFileInfoTable__18CMemoryCardManagerFv
// Address: 0x2f1840 - 0x2f18a8
void InitSaveFileInfoTable__18CMemoryCardManagerFv_0x2f1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSaveFileInfoTable__18CMemoryCardManagerFv_0x2f1840");
#endif

    switch (ctx->pc) {
        case 0x2f1864u: goto label_2f1864;
        case 0x2f1878u: goto label_2f1878;
        default: break;
    }

    ctx->pc = 0x2f1840u;

    // 0x2f1840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f1844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f1844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f1848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f1848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f184c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1850: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f1850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f185c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f185cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1860: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f1860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1864:
    // 0x2f1864: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x2f1864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2f1868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f186c: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x2f186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2f1870: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F1870u;
    SET_GPR_U32(ctx, 31, 0x2F1878u);
    ctx->pc = 0x2F1874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1870u;
            // 0x2f1874: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1878u; }
        if (ctx->pc != 0x2F1878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1878u; }
        if (ctx->pc != 0x2F1878u) { return; }
    }
    ctx->pc = 0x2F1878u;
label_2f1878:
    // 0x2f1878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f1878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f187c: 0xa24000a0  sb          $zero, 0xA0($s2)
    ctx->pc = 0x2f187cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1880: 0x2a030011  slti        $v1, $s0, 0x11
    ctx->pc = 0x2f1880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f1884: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F1884u;
    {
        const bool branch_taken_0x2f1884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1884u;
            // 0x2f1888: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1884) {
            ctx->pc = 0x2F1864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1864;
        }
    }
    ctx->pc = 0x2F188Cu;
    // 0x2f188c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f188cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1890: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1890u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f189c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f189cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f18a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F18A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F18A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18A0u;
            // 0x2f18a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F18A8u;
}
