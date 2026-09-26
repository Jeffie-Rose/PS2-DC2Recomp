#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMotionEnd__12CActionCharaFPc
// Address: 0x16b520 - 0x16b5ac
void CheckMotionEnd__12CActionCharaFPc_0x16b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMotionEnd__12CActionCharaFPc_0x16b520");
#endif

    switch (ctx->pc) {
        case 0x16b550u: goto label_16b550;
        case 0x16b558u: goto label_16b558;
        case 0x16b568u: goto label_16b568;
        case 0x16b58cu: goto label_16b58c;
        default: break;
    }

    ctx->pc = 0x16b520u;

    // 0x16b520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b530: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16b538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b53c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x16B53Cu;
    {
        const bool branch_taken_0x16b53c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B53Cu;
            // 0x16b540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b53c) {
            ctx->pc = 0x16B584u;
            goto label_16b584;
        }
    }
    ctx->pc = 0x16B544u;
    // 0x16b544: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16B544u;
    {
        const bool branch_taken_0x16b544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B544u;
            // 0x16b548: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b544) {
            ctx->pc = 0x16B594u;
            goto label_16b594;
        }
    }
    ctx->pc = 0x16B54Cu;
    // 0x16b54c: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x16b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_16b550:
    // 0x16b550: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x16B550u;
    SET_GPR_U32(ctx, 31, 0x16B558u);
    ctx->pc = 0x16B554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B550u;
            // 0x16b554: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B558u; }
        if (ctx->pc != 0x16B558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B558u; }
        if (ctx->pc != 0x16B558u) { return; }
    }
    ctx->pc = 0x16B558u;
label_16b558:
    // 0x16b558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B558u;
    {
        const bool branch_taken_0x16b558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B558u;
            // 0x16b55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b558) {
            ctx->pc = 0x16B570u;
            goto label_16b570;
        }
    }
    ctx->pc = 0x16B560u;
    // 0x16b560: 0xc05ce30  jal         func_1738C0
    ctx->pc = 0x16B560u;
    SET_GPR_U32(ctx, 31, 0x16B568u);
    ctx->pc = 0x1738C0u;
    if (runtime->hasFunction(0x1738C0u)) {
        auto targetFn = runtime->lookupFunction(0x1738C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B568u; }
        if (ctx->pc != 0x16B568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMotionEnd__11CCharacter2Fv_0x1738c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B568u; }
        if (ctx->pc != 0x16B568u) { return; }
    }
    ctx->pc = 0x16B568u;
label_16b568:
    // 0x16b568: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16B568u;
    {
        const bool branch_taken_0x16b568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B568u;
            // 0x16b56c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b568) {
            ctx->pc = 0x16B598u;
            goto label_16b598;
        }
    }
    ctx->pc = 0x16B570u;
label_16b570:
    // 0x16b570: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b574: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16B574u;
    {
        const bool branch_taken_0x16b574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B574u;
            // 0x16b578: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b574) {
            ctx->pc = 0x16B550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b550;
        }
    }
    ctx->pc = 0x16B57Cu;
    // 0x16b57c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B57Cu;
    {
        const bool branch_taken_0x16b57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b57c) {
            ctx->pc = 0x16B590u;
            goto label_16b590;
        }
    }
    ctx->pc = 0x16B584u;
label_16b584:
    // 0x16b584: 0xc05ce30  jal         func_1738C0
    ctx->pc = 0x16B584u;
    SET_GPR_U32(ctx, 31, 0x16B58Cu);
    ctx->pc = 0x1738C0u;
    if (runtime->hasFunction(0x1738C0u)) {
        auto targetFn = runtime->lookupFunction(0x1738C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B58Cu; }
        if (ctx->pc != 0x16B58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMotionEnd__11CCharacter2Fv_0x1738c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B58Cu; }
        if (ctx->pc != 0x16B58Cu) { return; }
    }
    ctx->pc = 0x16B58Cu;
label_16b58c:
    // 0x16b58c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16b58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b590:
    // 0x16b590: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16b590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b594:
    // 0x16b594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16b598:
    // 0x16b598: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b59c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b5a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5A4u;
            // 0x16b5a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B5ACu;
}
