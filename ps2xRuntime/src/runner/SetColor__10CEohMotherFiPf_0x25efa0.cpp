#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__10CEohMotherFiPf
// Address: 0x25efa0 - 0x25f008
void SetColor__10CEohMotherFiPf_0x25efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__10CEohMotherFiPf_0x25efa0");
#endif

    switch (ctx->pc) {
        case 0x25eff8u: goto label_25eff8;
        default: break;
    }

    ctx->pc = 0x25efa0u;

    // 0x25efa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25efa4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25EFA4u;
    {
        const bool branch_taken_0x25efa4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EFA4u;
            // 0x25efa8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efa4) {
            ctx->pc = 0x25EFB8u;
            goto label_25efb8;
        }
    }
    ctx->pc = 0x25EFACu;
    // 0x25efac: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25efacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25efb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EFB0u;
    {
        const bool branch_taken_0x25efb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EFB0u;
            // 0x25efb4: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efb0) {
            ctx->pc = 0x25EFC0u;
            goto label_25efc0;
        }
    }
    ctx->pc = 0x25EFB8u;
label_25efb8:
    // 0x25efb8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25EFB8u;
    {
        const bool branch_taken_0x25efb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EFB8u;
            // 0x25efbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efb8) {
            ctx->pc = 0x25EFFCu;
            goto label_25effc;
        }
    }
    ctx->pc = 0x25EFC0u;
label_25efc0:
    // 0x25efc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25efc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25efc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25efcc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EFCCu;
    {
        const bool branch_taken_0x25efcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25efcc) {
            ctx->pc = 0x25EFDCu;
            goto label_25efdc;
        }
    }
    ctx->pc = 0x25EFD4u;
    // 0x25efd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25EFD4u;
    {
        const bool branch_taken_0x25efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EFD4u;
            // 0x25efd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efd4) {
            ctx->pc = 0x25EFFCu;
            goto label_25effc;
        }
    }
    ctx->pc = 0x25EFDCu;
label_25efdc:
    // 0x25efdc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25efe0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25EFE0u;
    {
        const bool branch_taken_0x25efe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EFE0u;
            // 0x25efe4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efe0) {
            ctx->pc = 0x25EFF0u;
            goto label_25eff0;
        }
    }
    ctx->pc = 0x25EFE8u;
    // 0x25efe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25EFE8u;
    {
        const bool branch_taken_0x25efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EFE8u;
            // 0x25efec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25efe8) {
            ctx->pc = 0x25EFFCu;
            goto label_25effc;
        }
    }
    ctx->pc = 0x25EFF0u;
label_25eff0:
    // 0x25eff0: 0xc0a42e4  jal         func_290B90
    ctx->pc = 0x25EFF0u;
    SET_GPR_U32(ctx, 31, 0x25EFF8u);
    ctx->pc = 0x290B90u;
    if (runtime->hasFunction(0x290B90u)) {
        auto targetFn = runtime->lookupFunction(0x290B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EFF8u; }
        if (ctx->pc != 0x25EFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__13CEventSprite2FPf_0x290b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25EFF8u; }
        if (ctx->pc != 0x25EFF8u) { return; }
    }
    ctx->pc = 0x25EFF8u;
label_25eff8:
    // 0x25eff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25effc:
    // 0x25effc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25effcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f000: 0x3e00008  jr          $ra
    ctx->pc = 0x25F000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F000u;
            // 0x25f004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F008u;
}
