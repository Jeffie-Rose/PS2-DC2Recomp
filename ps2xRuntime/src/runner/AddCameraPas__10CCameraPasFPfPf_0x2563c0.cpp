#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddCameraPas__10CCameraPasFPfPf
// Address: 0x2563c0 - 0x256434
void AddCameraPas__10CCameraPasFPfPf_0x2563c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddCameraPas__10CCameraPasFPfPf_0x2563c0");
#endif

    switch (ctx->pc) {
        case 0x2563f8u: goto label_2563f8;
        case 0x256410u: goto label_256410;
        default: break;
    }

    ctx->pc = 0x2563c0u;

    // 0x2563c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2563c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2563c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2563c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2563c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2563c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2563cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2563ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2563d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2563d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2563d4: 0x8c830200  lw          $v1, 0x200($a0)
    ctx->pc = 0x2563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x2563d8: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2563d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2563dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2563DCu;
    {
        const bool branch_taken_0x2563dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2563E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2563DCu;
            // 0x2563e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563dc) {
            ctx->pc = 0x2563ECu;
            goto label_2563ec;
        }
    }
    ctx->pc = 0x2563E4u;
    // 0x2563e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2563E4u;
    {
        const bool branch_taken_0x2563e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2563E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2563E4u;
            // 0x2563e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2563e4) {
            ctx->pc = 0x256420u;
            goto label_256420;
        }
    }
    ctx->pc = 0x2563ECu;
label_2563ec:
    // 0x2563ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2563ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2563f0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2563F0u;
    SET_GPR_U32(ctx, 31, 0x2563F8u);
    ctx->pc = 0x2563F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2563F0u;
            // 0x2563f4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2563F8u; }
        if (ctx->pc != 0x2563F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2563F8u; }
        if (ctx->pc != 0x2563F8u) { return; }
    }
    ctx->pc = 0x2563F8u;
label_2563f8:
    // 0x2563f8: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x2563f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x2563fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2563fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256400: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x256400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x256404: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x256404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x256408: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256408u;
    SET_GPR_U32(ctx, 31, 0x256410u);
    ctx->pc = 0x25640Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256408u;
            // 0x25640c: 0x24440100  addiu       $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256410u; }
        if (ctx->pc != 0x256410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256410u; }
        if (ctx->pc != 0x256410u) { return; }
    }
    ctx->pc = 0x256410u;
label_256410:
    // 0x256410: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x256414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256418: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x256418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25641c: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x25641cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_256420:
    // 0x256420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25642c: 0x3e00008  jr          $ra
    ctx->pc = 0x25642Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25642Cu;
            // 0x256430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256434u;
}
