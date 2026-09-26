#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateBBox__12mgCVisualMDTFPfPfPA4_f
// Address: 0x13efc0 - 0x13f00c
void CreateBBox__12mgCVisualMDTFPfPfPA4_f_0x13efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBBox__12mgCVisualMDTFPfPfPA4_f_0x13efc0");
#endif

    switch (ctx->pc) {
        case 0x13effcu: goto label_13effc;
        default: break;
    }

    ctx->pc = 0x13efc0u;

    // 0x13efc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13efc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13efc8: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x13efc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13efcc: 0x1ce00003  bgtz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EFCCu;
    {
        const bool branch_taken_0x13efcc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x13EFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFCCu;
            // 0x13efd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efcc) {
            ctx->pc = 0x13EFDCu;
            goto label_13efdc;
        }
    }
    ctx->pc = 0x13EFD4u;
    // 0x13efd4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13EFD4u;
    {
        const bool branch_taken_0x13efd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFD4u;
            // 0x13efd8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efd4) {
            ctx->pc = 0x13F004u;
            goto label_13f004;
        }
    }
    ctx->pc = 0x13EFDCu;
label_13efdc:
    // 0x13efdc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x13efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13efe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EFE0u;
    {
        const bool branch_taken_0x13efe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFE0u;
            // 0x13efe4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efe0) {
            ctx->pc = 0x13EFF0u;
            goto label_13eff0;
        }
    }
    ctx->pc = 0x13EFE8u;
    // 0x13efe8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13EFE8u;
    {
        const bool branch_taken_0x13efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFE8u;
            // 0x13efec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13efe8) {
            ctx->pc = 0x13F000u;
            goto label_13f000;
        }
    }
    ctx->pc = 0x13EFF0u;
label_13eff0:
    // 0x13eff0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13eff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eff4: 0xc04c260  jal         func_130980
    ctx->pc = 0x13EFF4u;
    SET_GPR_U32(ctx, 31, 0x13EFFCu);
    ctx->pc = 0x13EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EFF4u;
            // 0x13eff8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130980u;
    if (runtime->hasFunction(0x130980u)) {
        auto targetFn = runtime->lookupFunction(0x130980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EFFCu; }
        if (ctx->pc != 0x13EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMinMaxN__FPfPfPA4_fi_0x130980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EFFCu; }
        if (ctx->pc != 0x13EFFCu) { return; }
    }
    ctx->pc = 0x13EFFCu;
label_13effc:
    // 0x13effc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f000:
    // 0x13f000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f004:
    // 0x13f004: 0x3e00008  jr          $ra
    ctx->pc = 0x13F004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F004u;
            // 0x13f008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F00Cu;
}
