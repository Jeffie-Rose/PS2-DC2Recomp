#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsClearBox
// Address: 0x105828 - 0x1058f0
void sceDevConsClearBox_0x105828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsClearBox_0x105828");
#endif

    switch (ctx->pc) {
        case 0x105870u: goto label_105870;
        case 0x105888u: goto label_105888;
        case 0x105898u: goto label_105898;
        default: break;
    }

    ctx->pc = 0x105828u;

    // 0x105828: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x105828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10582c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105830: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x105830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x105834: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x105834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105838: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x105838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10583c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x10583cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105840: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105844: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x105844u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105848: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10584c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x10584cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105850: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x105850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x105854: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x105854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105858: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10585c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10585cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105860: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105864: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x105864u;
    {
        const bool branch_taken_0x105864 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x105868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105864u;
            // 0x105868: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105864) {
            ctx->pc = 0x1058C4u;
            goto label_1058c4;
        }
    }
    ctx->pc = 0x10586Cu;
    // 0x10586c: 0x0  nop
    ctx->pc = 0x10586cu;
    // NOP
label_105870:
    // 0x105870: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x105870u;
    {
        const bool branch_taken_0x105870 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x105874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105870u;
            // 0x105874: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105870) {
            ctx->pc = 0x1058B0u;
            goto label_1058b0;
        }
    }
    ctx->pc = 0x105878u;
    // 0x105878: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x105878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10587c: 0x2a68821  addu        $s1, $s5, $a2
    ctx->pc = 0x10587cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x105880: 0x2d02821  addu        $a1, $s6, $s0
    ctx->pc = 0x105880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x105884: 0x0  nop
    ctx->pc = 0x105884u;
    // NOP
label_105888:
    // 0x105888: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x105888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10588c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10588cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105890: 0xc041840  jal         func_106100
    ctx->pc = 0x105890u;
    SET_GPR_U32(ctx, 31, 0x105898u);
    ctx->pc = 0x105894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105890u;
            // 0x105894: 0x24070720  addiu       $a3, $zero, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106100u;
    if (runtime->hasFunction(0x106100u)) {
        auto targetFn = runtime->lookupFunction(0x106100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105898u; }
        if (ctx->pc != 0x105898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPutc_0x106100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105898u; }
        if (ctx->pc != 0x105898u) { return; }
    }
    ctx->pc = 0x105898u;
label_105898:
    // 0x105898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x105898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10589c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x10589cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1058a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1058A0u;
    {
        const bool branch_taken_0x1058a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1058A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058A0u;
            // 0x1058a4: 0x2d02821  addu        $a1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058a0) {
            ctx->pc = 0x105888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105888;
        }
    }
    ctx->pc = 0x1058A8u;
    // 0x1058a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1058A8u;
    {
        const bool branch_taken_0x1058a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058A8u;
            // 0x1058ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058a8) {
            ctx->pc = 0x1058B8u;
            goto label_1058b8;
        }
    }
    ctx->pc = 0x1058B0u;
label_1058b0:
    // 0x1058b0: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x1058b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1058b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1058b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1058b8:
    // 0x1058b8: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x1058b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1058bc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1058BCu;
    {
        const bool branch_taken_0x1058bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1058bc) {
            ctx->pc = 0x105870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105870;
        }
    }
    ctx->pc = 0x1058C4u;
label_1058c4:
    // 0x1058c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1058c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1058c8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1058c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1058cc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1058ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1058d0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1058d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1058d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1058d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1058d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1058d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1058dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1058dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1058e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1058e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1058e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1058e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1058e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1058E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1058ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058E8u;
            // 0x1058ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1058F0u;
}
