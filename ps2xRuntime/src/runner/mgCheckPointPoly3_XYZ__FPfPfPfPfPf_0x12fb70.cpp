#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCheckPointPoly3_XYZ__FPfPfPfPfPf
// Address: 0x12fb70 - 0x12fd10
void mgCheckPointPoly3_XYZ__FPfPfPfPfPf_0x12fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCheckPointPoly3_XYZ__FPfPfPfPfPf_0x12fb70");
#endif

    switch (ctx->pc) {
        case 0x12fbb8u: goto label_12fbb8;
        case 0x12fbc8u: goto label_12fbc8;
        case 0x12fbd8u: goto label_12fbd8;
        case 0x12fbe8u: goto label_12fbe8;
        case 0x12fbf8u: goto label_12fbf8;
        case 0x12fc08u: goto label_12fc08;
        case 0x12fc18u: goto label_12fc18;
        case 0x12fc28u: goto label_12fc28;
        case 0x12fc38u: goto label_12fc38;
        case 0x12fc44u: goto label_12fc44;
        case 0x12fc54u: goto label_12fc54;
        case 0x12fc64u: goto label_12fc64;
        default: break;
    }

    ctx->pc = 0x12fb70u;

    // 0x12fb70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x12fb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x12fb74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12fb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12fb78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12fb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12fb7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12fb80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12fb80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12fb88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12fb88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12fb90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12fb90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12fb98: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12fb98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb9c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x12fb9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12fba0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12fba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fba4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12fba8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12fba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbb0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FBB0u;
    SET_GPR_U32(ctx, 31, 0x12FBB8u);
    ctx->pc = 0x12FBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBB0u;
            // 0x12fbb4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBB8u; }
        if (ctx->pc != 0x12FBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBB8u; }
        if (ctx->pc != 0x12FBB8u) { return; }
    }
    ctx->pc = 0x12FBB8u;
label_12fbb8:
    // 0x12fbb8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12fbbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12fbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbc0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FBC0u;
    SET_GPR_U32(ctx, 31, 0x12FBC8u);
    ctx->pc = 0x12FBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBC0u;
            // 0x12fbc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBC8u; }
        if (ctx->pc != 0x12FBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBC8u; }
        if (ctx->pc != 0x12FBC8u) { return; }
    }
    ctx->pc = 0x12FBC8u;
label_12fbc8:
    // 0x12fbc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12fbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbcc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12fbd0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FBD0u;
    SET_GPR_U32(ctx, 31, 0x12FBD8u);
    ctx->pc = 0x12FBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBD0u;
            // 0x12fbd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBD8u; }
        if (ctx->pc != 0x12FBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBD8u; }
        if (ctx->pc != 0x12FBD8u) { return; }
    }
    ctx->pc = 0x12FBD8u;
label_12fbd8:
    // 0x12fbd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12fbdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12fbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbe0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FBE0u;
    SET_GPR_U32(ctx, 31, 0x12FBE8u);
    ctx->pc = 0x12FBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBE0u;
            // 0x12fbe4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBE8u; }
        if (ctx->pc != 0x12FBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBE8u; }
        if (ctx->pc != 0x12FBE8u) { return; }
    }
    ctx->pc = 0x12FBE8u;
label_12fbe8:
    // 0x12fbe8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12fbe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12fbf0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FBF0u;
    SET_GPR_U32(ctx, 31, 0x12FBF8u);
    ctx->pc = 0x12FBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBF0u;
            // 0x12fbf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBF8u; }
        if (ctx->pc != 0x12FBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBF8u; }
        if (ctx->pc != 0x12FBF8u) { return; }
    }
    ctx->pc = 0x12FBF8u;
label_12fbf8:
    // 0x12fbf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12fbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12fbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc00: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12FC00u;
    SET_GPR_U32(ctx, 31, 0x12FC08u);
    ctx->pc = 0x12FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC00u;
            // 0x12fc04: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC08u; }
        if (ctx->pc != 0x12FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC08u; }
        if (ctx->pc != 0x12FC08u) { return; }
    }
    ctx->pc = 0x12FC08u;
label_12fc08:
    // 0x12fc08: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12fc0c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x12fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x12fc10: 0xc041bce  jal         func_106F38
    ctx->pc = 0x12FC10u;
    SET_GPR_U32(ctx, 31, 0x12FC18u);
    ctx->pc = 0x12FC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC10u;
            // 0x12fc14: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC18u; }
        if (ctx->pc != 0x12FC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC18u; }
        if (ctx->pc != 0x12FC18u) { return; }
    }
    ctx->pc = 0x12FC18u;
label_12fc18:
    // 0x12fc18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12fc1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x12fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12fc20: 0xc041bce  jal         func_106F38
    ctx->pc = 0x12FC20u;
    SET_GPR_U32(ctx, 31, 0x12FC28u);
    ctx->pc = 0x12FC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC20u;
            // 0x12fc24: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC28u; }
        if (ctx->pc != 0x12FC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC28u; }
        if (ctx->pc != 0x12FC28u) { return; }
    }
    ctx->pc = 0x12FC28u;
label_12fc28:
    // 0x12fc28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12fc2c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x12fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x12fc30: 0xc041bce  jal         func_106F38
    ctx->pc = 0x12FC30u;
    SET_GPR_U32(ctx, 31, 0x12FC38u);
    ctx->pc = 0x12FC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC30u;
            // 0x12fc34: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC38u; }
        if (ctx->pc != 0x12FC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC38u; }
        if (ctx->pc != 0x12FC38u) { return; }
    }
    ctx->pc = 0x12FC38u;
label_12fc38:
    // 0x12fc38: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12fc3c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12FC3Cu;
    SET_GPR_U32(ctx, 31, 0x12FC44u);
    ctx->pc = 0x12FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC3Cu;
            // 0x12fc40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC44u; }
        if (ctx->pc != 0x12FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC44u; }
        if (ctx->pc != 0x12FC44u) { return; }
    }
    ctx->pc = 0x12FC44u;
label_12fc44:
    // 0x12fc44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12fc44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12fc48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x12fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x12fc4c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12FC4Cu;
    SET_GPR_U32(ctx, 31, 0x12FC54u);
    ctx->pc = 0x12FC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC4Cu;
            // 0x12fc50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC54u; }
        if (ctx->pc != 0x12FC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC54u; }
        if (ctx->pc != 0x12FC54u) { return; }
    }
    ctx->pc = 0x12FC54u;
label_12fc54:
    // 0x12fc54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc58: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x12fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12fc5c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12FC5Cu;
    SET_GPR_U32(ctx, 31, 0x12FC64u);
    ctx->pc = 0x12FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC5Cu;
            // 0x12fc60: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC64u; }
        if (ctx->pc != 0x12FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC64u; }
        if (ctx->pc != 0x12FC64u) { return; }
    }
    ctx->pc = 0x12FC64u;
label_12fc64:
    // 0x12fc64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12fc64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fc68: 0x0  nop
    ctx->pc = 0x12fc68u;
    // NOP
    // 0x12fc6c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x12fc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fc70: 0x0  nop
    ctx->pc = 0x12fc70u;
    // NOP
    // 0x12fc74: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x12FC74u;
    {
        const bool branch_taken_0x12fc74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fc74) {
            ctx->pc = 0x12FCA4u;
            goto label_12fca4;
        }
    }
    ctx->pc = 0x12FC7Cu;
    // 0x12fc7c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x12fc7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fc80: 0x0  nop
    ctx->pc = 0x12fc80u;
    // NOP
    // 0x12fc84: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x12FC84u;
    {
        const bool branch_taken_0x12fc84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fc84) {
            ctx->pc = 0x12FCA4u;
            goto label_12fca4;
        }
    }
    ctx->pc = 0x12FC8Cu;
    // 0x12fc8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12fc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fc90: 0x0  nop
    ctx->pc = 0x12fc90u;
    // NOP
    // 0x12fc94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FC94u;
    {
        const bool branch_taken_0x12fc94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC94u;
            // 0x12fc98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc94) {
            ctx->pc = 0x12FCA4u;
            goto label_12fca4;
        }
    }
    ctx->pc = 0x12FC9Cu;
    // 0x12fc9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12FC9Cu;
    {
        const bool branch_taken_0x12fc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC9Cu;
            // 0x12fca0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc9c) {
            ctx->pc = 0x12FCECu;
            goto label_12fcec;
        }
    }
    ctx->pc = 0x12FCA4u;
label_12fca4:
    // 0x12fca4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12fca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fca8: 0x0  nop
    ctx->pc = 0x12fca8u;
    // NOP
    // 0x12fcac: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x12fcacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fcb0: 0x0  nop
    ctx->pc = 0x12fcb0u;
    // NOP
    // 0x12fcb4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x12FCB4u;
    {
        const bool branch_taken_0x12fcb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCB4u;
            // 0x12fcb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcb4) {
            ctx->pc = 0x12FCE8u;
            goto label_12fce8;
        }
    }
    ctx->pc = 0x12FCBCu;
    // 0x12fcbc: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x12fcbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fcc0: 0x0  nop
    ctx->pc = 0x12fcc0u;
    // NOP
    // 0x12fcc4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x12FCC4u;
    {
        const bool branch_taken_0x12fcc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fcc4) {
            ctx->pc = 0x12FCE4u;
            goto label_12fce4;
        }
    }
    ctx->pc = 0x12FCCCu;
    // 0x12fccc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12fcccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fcd0: 0x0  nop
    ctx->pc = 0x12fcd0u;
    // NOP
    // 0x12fcd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12FCD4u;
    {
        const bool branch_taken_0x12fcd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCD4u;
            // 0x12fcd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcd4) {
            ctx->pc = 0x12FCE4u;
            goto label_12fce4;
        }
    }
    ctx->pc = 0x12FCDCu;
    // 0x12fcdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12FCDCu;
    {
        const bool branch_taken_0x12fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcdc) {
            ctx->pc = 0x12FCE8u;
            goto label_12fce8;
        }
    }
    ctx->pc = 0x12FCE4u;
label_12fce4:
    // 0x12fce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12fce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fce8:
    // 0x12fce8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12fce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12fcec:
    // 0x12fcec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x12fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12fcf0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12fcf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fcf4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12fcf8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12fcf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fcfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12fcfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fd00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12fd00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fd04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12fd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fd08: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD08u;
            // 0x12fd0c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FD10u;
}
