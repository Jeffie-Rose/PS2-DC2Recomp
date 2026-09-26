#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_GET_VECT2__FP12RS_STACKDATAi
// Address: 0x1e6910 - 0x1e6994
void ps2__ESM_GET_VECT2__FP12RS_STACKDATAi_0x1e6910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_GET_VECT2__FP12RS_STACKDATAi_0x1e6910");
#endif

    switch (ctx->pc) {
        case 0x1e6934u: goto label_1e6934;
        case 0x1e6958u: goto label_1e6958;
        case 0x1e6968u: goto label_1e6968;
        case 0x1e6978u: goto label_1e6978;
        case 0x1e6984u: goto label_1e6984;
        default: break;
    }

    ctx->pc = 0x1e6910u;

    // 0x1e6910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6914: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e6914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e6918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e691c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E691Cu;
    {
        const bool branch_taken_0x1e691c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E691Cu;
            // 0x1e6920: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e691c) {
            ctx->pc = 0x1E692Cu;
            goto label_1e692c;
        }
    }
    ctx->pc = 0x1E6924u;
    // 0x1e6924: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E6924u;
    {
        const bool branch_taken_0x1e6924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6924u;
            // 0x1e6928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6924) {
            ctx->pc = 0x1E6984u;
            goto label_1e6984;
        }
    }
    ctx->pc = 0x1E692Cu;
label_1e692c:
    // 0x1e692c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E692Cu;
    SET_GPR_U32(ctx, 31, 0x1E6934u);
    ctx->pc = 0x1E6930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E692Cu;
            // 0x1e6930: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6934u; }
        if (ctx->pc != 0x1E6934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6934u; }
        if (ctx->pc != 0x1E6934u) { return; }
    }
    ctx->pc = 0x1E6934u;
label_1e6934:
    // 0x1e6934: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6938: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e693c: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6940: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e6940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e6944: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x1e6944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x1e6948: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e694c: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6950: 0xc0b88f8  jal         func_2E23E0
    ctx->pc = 0x1E6950u;
    SET_GPR_U32(ctx, 31, 0x1E6958u);
    ctx->pc = 0x1E6954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6950u;
            // 0x1e6954: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E23E0u;
    if (runtime->hasFunction(0x2E23E0u)) {
        auto targetFn = runtime->lookupFunction(0x2E23E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6958u; }
        if (ctx->pc != 0x1E6958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScriptVect2__16CEffectScriptManFPfii_0x2e23e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6958u; }
        if (ctx->pc != 0x1E6958u) { return; }
    }
    ctx->pc = 0x1E6958u;
label_1e6958:
    // 0x1e6958: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e695c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6960: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E6960u;
    SET_GPR_U32(ctx, 31, 0x1E6968u);
    ctx->pc = 0x1E6964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6960u;
            // 0x1e6964: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6968u; }
        if (ctx->pc != 0x1E6968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6968u; }
        if (ctx->pc != 0x1E6968u) { return; }
    }
    ctx->pc = 0x1E6968u;
label_1e6968:
    // 0x1e6968: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e6968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e696c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6970: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E6970u;
    SET_GPR_U32(ctx, 31, 0x1E6978u);
    ctx->pc = 0x1E6974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6970u;
            // 0x1e6974: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6978u; }
        if (ctx->pc != 0x1E6978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6978u; }
        if (ctx->pc != 0x1E6978u) { return; }
    }
    ctx->pc = 0x1E6978u;
label_1e6978:
    // 0x1e6978: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e6978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e697c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E697Cu;
    SET_GPR_U32(ctx, 31, 0x1E6984u);
    ctx->pc = 0x1E6980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E697Cu;
            // 0x1e6980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6984u; }
        if (ctx->pc != 0x1E6984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6984u; }
        if (ctx->pc != 0x1E6984u) { return; }
    }
    ctx->pc = 0x1E6984u;
label_1e6984:
    // 0x1e6984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e698c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E698Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E698Cu;
            // 0x1e6990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6994u;
}
