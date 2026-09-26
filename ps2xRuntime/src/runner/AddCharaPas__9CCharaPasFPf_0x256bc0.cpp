#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddCharaPas__9CCharaPasFPf
// Address: 0x256bc0 - 0x256c10
void AddCharaPas__9CCharaPasFPf_0x256bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddCharaPas__9CCharaPasFPf_0x256bc0");
#endif

    switch (ctx->pc) {
        case 0x256bf0u: goto label_256bf0;
        default: break;
    }

    ctx->pc = 0x256bc0u;

    // 0x256bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x256bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x256bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x256bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256bcc: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x256bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x256bd0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x256bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256bd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x256BD4u;
    {
        const bool branch_taken_0x256bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256BD4u;
            // 0x256bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bd4) {
            ctx->pc = 0x256BE4u;
            goto label_256be4;
        }
    }
    ctx->pc = 0x256BDCu;
    // 0x256bdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x256BDCu;
    {
        const bool branch_taken_0x256bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256BDCu;
            // 0x256be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256bdc) {
            ctx->pc = 0x256C00u;
            goto label_256c00;
        }
    }
    ctx->pc = 0x256BE4u;
label_256be4:
    // 0x256be4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x256be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x256be8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x256BE8u;
    SET_GPR_U32(ctx, 31, 0x256BF0u);
    ctx->pc = 0x256BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256BE8u;
            // 0x256bec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256BF0u; }
        if (ctx->pc != 0x256BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256BF0u; }
        if (ctx->pc != 0x256BF0u) { return; }
    }
    ctx->pc = 0x256BF0u;
label_256bf0:
    // 0x256bf0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x256bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x256bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256bf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x256bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x256bfc: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x256bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
label_256c00:
    // 0x256c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256c08: 0x3e00008  jr          $ra
    ctx->pc = 0x256C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256C08u;
            // 0x256c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256C10u;
}
