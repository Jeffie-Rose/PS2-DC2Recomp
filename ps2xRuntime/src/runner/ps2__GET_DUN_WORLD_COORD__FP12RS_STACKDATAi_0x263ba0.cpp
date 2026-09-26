#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DUN_WORLD_COORD__FP12RS_STACKDATAi
// Address: 0x263ba0 - 0x263ca0
void ps2__GET_DUN_WORLD_COORD__FP12RS_STACKDATAi_0x263ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DUN_WORLD_COORD__FP12RS_STACKDATAi_0x263ba0");
#endif

    switch (ctx->pc) {
        case 0x263bc8u: goto label_263bc8;
        case 0x263be8u: goto label_263be8;
        case 0x263bf8u: goto label_263bf8;
        case 0x263c08u: goto label_263c08;
        case 0x263c14u: goto label_263c14;
        case 0x263c30u: goto label_263c30;
        case 0x263c40u: goto label_263c40;
        case 0x263c60u: goto label_263c60;
        case 0x263c70u: goto label_263c70;
        case 0x263c80u: goto label_263c80;
        case 0x263c8cu: goto label_263c8c;
        default: break;
    }

    ctx->pc = 0x263ba0u;

    // 0x263ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x263ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x263ba4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x263ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263bb0: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x263BB0u;
    {
        const bool branch_taken_0x263bb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x263BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BB0u;
            // 0x263bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bb0) {
            ctx->pc = 0x263C1Cu;
            goto label_263c1c;
        }
    }
    ctx->pc = 0x263BB8u;
    // 0x263bb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x263bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x263bbc: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x263bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x263bc0: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x263BC0u;
    SET_GPR_U32(ctx, 31, 0x263BC8u);
    ctx->pc = 0x263BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263BC0u;
            // 0x263bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (runtime->hasFunction(0x28D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x28D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BC8u; }
        if (ctx->pc != 0x263BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDungeonEventPoint__FPfPfi_0x28d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BC8u; }
        if (ctx->pc != 0x263BC8u) { return; }
    }
    ctx->pc = 0x263BC8u;
label_263bc8:
    // 0x263bc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263BC8u;
    {
        const bool branch_taken_0x263bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BC8u;
            // 0x263bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bc8) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x263BD0u;
    // 0x263bd0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x263BD0u;
    {
        const bool branch_taken_0x263bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263BD0u;
            // 0x263bd4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bd0) {
            ctx->pc = 0x263C94u;
            goto label_263c94;
        }
    }
    ctx->pc = 0x263BD8u;
label_263bd8:
    // 0x263bd8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x263bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263be0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263BE0u;
    SET_GPR_U32(ctx, 31, 0x263BE8u);
    ctx->pc = 0x263BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263BE0u;
            // 0x263be4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BE8u; }
        if (ctx->pc != 0x263BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BE8u; }
        if (ctx->pc != 0x263BE8u) { return; }
    }
    ctx->pc = 0x263BE8u;
label_263be8:
    // 0x263be8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x263be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bf0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263BF0u;
    SET_GPR_U32(ctx, 31, 0x263BF8u);
    ctx->pc = 0x263BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263BF0u;
            // 0x263bf4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BF8u; }
        if (ctx->pc != 0x263BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263BF8u; }
        if (ctx->pc != 0x263BF8u) { return; }
    }
    ctx->pc = 0x263BF8u;
label_263bf8:
    // 0x263bf8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x263bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c00: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263C00u;
    SET_GPR_U32(ctx, 31, 0x263C08u);
    ctx->pc = 0x263C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C00u;
            // 0x263c04: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C08u; }
        if (ctx->pc != 0x263C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C08u; }
        if (ctx->pc != 0x263C08u) { return; }
    }
    ctx->pc = 0x263C08u;
label_263c08:
    // 0x263c08: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x263c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263c0c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263C0Cu;
    SET_GPR_U32(ctx, 31, 0x263C14u);
    ctx->pc = 0x263C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C0Cu;
            // 0x263c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C14u; }
        if (ctx->pc != 0x263C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C14u; }
        if (ctx->pc != 0x263C14u) { return; }
    }
    ctx->pc = 0x263C14u;
label_263c14:
    // 0x263c14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x263C14u;
    {
        const bool branch_taken_0x263c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C14u;
            // 0x263c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c14) {
            ctx->pc = 0x263C90u;
            goto label_263c90;
        }
    }
    ctx->pc = 0x263C1Cu;
label_263c1c:
    // 0x263c1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x263c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x263c20: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x263C20u;
    {
        const bool branch_taken_0x263c20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x263C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C20u;
            // 0x263c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c20) {
            ctx->pc = 0x263C90u;
            goto label_263c90;
        }
    }
    ctx->pc = 0x263C28u;
    // 0x263c28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263C28u;
    SET_GPR_U32(ctx, 31, 0x263C30u);
    ctx->pc = 0x263C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C28u;
            // 0x263c2c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C30u; }
        if (ctx->pc != 0x263C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C30u; }
        if (ctx->pc != 0x263C30u) { return; }
    }
    ctx->pc = 0x263C30u;
label_263c30:
    // 0x263c30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x263c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x263c34: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x263c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x263c38: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x263C38u;
    SET_GPR_U32(ctx, 31, 0x263C40u);
    ctx->pc = 0x263C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C38u;
            // 0x263c3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (runtime->hasFunction(0x28D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x28D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C40u; }
        if (ctx->pc != 0x263C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDungeonEventPoint__FPfPfi_0x28d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C40u; }
        if (ctx->pc != 0x263C40u) { return; }
    }
    ctx->pc = 0x263C40u;
label_263c40:
    // 0x263c40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263C40u;
    {
        const bool branch_taken_0x263c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C40u;
            // 0x263c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c40) {
            ctx->pc = 0x263C50u;
            goto label_263c50;
        }
    }
    ctx->pc = 0x263C48u;
    // 0x263c48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x263C48u;
    {
        const bool branch_taken_0x263c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263c48) {
            ctx->pc = 0x263C90u;
            goto label_263c90;
        }
    }
    ctx->pc = 0x263C50u;
label_263c50:
    // 0x263c50: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x263c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c58: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263C58u;
    SET_GPR_U32(ctx, 31, 0x263C60u);
    ctx->pc = 0x263C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C58u;
            // 0x263c5c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C60u; }
        if (ctx->pc != 0x263C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C60u; }
        if (ctx->pc != 0x263C60u) { return; }
    }
    ctx->pc = 0x263C60u;
label_263c60:
    // 0x263c60: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x263c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c68: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263C68u;
    SET_GPR_U32(ctx, 31, 0x263C70u);
    ctx->pc = 0x263C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C68u;
            // 0x263c6c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C70u; }
        if (ctx->pc != 0x263C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C70u; }
        if (ctx->pc != 0x263C70u) { return; }
    }
    ctx->pc = 0x263C70u;
label_263c70:
    // 0x263c70: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x263c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c78: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263C78u;
    SET_GPR_U32(ctx, 31, 0x263C80u);
    ctx->pc = 0x263C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C78u;
            // 0x263c7c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C80u; }
        if (ctx->pc != 0x263C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C80u; }
        if (ctx->pc != 0x263C80u) { return; }
    }
    ctx->pc = 0x263C80u;
label_263c80:
    // 0x263c80: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x263c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263c84: 0xc097e54  jal         func_25F950
    ctx->pc = 0x263C84u;
    SET_GPR_U32(ctx, 31, 0x263C8Cu);
    ctx->pc = 0x263C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263C84u;
            // 0x263c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C8Cu; }
        if (ctx->pc != 0x263C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263C8Cu; }
        if (ctx->pc != 0x263C8Cu) { return; }
    }
    ctx->pc = 0x263C8Cu;
label_263c8c:
    // 0x263c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263c90:
    // 0x263c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_263c94:
    // 0x263c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263c98: 0x3e00008  jr          $ra
    ctx->pc = 0x263C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263C98u;
            // 0x263c9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263CA0u;
}
