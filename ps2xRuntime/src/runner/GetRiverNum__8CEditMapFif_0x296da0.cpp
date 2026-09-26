#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRiverNum__8CEditMapFif
// Address: 0x296da0 - 0x296e28
void GetRiverNum__8CEditMapFif_0x296da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRiverNum__8CEditMapFif_0x296da0");
#endif

    switch (ctx->pc) {
        case 0x296da0u: goto label_296da0;
        case 0x296da4u: goto label_296da4;
        case 0x296da8u: goto label_296da8;
        case 0x296dacu: goto label_296dac;
        case 0x296db0u: goto label_296db0;
        case 0x296db4u: goto label_296db4;
        case 0x296db8u: goto label_296db8;
        case 0x296dbcu: goto label_296dbc;
        case 0x296dc0u: goto label_296dc0;
        case 0x296dc4u: goto label_296dc4;
        case 0x296dc8u: goto label_296dc8;
        case 0x296dccu: goto label_296dcc;
        case 0x296dd0u: goto label_296dd0;
        case 0x296dd4u: goto label_296dd4;
        case 0x296dd8u: goto label_296dd8;
        case 0x296ddcu: goto label_296ddc;
        case 0x296de0u: goto label_296de0;
        case 0x296de4u: goto label_296de4;
        case 0x296de8u: goto label_296de8;
        case 0x296decu: goto label_296dec;
        case 0x296df0u: goto label_296df0;
        case 0x296df4u: goto label_296df4;
        case 0x296df8u: goto label_296df8;
        case 0x296dfcu: goto label_296dfc;
        case 0x296e00u: goto label_296e00;
        case 0x296e04u: goto label_296e04;
        case 0x296e08u: goto label_296e08;
        case 0x296e0cu: goto label_296e0c;
        case 0x296e10u: goto label_296e10;
        case 0x296e14u: goto label_296e14;
        case 0x296e18u: goto label_296e18;
        case 0x296e1cu: goto label_296e1c;
        case 0x296e20u: goto label_296e20;
        case 0x296e24u: goto label_296e24;
        default: break;
    }

    ctx->pc = 0x296da0u;

label_296da0:
    // 0x296da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_296da4:
    // 0x296da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x296da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_296da8:
    // 0x296da8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x296da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_296dac:
    // 0x296dac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_296db0:
    // 0x296db0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x296db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296db4:
    // 0x296db4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x296db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_296db8:
    // 0x296db8: 0xc06c310  jal         func_1B0C40
label_296dbc:
    if (ctx->pc == 0x296DBCu) {
        ctx->pc = 0x296DBCu;
            // 0x296dbc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x296DC0u;
        goto label_296dc0;
    }
    ctx->pc = 0x296DB8u;
    SET_GPR_U32(ctx, 31, 0x296DC0u);
    ctx->pc = 0x296DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296DB8u;
            // 0x296dbc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DC0u; }
        if (ctx->pc != 0x296DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DC0u; }
        if (ctx->pc != 0x296DC0u) { return; }
    }
    ctx->pc = 0x296DC0u;
label_296dc0:
    // 0x296dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296dc4:
    // 0x296dc4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_296dc8:
    if (ctx->pc == 0x296DC8u) {
        ctx->pc = 0x296DC8u;
            // 0x296dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296DCCu;
        goto label_296dcc;
    }
    ctx->pc = 0x296DC4u;
    {
        const bool branch_taken_0x296dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x296DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296DC4u;
            // 0x296dc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296dc4) {
            ctx->pc = 0x296DD4u;
            goto label_296dd4;
        }
    }
    ctx->pc = 0x296DCCu;
label_296dcc:
    // 0x296dcc: 0x10000010  b           . + 4 + (0x10 << 2)
label_296dd0:
    if (ctx->pc == 0x296DD0u) {
        ctx->pc = 0x296DD0u;
            // 0x296dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296DD4u;
        goto label_296dd4;
    }
    ctx->pc = 0x296DCCu;
    {
        const bool branch_taken_0x296dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296DCCu;
            // 0x296dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296dcc) {
            ctx->pc = 0x296E10u;
            goto label_296e10;
        }
    }
    ctx->pc = 0x296DD4u;
label_296dd4:
    // 0x296dd4: 0xc0bb988  jal         func_2EE620
label_296dd8:
    if (ctx->pc == 0x296DD8u) {
        ctx->pc = 0x296DD8u;
            // 0x296dd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296DDCu;
        goto label_296ddc;
    }
    ctx->pc = 0x296DD4u;
    SET_GPR_U32(ctx, 31, 0x296DDCu);
    ctx->pc = 0x296DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296DD4u;
            // 0x296dd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DDCu; }
        if (ctx->pc != 0x296DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296DDCu; }
        if (ctx->pc != 0x296DDCu) { return; }
    }
    ctx->pc = 0x296DDCu;
label_296ddc:
    // 0x296ddc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_296de0:
    if (ctx->pc == 0x296DE0u) {
        ctx->pc = 0x296DE0u;
            // 0x296de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296DE4u;
        goto label_296de4;
    }
    ctx->pc = 0x296DDCu;
    {
        const bool branch_taken_0x296ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296DDCu;
            // 0x296de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ddc) {
            ctx->pc = 0x296DECu;
            goto label_296dec;
        }
    }
    ctx->pc = 0x296DE4u;
label_296de4:
    // 0x296de4: 0x1000000b  b           . + 4 + (0xB << 2)
label_296de8:
    if (ctx->pc == 0x296DE8u) {
        ctx->pc = 0x296DE8u;
            // 0x296de8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x296DECu;
        goto label_296dec;
    }
    ctx->pc = 0x296DE4u;
    {
        const bool branch_taken_0x296de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296DE4u;
            // 0x296de8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296de4) {
            ctx->pc = 0x296E14u;
            goto label_296e14;
        }
    }
    ctx->pc = 0x296DECu;
label_296dec:
    // 0x296dec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x296decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_296df0:
    // 0x296df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296df4:
    // 0x296df4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x296df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_296df8:
    // 0x296df8: 0x320f809  jalr        $t9
label_296dfc:
    if (ctx->pc == 0x296DFCu) {
        ctx->pc = 0x296DFCu;
            // 0x296dfc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x296E00u;
        goto label_296e00;
    }
    ctx->pc = 0x296DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x296E00u);
        ctx->pc = 0x296DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296DF8u;
            // 0x296dfc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296E00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296E00u; }
            if (ctx->pc != 0x296E00u) { return; }
        }
        }
    }
    ctx->pc = 0x296E00u;
label_296e00:
    // 0x296e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_296e04:
    // 0x296e04: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x296e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_296e08:
    // 0x296e08: 0xc0a5ae0  jal         func_296B80
label_296e0c:
    if (ctx->pc == 0x296E0Cu) {
        ctx->pc = 0x296E0Cu;
            // 0x296e0c: 0xe7b4004c  swc1        $f20, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x296E10u;
        goto label_296e10;
    }
    ctx->pc = 0x296E08u;
    SET_GPR_U32(ctx, 31, 0x296E10u);
    ctx->pc = 0x296E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296E08u;
            // 0x296e0c: 0xe7b4004c  swc1        $f20, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B80u;
    if (runtime->hasFunction(0x296B80u)) {
        auto targetFn = runtime->lookupFunction(0x296B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E10u; }
        if (ctx->pc != 0x296E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFPf_0x296b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296E10u; }
        if (ctx->pc != 0x296E10u) { return; }
    }
    ctx->pc = 0x296E10u;
label_296e10:
    // 0x296e10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x296e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_296e14:
    // 0x296e14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x296e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_296e18:
    // 0x296e18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x296e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_296e1c:
    // 0x296e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296e20:
    // 0x296e20: 0x3e00008  jr          $ra
label_296e24:
    if (ctx->pc == 0x296E24u) {
        ctx->pc = 0x296E24u;
            // 0x296e24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x296E28u;
        goto label_fallthrough_0x296e20;
    }
    ctx->pc = 0x296E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296E20u;
            // 0x296e24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x296e20:
    ctx->pc = 0x296E28u;
}
