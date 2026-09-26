#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _HIT_EFFECT__FP12RS_STACKDATAi
// Address: 0x266bc0 - 0x266d4c
void ps2__HIT_EFFECT__FP12RS_STACKDATAi_0x266bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__HIT_EFFECT__FP12RS_STACKDATAi_0x266bc0");
#endif

    switch (ctx->pc) {
        case 0x266bf0u: goto label_266bf0;
        case 0x266c00u: goto label_266c00;
        case 0x266c10u: goto label_266c10;
        case 0x266c20u: goto label_266c20;
        case 0x266c78u: goto label_266c78;
        case 0x266c88u: goto label_266c88;
        case 0x266c98u: goto label_266c98;
        case 0x266ca8u: goto label_266ca8;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cc8u: goto label_266cc8;
        case 0x266cd4u: goto label_266cd4;
        case 0x266d10u: goto label_266d10;
        default: break;
    }

    ctx->pc = 0x266bc0u;

    // 0x266bc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x266bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x266bc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x266bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x266bc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x266bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x266bcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x266bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x266bd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x266bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266bd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x266bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x266bd8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x266bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x266bdc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x266bdcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x266be0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x266be0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x266be4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x266be4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x266be8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266BE8u;
    SET_GPR_U32(ctx, 31, 0x266BF0u);
    ctx->pc = 0x266BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266BE8u;
            // 0x266bec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BF0u; }
        if (ctx->pc != 0x266BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266BF0u; }
        if (ctx->pc != 0x266BF0u) { return; }
    }
    ctx->pc = 0x266BF0u;
label_266bf0:
    // 0x266bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266bf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266bf8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266BF8u;
    SET_GPR_U32(ctx, 31, 0x266C00u);
    ctx->pc = 0x266BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266BF8u;
            // 0x266bfc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C00u; }
        if (ctx->pc != 0x266C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C00u; }
        if (ctx->pc != 0x266C00u) { return; }
    }
    ctx->pc = 0x266C00u;
label_266c00:
    // 0x266c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c04: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x266c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x266c08: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266C08u;
    SET_GPR_U32(ctx, 31, 0x266C10u);
    ctx->pc = 0x266C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266C08u;
            // 0x266c0c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C10u; }
        if (ctx->pc != 0x266C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C10u; }
        if (ctx->pc != 0x266C10u) { return; }
    }
    ctx->pc = 0x266C10u;
label_266c10:
    // 0x266c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c14: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x266c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x266c18: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266C18u;
    SET_GPR_U32(ctx, 31, 0x266C20u);
    ctx->pc = 0x266C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266C18u;
            // 0x266c1c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C20u; }
        if (ctx->pc != 0x266C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C20u; }
        if (ctx->pc != 0x266C20u) { return; }
    }
    ctx->pc = 0x266C20u;
label_266c20:
    // 0x266c20: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x266c24: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x266c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x266c28: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x266c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x266c2c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x266c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x266c30: 0x24421ce0  addiu       $v0, $v0, 0x1CE0
    ctx->pc = 0x266c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7392));
    // 0x266c34: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x266c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x266c38: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x266c38u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266c3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x266c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266c40: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x266c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x266c44: 0x2412001e  addiu       $s2, $zero, 0x1E
    ctx->pc = 0x266c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x266c48: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x266c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x266c4c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x266c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x266c50: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x266c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x266c54: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x266c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x266c58: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x266c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x266c5c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x266c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x266c60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x266c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x266c64: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x266c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x266c68: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x266C68u;
    {
        const bool branch_taken_0x266c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266C68u;
            // 0x266c6c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266c68) {
            ctx->pc = 0x266CD4u;
            goto label_266cd4;
        }
    }
    ctx->pc = 0x266C70u;
    // 0x266c70: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x266C70u;
    SET_GPR_U32(ctx, 31, 0x266C78u);
    ctx->pc = 0x266C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266C70u;
            // 0x266c74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C78u; }
        if (ctx->pc != 0x266C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C78u; }
        if (ctx->pc != 0x266C78u) { return; }
    }
    ctx->pc = 0x266C78u;
label_266c78:
    // 0x266c78: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x266c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x266c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c80: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266C80u;
    SET_GPR_U32(ctx, 31, 0x266C88u);
    ctx->pc = 0x266C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266C80u;
            // 0x266c84: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C88u; }
        if (ctx->pc != 0x266C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C88u; }
        if (ctx->pc != 0x266C88u) { return; }
    }
    ctx->pc = 0x266C88u;
label_266c88:
    // 0x266c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c8c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x266c8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x266c90: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266C90u;
    SET_GPR_U32(ctx, 31, 0x266C98u);
    ctx->pc = 0x266C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266C90u;
            // 0x266c94: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C98u; }
        if (ctx->pc != 0x266C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266C98u; }
        if (ctx->pc != 0x266C98u) { return; }
    }
    ctx->pc = 0x266C98u;
label_266c98:
    // 0x266c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266c9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x266c9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x266ca0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266CA0u;
    SET_GPR_U32(ctx, 31, 0x266CA8u);
    ctx->pc = 0x266CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266CA0u;
            // 0x266ca4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CA8u; }
        if (ctx->pc != 0x266CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CA8u; }
        if (ctx->pc != 0x266CA8u) { return; }
    }
    ctx->pc = 0x266CA8u;
label_266ca8:
    // 0x266ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266cac: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x266cacu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x266cb0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266CB0u;
    SET_GPR_U32(ctx, 31, 0x266CB8u);
    ctx->pc = 0x266CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266CB0u;
            // 0x266cb4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CB8u; }
        if (ctx->pc != 0x266CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CB8u; }
        if (ctx->pc != 0x266CB8u) { return; }
    }
    ctx->pc = 0x266CB8u;
label_266cb8:
    // 0x266cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266cbc: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x266cbcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x266cc0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266CC0u;
    SET_GPR_U32(ctx, 31, 0x266CC8u);
    ctx->pc = 0x266CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266CC0u;
            // 0x266cc4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CC8u; }
        if (ctx->pc != 0x266CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CC8u; }
        if (ctx->pc != 0x266CC8u) { return; }
    }
    ctx->pc = 0x266CC8u;
label_266cc8:
    // 0x266cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x266cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ccc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266CCCu;
    SET_GPR_U32(ctx, 31, 0x266CD4u);
    ctx->pc = 0x266CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266CCCu;
            // 0x266cd0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CD4u; }
        if (ctx->pc != 0x266CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266CD4u; }
        if (ctx->pc != 0x266CD4u) { return; }
    }
    ctx->pc = 0x266CD4u;
label_266cd4:
    // 0x266cd4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x266cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266cd8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x266cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x266cdc: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x266ce0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x266ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x266ce4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x266ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x266ce8: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x266ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x266cec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x266cecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x266cf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x266cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266cf4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x266cf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x266cf8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x266cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266cfc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x266cfcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x266d00: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x266d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266d04: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x266d04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x266d08: 0xc07098c  jal         func_1C2630
    ctx->pc = 0x266D08u;
    SET_GPR_U32(ctx, 31, 0x266D10u);
    ctx->pc = 0x266D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266D08u;
            // 0x266d0c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2630u;
    if (runtime->hasFunction(0x1C2630u)) {
        auto targetFn = runtime->lookupFunction(0x1C2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266D10u; }
        if (ctx->pc != 0x266D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266D10u; }
        if (ctx->pc != 0x266D10u) { return; }
    }
    ctx->pc = 0x266D10u;
label_266d10:
    // 0x266d10: 0x3c0301ee  lui         $v1, 0x1EE
    ctx->pc = 0x266d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)494 << 16));
    // 0x266d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266d18: 0x246300f4  addiu       $v1, $v1, 0xF4
    ctx->pc = 0x266d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 244));
    // 0x266d1c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x266d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x266d20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x266d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x266d24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x266d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x266d28: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x266d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x266d2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x266d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266d30: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x266d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x266d34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x266d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266d38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x266d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x266d3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x266d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266d40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x266d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x266d44: 0x3e00008  jr          $ra
    ctx->pc = 0x266D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266D44u;
            // 0x266d48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266D4Cu;
}
