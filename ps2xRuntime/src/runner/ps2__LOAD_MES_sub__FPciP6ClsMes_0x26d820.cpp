#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_MES_sub__FPciP6ClsMes
// Address: 0x26d820 - 0x26d920
void ps2__LOAD_MES_sub__FPciP6ClsMes_0x26d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_MES_sub__FPciP6ClsMes_0x26d820");
#endif

    switch (ctx->pc) {
        case 0x26d864u: goto label_26d864;
        case 0x26d884u: goto label_26d884;
        case 0x26d890u: goto label_26d890;
        case 0x26d8b0u: goto label_26d8b0;
        case 0x26d8e4u: goto label_26d8e4;
        case 0x26d8f4u: goto label_26d8f4;
        default: break;
    }

    ctx->pc = 0x26d820u;

    // 0x26d820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26d824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26d828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26d82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d830: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26d830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d83c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D83Cu;
    {
        const bool branch_taken_0x26d83c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D83Cu;
            // 0x26d840: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d83c) {
            ctx->pc = 0x26D84Cu;
            goto label_26d84c;
        }
    }
    ctx->pc = 0x26D844u;
    // 0x26d844: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26D844u;
    {
        const bool branch_taken_0x26d844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D844u;
            // 0x26d848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d844) {
            ctx->pc = 0x26D904u;
            goto label_26d904;
        }
    }
    ctx->pc = 0x26D84Cu;
label_26d84c:
    // 0x26d84c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D84Cu;
    {
        const bool branch_taken_0x26d84c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D84Cu;
            // 0x26d850: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d84c) {
            ctx->pc = 0x26D85Cu;
            goto label_26d85c;
        }
    }
    ctx->pc = 0x26D854u;
    // 0x26d854: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26D854u;
    {
        const bool branch_taken_0x26d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D854u;
            // 0x26d858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d854) {
            ctx->pc = 0x26D904u;
            goto label_26d904;
        }
    }
    ctx->pc = 0x26D85Cu;
label_26d85c:
    // 0x26d85c: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x26D85Cu;
    SET_GPR_U32(ctx, 31, 0x26D864u);
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D864u; }
        if (ctx->pc != 0x26D864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D864u; }
        if (ctx->pc != 0x26D864u) { return; }
    }
    ctx->pc = 0x26D864u;
label_26d864:
    // 0x26d864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d868: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D868u;
    {
        const bool branch_taken_0x26d868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D868u;
            // 0x26d86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d868) {
            ctx->pc = 0x26D878u;
            goto label_26d878;
        }
    }
    ctx->pc = 0x26D870u;
    // 0x26d870: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x26D870u;
    {
        const bool branch_taken_0x26d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D870u;
            // 0x26d874: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d870) {
            ctx->pc = 0x26D908u;
            goto label_26d908;
        }
    }
    ctx->pc = 0x26D878u;
label_26d878:
    // 0x26d878: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26d878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26d87c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x26D87Cu;
    SET_GPR_U32(ctx, 31, 0x26D884u);
    ctx->pc = 0x26D880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D87Cu;
            // 0x26d880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D884u; }
        if (ctx->pc != 0x26D884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D884u; }
        if (ctx->pc != 0x26D884u) { return; }
    }
    ctx->pc = 0x26D884u;
label_26d884:
    // 0x26d884: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d888: 0xc04e780  jal         func_139E00
    ctx->pc = 0x26D888u;
    SET_GPR_U32(ctx, 31, 0x26D890u);
    ctx->pc = 0x26D88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D888u;
            // 0x26d88c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D890u; }
        if (ctx->pc != 0x26D890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D890u; }
        if (ctx->pc != 0x26D890u) { return; }
    }
    ctx->pc = 0x26D890u;
label_26d890:
    // 0x26d890: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x26d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x26d894: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D894u;
    {
        const bool branch_taken_0x26d894 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x26D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D894u;
            // 0x26d898: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d894) {
            ctx->pc = 0x26D8A4u;
            goto label_26d8a4;
        }
    }
    ctx->pc = 0x26D89Cu;
    // 0x26d89c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x26d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x26d8a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x26d8a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_26d8a4:
    // 0x26d8a4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x26d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d8a8: 0xc04e714  jal         func_139C50
    ctx->pc = 0x26D8A8u;
    SET_GPR_U32(ctx, 31, 0x26D8B0u);
    ctx->pc = 0x26D8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D8A8u;
            // 0x26d8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D8B0u; }
        if (ctx->pc != 0x26D8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D8B0u; }
        if (ctx->pc != 0x26D8B0u) { return; }
    }
    ctx->pc = 0x26D8B0u;
label_26d8b0:
    // 0x26d8b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26d8b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8b4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D8B4u;
    {
        const bool branch_taken_0x26d8b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D8B4u;
            // 0x26d8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8b4) {
            ctx->pc = 0x26D8C4u;
            goto label_26d8c4;
        }
    }
    ctx->pc = 0x26D8BCu;
    // 0x26d8bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26D8BCu;
    {
        const bool branch_taken_0x26d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d8bc) {
            ctx->pc = 0x26D904u;
            goto label_26d904;
        }
    }
    ctx->pc = 0x26D8C4u;
label_26d8c4:
    // 0x26d8c4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x26d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x26d8c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D8C8u;
    {
        const bool branch_taken_0x26d8c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x26D8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D8C8u;
            // 0x26d8cc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8c8) {
            ctx->pc = 0x26D8D8u;
            goto label_26d8d8;
        }
    }
    ctx->pc = 0x26D8D0u;
    // 0x26d8d0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x26d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x26d8d4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x26d8d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_26d8d8:
    // 0x26d8d8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x26d8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d8dc: 0xc04e704  jal         func_139C10
    ctx->pc = 0x26D8DCu;
    SET_GPR_U32(ctx, 31, 0x26D8E4u);
    ctx->pc = 0x26D8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D8DCu;
            // 0x26d8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D8E4u; }
        if (ctx->pc != 0x26D8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D8E4u; }
        if (ctx->pc != 0x26D8E4u) { return; }
    }
    ctx->pc = 0x26D8E4u;
label_26d8e4:
    // 0x26d8e4: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x26d8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x26d8e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8ec: 0xc049c18  jal         func_127060
    ctx->pc = 0x26D8ECu;
    SET_GPR_U32(ctx, 31, 0x26D8F4u);
    ctx->pc = 0x26D8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D8ECu;
            // 0x26d8f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D8F4u; }
        if (ctx->pc != 0x26D8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D8F4u; }
        if (ctx->pc != 0x26D8F4u) { return; }
    }
    ctx->pc = 0x26D8F4u;
label_26d8f4:
    // 0x26d8f4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x26d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x26d8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d8fc: 0xae7217ec  sw          $s2, 0x17EC($s3)
    ctx->pc = 0x26d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6124), GPR_U32(ctx, 18));
    // 0x26d900: 0xae6317f0  sw          $v1, 0x17F0($s3)
    ctx->pc = 0x26d900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6128), GPR_U32(ctx, 3));
label_26d904:
    // 0x26d904: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26d904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26d908:
    // 0x26d908: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26d908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d90c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26d90cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d918: 0x3e00008  jr          $ra
    ctx->pc = 0x26D918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D918u;
            // 0x26d91c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D920u;
}
