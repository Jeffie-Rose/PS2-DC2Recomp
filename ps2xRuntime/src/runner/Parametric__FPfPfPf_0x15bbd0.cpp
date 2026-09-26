#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Parametric__FPfPfPf
// Address: 0x15bbd0 - 0x15bc18
void Parametric__FPfPfPf_0x15bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Parametric__FPfPfPf_0x15bbd0");
#endif

    switch (ctx->pc) {
        case 0x15bbecu: goto label_15bbec;
        case 0x15bc00u: goto label_15bc00;
        default: break;
    }

    ctx->pc = 0x15bbd0u;

    // 0x15bbd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bbd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15bbd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15bbdc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15bbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbe0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15bbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbe4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x15BBE4u;
    SET_GPR_U32(ctx, 31, 0x15BBECu);
    ctx->pc = 0x15BBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBE4u;
            // 0x15bbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBECu; }
        if (ctx->pc != 0x15BBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BBECu; }
        if (ctx->pc != 0x15BBECu) { return; }
    }
    ctx->pc = 0x15BBECu;
label_15bbec:
    // 0x15bbec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bbf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbf4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15bbf8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x15BBF8u;
    SET_GPR_U32(ctx, 31, 0x15BC00u);
    ctx->pc = 0x15BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BBF8u;
            // 0x15bbfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC00u; }
        if (ctx->pc != 0x15BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BC00u; }
        if (ctx->pc != 0x15BC00u) { return; }
    }
    ctx->pc = 0x15BC00u;
label_15bc00:
    // 0x15bc00: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15bc04: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x15bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x15bc08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bc10: 0x3e00008  jr          $ra
    ctx->pc = 0x15BC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BC10u;
            // 0x15bc14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BC18u;
}
