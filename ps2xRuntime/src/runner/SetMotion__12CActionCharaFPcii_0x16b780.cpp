#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotion__12CActionCharaFPcii
// Address: 0x16b780 - 0x16b7f8
void SetMotion__12CActionCharaFPcii_0x16b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotion__12CActionCharaFPcii_0x16b780");
#endif

    switch (ctx->pc) {
        case 0x16b7acu: goto label_16b7ac;
        case 0x16b7bcu: goto label_16b7bc;
        case 0x16b7ccu: goto label_16b7cc;
        default: break;
    }

    ctx->pc = 0x16b780u;

    // 0x16b780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b78c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b790: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b794: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b798: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16b798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b79c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B79Cu;
    {
        const bool branch_taken_0x16b79c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B79Cu;
            // 0x16b7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b79c) {
            ctx->pc = 0x16B7B4u;
            goto label_16b7b4;
        }
    }
    ctx->pc = 0x16B7A4u;
    // 0x16b7a4: 0xc05ce68  jal         func_1739A0
    ctx->pc = 0x16B7A4u;
    SET_GPR_U32(ctx, 31, 0x16B7ACu);
    ctx->pc = 0x1739A0u;
    if (runtime->hasFunction(0x1739A0u)) {
        auto targetFn = runtime->lookupFunction(0x1739A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7ACu; }
        if (ctx->pc != 0x16B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__11CCharacter2FPci_0x1739a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7ACu; }
        if (ctx->pc != 0x16B7ACu) { return; }
    }
    ctx->pc = 0x16B7ACu;
label_16b7ac:
    // 0x16b7ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16B7ACu;
    {
        const bool branch_taken_0x16b7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7ACu;
            // 0x16b7b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7ac) {
            ctx->pc = 0x16B7E4u;
            goto label_16b7e4;
        }
    }
    ctx->pc = 0x16B7B4u;
label_16b7b4:
    // 0x16b7b4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B7B4u;
    {
        const bool branch_taken_0x16b7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7b4) {
            ctx->pc = 0x16B7DCu;
            goto label_16b7dc;
        }
    }
    ctx->pc = 0x16B7BCu;
label_16b7bc:
    // 0x16b7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7c4: 0xc05ce68  jal         func_1739A0
    ctx->pc = 0x16B7C4u;
    SET_GPR_U32(ctx, 31, 0x16B7CCu);
    ctx->pc = 0x16B7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7C4u;
            // 0x16b7c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1739A0u;
    if (runtime->hasFunction(0x1739A0u)) {
        auto targetFn = runtime->lookupFunction(0x1739A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7CCu; }
        if (ctx->pc != 0x16B7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__11CCharacter2FPci_0x1739a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7CCu; }
        if (ctx->pc != 0x16B7CCu) { return; }
    }
    ctx->pc = 0x16B7CCu;
label_16b7cc:
    // 0x16b7cc: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b7d0: 0x0  nop
    ctx->pc = 0x16b7d0u;
    // NOP
    // 0x16b7d4: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B7D4u;
    {
        const bool branch_taken_0x16b7d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b7d4) {
            ctx->pc = 0x16B7BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b7bc;
        }
    }
    ctx->pc = 0x16B7DCu;
label_16b7dc:
    // 0x16b7dc: 0x0  nop
    ctx->pc = 0x16b7dcu;
    // NOP
    // 0x16b7e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16b7e4:
    // 0x16b7e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b7e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b7e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b7ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16B7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7F0u;
            // 0x16b7f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B7F8u;
}
