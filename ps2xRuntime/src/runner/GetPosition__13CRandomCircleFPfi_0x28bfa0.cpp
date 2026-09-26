#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPosition__13CRandomCircleFPfi
// Address: 0x28bfa0 - 0x28c01c
void GetPosition__13CRandomCircleFPfi_0x28bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosition__13CRandomCircleFPfi_0x28bfa0");
#endif

    switch (ctx->pc) {
        case 0x28bfd4u: goto label_28bfd4;
        case 0x28c00cu: goto label_28c00c;
        default: break;
    }

    ctx->pc = 0x28bfa0u;

    // 0x28bfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28bfa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28bfa8: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28BFA8u;
    {
        const bool branch_taken_0x28bfa8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFA8u;
            // 0x28bfac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfa8) {
            ctx->pc = 0x28BFDCu;
            goto label_28bfdc;
        }
    }
    ctx->pc = 0x28BFB0u;
    // 0x28bfb0: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x28bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x28bfb4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BFB4u;
    {
        const bool branch_taken_0x28bfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28BFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFB4u;
            // 0x28bfb8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfb4) {
            ctx->pc = 0x28BFC4u;
            goto label_28bfc4;
        }
    }
    ctx->pc = 0x28BFBCu;
    // 0x28bfbc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28BFBCu;
    {
        const bool branch_taken_0x28bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFBCu;
            // 0x28bfc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfbc) {
            ctx->pc = 0x28C010u;
            goto label_28c010;
        }
    }
    ctx->pc = 0x28BFC4u;
label_28bfc4:
    // 0x28bfc4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28bfc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfcc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x28BFCCu;
    SET_GPR_U32(ctx, 31, 0x28BFD4u);
    ctx->pc = 0x28BFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFCCu;
            // 0x28bfd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BFD4u; }
        if (ctx->pc != 0x28BFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BFD4u; }
        if (ctx->pc != 0x28BFD4u) { return; }
    }
    ctx->pc = 0x28BFD4u;
label_28bfd4:
    // 0x28bfd4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28BFD4u;
    {
        const bool branch_taken_0x28bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFD4u;
            // 0x28bfd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfd4) {
            ctx->pc = 0x28C010u;
            goto label_28c010;
        }
    }
    ctx->pc = 0x28BFDCu;
label_28bfdc:
    // 0x28bfdc: 0x4c00005  bltz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BFDCu;
    {
        const bool branch_taken_0x28bfdc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x28BFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFDCu;
            // 0x28bfe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfdc) {
            ctx->pc = 0x28BFF4u;
            goto label_28bff4;
        }
    }
    ctx->pc = 0x28BFE4u;
    // 0x28bfe4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x28bfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28bfe8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BFE8u;
    {
        const bool branch_taken_0x28bfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFE8u;
            // 0x28bfec: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfe8) {
            ctx->pc = 0x28BFFCu;
            goto label_28bffc;
        }
    }
    ctx->pc = 0x28BFF0u;
    // 0x28bff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28bff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bff4:
    // 0x28bff4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28BFF4u;
    {
        const bool branch_taken_0x28bff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFF4u;
            // 0x28bff8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bff4) {
            ctx->pc = 0x28C014u;
            goto label_28c014;
        }
    }
    ctx->pc = 0x28BFFCu;
label_28bffc:
    // 0x28bffc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c000: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c004: 0xc041c5c  jal         func_107170
    ctx->pc = 0x28C004u;
    SET_GPR_U32(ctx, 31, 0x28C00Cu);
    ctx->pc = 0x28C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C004u;
            // 0x28c008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C00Cu; }
        if (ctx->pc != 0x28C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C00Cu; }
        if (ctx->pc != 0x28C00Cu) { return; }
    }
    ctx->pc = 0x28C00Cu;
label_28c00c:
    // 0x28c00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c010:
    // 0x28c010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28c010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28c014:
    // 0x28c014: 0x3e00008  jr          $ra
    ctx->pc = 0x28C014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C014u;
            // 0x28c018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C01Cu;
}
