#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UninstallApp__Fv
// Address: 0x31bf60 - 0x31bfec
void UninstallApp__Fv_0x31bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UninstallApp__Fv_0x31bf60");
#endif

    switch (ctx->pc) {
        case 0x31bf70u: goto label_31bf70;
        case 0x31bf88u: goto label_31bf88;
        case 0x31bf98u: goto label_31bf98;
        case 0x31bfa8u: goto label_31bfa8;
        case 0x31bfb8u: goto label_31bfb8;
        case 0x31bfc4u: goto label_31bfc4;
        case 0x31bfccu: goto label_31bfcc;
        default: break;
    }

    ctx->pc = 0x31bf60u;

    // 0x31bf60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x31bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x31bf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31bf68: 0xc0c6eb0  jal         func_31BAC0
    ctx->pc = 0x31BF68u;
    SET_GPR_U32(ctx, 31, 0x31BF70u);
    ctx->pc = 0x31BAC0u;
    if (runtime->hasFunction(0x31BAC0u)) {
        auto targetFn = runtime->lookupFunction(0x31BAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF70u; }
        if (ctx->pc != 0x31BF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPartition__Fv_0x31bac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF70u; }
        if (ctx->pc != 0x31BF70u) { return; }
    }
    ctx->pc = 0x31BF70u;
label_31bf70:
    // 0x31bf70: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BF70u;
    {
        const bool branch_taken_0x31bf70 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF70u;
            // 0x31bf74: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf70) {
            ctx->pc = 0x31BF80u;
            goto label_31bf80;
        }
    }
    ctx->pc = 0x31BF78u;
    // 0x31bf78: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x31BF78u;
    {
        const bool branch_taken_0x31bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF78u;
            // 0x31bf7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf78) {
            ctx->pc = 0x31BFE4u;
            goto label_31bfe4;
        }
    }
    ctx->pc = 0x31BF80u;
label_31bf80:
    // 0x31bf80: 0xc0c6e0c  jal         func_31B830
    ctx->pc = 0x31BF80u;
    SET_GPR_U32(ctx, 31, 0x31BF88u);
    ctx->pc = 0x31B830u;
    if (runtime->hasFunction(0x31B830u)) {
        auto targetFn = runtime->lookupFunction(0x31B830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF88u; }
        if (ctx->pc != 0x31BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPassword__FPc_0x31b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF88u; }
        if (ctx->pc != 0x31BF88u) { return; }
    }
    ctx->pc = 0x31BF88u;
label_31bf88:
    // 0x31bf88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bf8c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bf90: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31BF90u;
    SET_GPR_U32(ctx, 31, 0x31BF98u);
    ctx->pc = 0x31BF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BF90u;
            // 0x31bf94: 0x24a52d70  addiu       $a1, $a1, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF98u; }
        if (ctx->pc != 0x31BF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BF98u; }
        if (ctx->pc != 0x31BF98u) { return; }
    }
    ctx->pc = 0x31BF98u;
label_31bf98:
    // 0x31bf98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bf9c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bfa0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BFA0u;
    SET_GPR_U32(ctx, 31, 0x31BFA8u);
    ctx->pc = 0x31BFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFA0u;
            // 0x31bfa4: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFA8u; }
        if (ctx->pc != 0x31BFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFA8u; }
        if (ctx->pc != 0x31BFA8u) { return; }
    }
    ctx->pc = 0x31BFA8u;
label_31bfa8:
    // 0x31bfa8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bfac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bfb0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BFB0u;
    SET_GPR_U32(ctx, 31, 0x31BFB8u);
    ctx->pc = 0x31BFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFB0u;
            // 0x31bfb4: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFB8u; }
        if (ctx->pc != 0x31BFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFB8u; }
        if (ctx->pc != 0x31BFB8u) { return; }
    }
    ctx->pc = 0x31BFB8u;
label_31bfb8:
    // 0x31bfb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bfbc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BFBCu;
    SET_GPR_U32(ctx, 31, 0x31BFC4u);
    ctx->pc = 0x31BFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFBCu;
            // 0x31bfc0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFC4u; }
        if (ctx->pc != 0x31BFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFC4u; }
        if (ctx->pc != 0x31BFC4u) { return; }
    }
    ctx->pc = 0x31BFC4u;
label_31bfc4:
    // 0x31bfc4: 0xc045538  jal         func_1154E0
    ctx->pc = 0x31BFC4u;
    SET_GPR_U32(ctx, 31, 0x31BFCCu);
    ctx->pc = 0x31BFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFC4u;
            // 0x31bfc8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1154E0u;
    if (runtime->hasFunction(0x1154E0u)) {
        auto targetFn = runtime->lookupFunction(0x1154E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFCCu; }
        if (ctx->pc != 0x31BFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRemove_0x1154e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BFCCu; }
        if (ctx->pc != 0x31BFCCu) { return; }
    }
    ctx->pc = 0x31BFCCu;
label_31bfcc:
    // 0x31bfcc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BFCCu;
    {
        const bool branch_taken_0x31bfcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31bfcc) {
            ctx->pc = 0x31BFDCu;
            goto label_31bfdc;
        }
    }
    ctx->pc = 0x31BFD4u;
    // 0x31bfd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31BFD4u;
    {
        const bool branch_taken_0x31bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bfd4) {
            ctx->pc = 0x31BFE0u;
            goto label_31bfe0;
        }
    }
    ctx->pc = 0x31BFDCu;
label_31bfdc:
    // 0x31bfdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bfe0:
    // 0x31bfe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31bfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31bfe4:
    // 0x31bfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x31BFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BFE4u;
            // 0x31bfe8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BFECu;
}
