#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SEARCH_AREA2__FP12RS_STACKDATAi
// Address: 0x1e3bf0 - 0x1e3c64
void ps2__SEARCH_AREA2__FP12RS_STACKDATAi_0x1e3bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SEARCH_AREA2__FP12RS_STACKDATAi_0x1e3bf0");
#endif

    switch (ctx->pc) {
        case 0x1e3c18u: goto label_1e3c18;
        case 0x1e3c20u: goto label_1e3c20;
        case 0x1e3c2cu: goto label_1e3c2c;
        case 0x1e3c40u: goto label_1e3c40;
        case 0x1e3c54u: goto label_1e3c54;
        default: break;
    }

    ctx->pc = 0x1e3bf0u;

    // 0x1e3bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e3bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e3bf4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e3bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3bfc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3BFCu;
    {
        const bool branch_taken_0x1e3bfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BFCu;
            // 0x1e3c00: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bfc) {
            ctx->pc = 0x1E3C0Cu;
            goto label_1e3c0c;
        }
    }
    ctx->pc = 0x1E3C04u;
    // 0x1e3c04: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E3C04u;
    {
        const bool branch_taken_0x1e3c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C04u;
            // 0x1e3c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c04) {
            ctx->pc = 0x1E3C58u;
            goto label_1e3c58;
        }
    }
    ctx->pc = 0x1E3C0Cu;
label_1e3c0c:
    // 0x1e3c0c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3c10: 0xc0781cc  jal         func_1E0730
    ctx->pc = 0x1E3C10u;
    SET_GPR_U32(ctx, 31, 0x1E3C18u);
    ctx->pc = 0x1E3C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C10u;
            // 0x1e3c14: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C18u; }
        if (ctx->pc != 0x1E3C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C18u; }
        if (ctx->pc != 0x1E3C18u) { return; }
    }
    ctx->pc = 0x1E3C18u;
label_1e3c18:
    // 0x1e3c18: 0xc0781cc  jal         func_1E0730
    ctx->pc = 0x1E3C18u;
    SET_GPR_U32(ctx, 31, 0x1E3C20u);
    ctx->pc = 0x1E3C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C18u;
            // 0x1e3c1c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C20u; }
        if (ctx->pc != 0x1E3C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfPP12RS_STACKDATA_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C20u; }
        if (ctx->pc != 0x1E3C20u) { return; }
    }
    ctx->pc = 0x1E3C20u;
label_1e3c20:
    // 0x1e3c20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3c24: 0xc04c018  jal         func_130060
    ctx->pc = 0x1E3C24u;
    SET_GPR_U32(ctx, 31, 0x1E3C2Cu);
    ctx->pc = 0x1E3C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C24u;
            // 0x1e3c28: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C2Cu; }
        if (ctx->pc != 0x1E3C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C2Cu; }
        if (ctx->pc != 0x1E3C2Cu) { return; }
    }
    ctx->pc = 0x1E3C2Cu;
label_1e3c2c:
    // 0x1e3c2c: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e3c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e3c30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3c34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e3c38: 0xc07763c  jal         func_1DD8F0
    ctx->pc = 0x1E3C38u;
    SET_GPR_U32(ctx, 31, 0x1E3C40u);
    ctx->pc = 0x1E3C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C38u;
            // 0x1e3c3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8F0u;
    if (runtime->hasFunction(0x1DD8F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C40u; }
        if (ctx->pc != 0x1E3C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchArea__FP6CScenePfPff_0x1dd8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C40u; }
        if (ctx->pc != 0x1E3C40u) { return; }
    }
    ctx->pc = 0x1E3C40u;
label_1e3c40:
    // 0x1e3c40: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1e3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1e3c44: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e3c44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3c48: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e3c4c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E3C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3C54u);
    ctx->pc = 0x1E3C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C4Cu;
            // 0x1e3c50: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C54u; }
        if (ctx->pc != 0x1E3C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C54u; }
        if (ctx->pc != 0x1E3C54u) { return; }
    }
    ctx->pc = 0x1E3C54u;
label_1e3c54:
    // 0x1e3c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3c58:
    // 0x1e3c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C5Cu;
            // 0x1e3c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3C64u;
}
