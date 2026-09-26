#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__14EditAnalyzeSrcFv
// Address: 0x2a8820 - 0x2a88e0
void Init__14EditAnalyzeSrcFv_0x2a8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__14EditAnalyzeSrcFv_0x2a8820");
#endif

    switch (ctx->pc) {
        case 0x2a8844u: goto label_2a8844;
        case 0x2a88a8u: goto label_2a88a8;
        case 0x2a88b4u: goto label_2a88b4;
        default: break;
    }

    ctx->pc = 0x2a8820u;

    // 0x2a8820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a8820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a8824: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a8824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8828: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a882c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a882cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a8834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a8834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a8838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a883c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a883cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8840: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8844:
    // 0x2a8844: 0x2043021  addu        $a2, $s0, $a0
    ctx->pc = 0x2a8844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2a8848: 0x2053821  addu        $a3, $s0, $a1
    ctx->pc = 0x2a8848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2a884c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2a884cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2a8850: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a8850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a8854: 0xa4e00100  sh          $zero, 0x100($a3)
    ctx->pc = 0x2a8854u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 256), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8858: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x2a8858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2a885c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2a885cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2a8860: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a8860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a8864: 0xa4e00102  sh          $zero, 0x102($a3)
    ctx->pc = 0x2a8864u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 258), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8868: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2a8868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2a886c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2a886cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x2a8870: 0xa4e00104  sh          $zero, 0x104($a3)
    ctx->pc = 0x2a8870u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8874: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2a8874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2a8878: 0xa4e00106  sh          $zero, 0x106($a3)
    ctx->pc = 0x2a8878u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 262), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a887c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2a887cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x2a8880: 0xa4e00108  sh          $zero, 0x108($a3)
    ctx->pc = 0x2a8880u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 264), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8884: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2a8884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x2a8888: 0xa4e0010a  sh          $zero, 0x10A($a3)
    ctx->pc = 0x2a8888u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 266), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a888c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x2a888cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x2a8890: 0xa4e0010c  sh          $zero, 0x10C($a3)
    ctx->pc = 0x2a8890u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 268), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a8894: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x2a8894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x2a8898: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2A8898u;
    {
        const bool branch_taken_0x2a8898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8898u;
            // 0x2a889c: 0xa4e0010e  sh          $zero, 0x10E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 270), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8898) {
            ctx->pc = 0x2A8844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8844;
        }
    }
    ctx->pc = 0x2A88A0u;
    // 0x2a88a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a88a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a88a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a88a8:
    // 0x2a88a8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2a88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a88ac: 0xc0aa1f8  jal         func_2A87E0
    ctx->pc = 0x2A88ACu;
    SET_GPR_U32(ctx, 31, 0x2A88B4u);
    ctx->pc = 0x2A88B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88ACu;
            // 0x2a88b0: 0x24440180  addiu       $a0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E0u;
    if (runtime->hasFunction(0x2A87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88B4u; }
        if (ctx->pc != 0x2A88B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__18EditAnalyzeDataSrcFv_0x2a87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88B4u; }
        if (ctx->pc != 0x2A88B4u) { return; }
    }
    ctx->pc = 0x2A88B4u;
label_2a88b4:
    // 0x2a88b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a88b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a88b8: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x2a88b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2a88bc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2a88bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a88c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A88C0u;
    {
        const bool branch_taken_0x2a88c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a88c0) {
            ctx->pc = 0x2A88A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a88a8;
        }
    }
    ctx->pc = 0x2A88C8u;
    // 0x2a88c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a88c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a88cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a88ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a88d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a88d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a88d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a88d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a88d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A88D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A88DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88D8u;
            // 0x2a88dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A88E0u;
}
