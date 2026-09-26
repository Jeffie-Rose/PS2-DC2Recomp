#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckOmakeVtuto__Fi
// Address: 0x2bfdb0 - 0x2bfe18
void CheckOmakeVtuto__Fi_0x2bfdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckOmakeVtuto__Fi_0x2bfdb0");
#endif

    switch (ctx->pc) {
        case 0x2bfdd4u: goto label_2bfdd4;
        default: break;
    }

    ctx->pc = 0x2bfdb0u;

    // 0x2bfdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bfdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bfdb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfdb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bfdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bfdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bfdc0: 0x8f838ad4  lw          $v1, -0x752C($gp)
    ctx->pc = 0x2bfdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x2bfdc4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BFDC4u;
    {
        const bool branch_taken_0x2bfdc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BFDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFDC4u;
            // 0x2bfdc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdc4) {
            ctx->pc = 0x2BFE04u;
            goto label_2bfe04;
        }
    }
    ctx->pc = 0x2BFDCCu;
    // 0x2bfdcc: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2BFDCCu;
    SET_GPR_U32(ctx, 31, 0x2BFDD4u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFDD4u; }
        if (ctx->pc != 0x2BFDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFDD4u; }
        if (ctx->pc != 0x2BFDD4u) { return; }
    }
    ctx->pc = 0x2BFDD4u;
label_2bfdd4:
    // 0x2bfdd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bfdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bfdd8: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BFDD8u;
    {
        const bool branch_taken_0x2bfdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BFDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFDD8u;
            // 0x2bfddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdd8) {
            ctx->pc = 0x2BFE08u;
            goto label_2bfe08;
        }
    }
    ctx->pc = 0x2BFDE0u;
    // 0x2bfde0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2bfde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2bfde4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFDE4u;
    {
        const bool branch_taken_0x2bfde4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFDE4u;
            // 0x2bfde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfde4) {
            ctx->pc = 0x2BFDFCu;
            goto label_2bfdfc;
        }
    }
    ctx->pc = 0x2BFDECu;
    // 0x2bfdec: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2bfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2bfdf0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFDF0u;
    {
        const bool branch_taken_0x2bfdf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfdf0) {
            ctx->pc = 0x2BFE04u;
            goto label_2bfe04;
        }
    }
    ctx->pc = 0x2BFDF8u;
    // 0x2bfdf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bfdfc:
    // 0x2bfdfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFDFCu;
    {
        const bool branch_taken_0x2bfdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFDFCu;
            // 0x2bfe00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdfc) {
            ctx->pc = 0x2BFE0Cu;
            goto label_2bfe0c;
        }
    }
    ctx->pc = 0x2BFE04u;
label_2bfe04:
    // 0x2bfe04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bfe04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfe08:
    // 0x2bfe08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bfe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfe0c:
    // 0x2bfe0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfe0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfe10: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFE10u;
            // 0x2bfe14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFE18u;
}
