#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GeoramaFunc__FP12GeoFuncParamP12RS_STACKDATAi
// Address: 0x2f0b60 - 0x2f0c20
void GeoramaFunc__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeoramaFunc__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0b60");
#endif

    switch (ctx->pc) {
        case 0x2f0b8cu: goto label_2f0b8c;
        case 0x2f0bd0u: goto label_2f0bd0;
        case 0x2f0be0u: goto label_2f0be0;
        case 0x2f0bf4u: goto label_2f0bf4;
        case 0x2f0c04u: goto label_2f0c04;
        default: break;
    }

    ctx->pc = 0x2f0b60u;

    // 0x2f0b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f0b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f0b64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f0b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f0b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f0b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0b70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f0b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0b74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f0b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0b80: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f0b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0b84: 0xc062208  jal         func_188820
    ctx->pc = 0x2F0B84u;
    SET_GPR_U32(ctx, 31, 0x2F0B8Cu);
    ctx->pc = 0x2F0B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B84u;
            // 0x2f0b88: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188820u;
    if (runtime->hasFunction(0x188820u)) {
        auto targetFn = runtime->lookupFunction(0x188820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0B8Cu; }
        if (ctx->pc != 0x2F0B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rsGetStackInt__FP12RS_STACKDATA_0x188820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0B8Cu; }
        if (ctx->pc != 0x2F0B8Cu) { return; }
    }
    ctx->pc = 0x2F0B8Cu;
label_2f0b8c:
    // 0x2f0b8c: 0x240303e7  addiu       $v1, $zero, 0x3E7
    ctx->pc = 0x2f0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x2f0b90: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2F0B90u;
    {
        const bool branch_taken_0x2f0b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B90u;
            // 0x2f0b94: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b90) {
            ctx->pc = 0x2F0BFCu;
            goto label_2f0bfc;
        }
    }
    ctx->pc = 0x2F0B98u;
    // 0x2f0b98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f0b9c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F0B9Cu;
    {
        const bool branch_taken_0x2f0b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0B9Cu;
            // 0x2f0ba0: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b9c) {
            ctx->pc = 0x2F0BE8u;
            goto label_2f0be8;
        }
    }
    ctx->pc = 0x2F0BA4u;
    // 0x2f0ba4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f0ba8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F0BA8u;
    {
        const bool branch_taken_0x2f0ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BA8u;
            // 0x2f0bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ba8) {
            ctx->pc = 0x2F0BD8u;
            goto label_2f0bd8;
        }
    }
    ctx->pc = 0x2F0BB0u;
    // 0x2f0bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0bb4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0BB4u;
    {
        const bool branch_taken_0x2f0bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BB4u;
            // 0x2f0bb8: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bb4) {
            ctx->pc = 0x2F0BC4u;
            goto label_2f0bc4;
        }
    }
    ctx->pc = 0x2F0BBCu;
    // 0x2f0bbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F0BBCu;
    {
        const bool branch_taken_0x2f0bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BBCu;
            // 0x2f0bc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bbc) {
            ctx->pc = 0x2F0C08u;
            goto label_2f0c08;
        }
    }
    ctx->pc = 0x2F0BC4u;
label_2f0bc4:
    // 0x2f0bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f0bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bc8: 0xc0bc32c  jal         func_2F0CB0
    ctx->pc = 0x2F0BC8u;
    SET_GPR_U32(ctx, 31, 0x2F0BD0u);
    ctx->pc = 0x2F0BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BC8u;
            // 0x2f0bcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0CB0u;
    if (runtime->hasFunction(0x2F0CB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BD0u; }
        if (ctx->pc != 0x2F0BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadIntNPC__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BD0u; }
        if (ctx->pc != 0x2F0BD0u) { return; }
    }
    ctx->pc = 0x2F0BD0u;
label_2f0bd0:
    // 0x2f0bd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F0BD0u;
    {
        const bool branch_taken_0x2f0bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BD0u;
            // 0x2f0bd4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bd0) {
            ctx->pc = 0x2F0C0Cu;
            goto label_2f0c0c;
        }
    }
    ctx->pc = 0x2F0BD8u;
label_2f0bd8:
    // 0x2f0bd8: 0xc0bc3a8  jal         func_2F0EA0
    ctx->pc = 0x2F0BD8u;
    SET_GPR_U32(ctx, 31, 0x2F0BE0u);
    ctx->pc = 0x2F0BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BD8u;
            // 0x2f0bdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0EA0u;
    if (runtime->hasFunction(0x2F0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BE0u; }
        if (ctx->pc != 0x2F0BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoNPC__FP12GeoFuncParami_0x2f0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BE0u; }
        if (ctx->pc != 0x2F0BE0u) { return; }
    }
    ctx->pc = 0x2F0BE0u;
label_2f0be0:
    // 0x2f0be0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0BE0u;
    {
        const bool branch_taken_0x2f0be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0be0) {
            ctx->pc = 0x2F0C08u;
            goto label_2f0c08;
        }
    }
    ctx->pc = 0x2F0BE8u;
label_2f0be8:
    // 0x2f0be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f0be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bec: 0xc0bc308  jal         func_2F0C20
    ctx->pc = 0x2F0BECu;
    SET_GPR_U32(ctx, 31, 0x2F0BF4u);
    ctx->pc = 0x2F0BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BECu;
            // 0x2f0bf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0C20u;
    if (runtime->hasFunction(0x2F0C20u)) {
        auto targetFn = runtime->lookupFunction(0x2F0C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BF4u; }
        if (ctx->pc != 0x2F0BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPlaceBurnParts__FP12GeoFuncParamP12RS_STACKDATAi_0x2f0c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0BF4u; }
        if (ctx->pc != 0x2F0BF4u) { return; }
    }
    ctx->pc = 0x2F0BF4u;
label_2f0bf4:
    // 0x2f0bf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0BF4u;
    {
        const bool branch_taken_0x2f0bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0bf4) {
            ctx->pc = 0x2F0C08u;
            goto label_2f0c08;
        }
    }
    ctx->pc = 0x2F0BFCu;
label_2f0bfc:
    // 0x2f0bfc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2F0BFCu;
    SET_GPR_U32(ctx, 31, 0x2F0C04u);
    ctx->pc = 0x2F0C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0BFCu;
            // 0x2f0c00: 0x24841620  addiu       $a0, $a0, 0x1620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C04u; }
        if (ctx->pc != 0x2F0C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0C04u; }
        if (ctx->pc != 0x2F0C04u) { return; }
    }
    ctx->pc = 0x2F0C04u;
label_2f0c04:
    // 0x2f0c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c08:
    // 0x2f0c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f0c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0c0c:
    // 0x2f0c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0C18u;
            // 0x2f0c1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F0C20u;
}
