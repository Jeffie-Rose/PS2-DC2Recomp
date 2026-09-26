#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraPas__10CCameraPasFiPfPf
// Address: 0x2565b0 - 0x25660c
void GetCameraPas__10CCameraPasFiPfPf_0x2565b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraPas__10CCameraPasFiPfPf_0x2565b0");
#endif

    switch (ctx->pc) {
        case 0x2565e8u: goto label_2565e8;
        case 0x2565f4u: goto label_2565f4;
        default: break;
    }

    ctx->pc = 0x2565b0u;

    // 0x2565b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2565b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2565b4: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2565b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2565b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2565b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2565bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2565bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2565c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2565c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2565c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2565C4u;
    {
        const bool branch_taken_0x2565c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2565C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2565C4u;
            // 0x2565c8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565c4) {
            ctx->pc = 0x2565D4u;
            goto label_2565d4;
        }
    }
    ctx->pc = 0x2565CCu;
    // 0x2565cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2565CCu;
    {
        const bool branch_taken_0x2565cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2565CCu;
            // 0x2565d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565cc) {
            ctx->pc = 0x2565F8u;
            goto label_2565f8;
        }
    }
    ctx->pc = 0x2565D4u;
label_2565d4:
    // 0x2565d4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2565d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2565d8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2565d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2565dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2565dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565e0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2565E0u;
    SET_GPR_U32(ctx, 31, 0x2565E8u);
    ctx->pc = 0x2565E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2565E0u;
            // 0x2565e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2565E8u; }
        if (ctx->pc != 0x2565E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2565E8u; }
        if (ctx->pc != 0x2565E8u) { return; }
    }
    ctx->pc = 0x2565E8u;
label_2565e8:
    // 0x2565e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2565e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2565ec: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2565ECu;
    SET_GPR_U32(ctx, 31, 0x2565F4u);
    ctx->pc = 0x2565F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2565ECu;
            // 0x2565f0: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2565F4u; }
        if (ctx->pc != 0x2565F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2565F4u; }
        if (ctx->pc != 0x2565F4u) { return; }
    }
    ctx->pc = 0x2565F4u;
label_2565f4:
    // 0x2565f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2565f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2565f8:
    // 0x2565f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2565f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2565fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2565fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256604: 0x3e00008  jr          $ra
    ctx->pc = 0x256604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256604u;
            // 0x256608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25660Cu;
}
