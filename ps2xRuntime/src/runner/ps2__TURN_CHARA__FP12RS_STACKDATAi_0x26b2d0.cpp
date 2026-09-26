#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _TURN_CHARA__FP12RS_STACKDATAi
// Address: 0x26b2d0 - 0x26b3d0
void ps2__TURN_CHARA__FP12RS_STACKDATAi_0x26b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TURN_CHARA__FP12RS_STACKDATAi_0x26b2d0");
#endif

    switch (ctx->pc) {
        case 0x26b2d0u: goto label_26b2d0;
        case 0x26b2d4u: goto label_26b2d4;
        case 0x26b2d8u: goto label_26b2d8;
        case 0x26b2dcu: goto label_26b2dc;
        case 0x26b2e0u: goto label_26b2e0;
        case 0x26b2e4u: goto label_26b2e4;
        case 0x26b2e8u: goto label_26b2e8;
        case 0x26b2ecu: goto label_26b2ec;
        case 0x26b2f0u: goto label_26b2f0;
        case 0x26b2f4u: goto label_26b2f4;
        case 0x26b2f8u: goto label_26b2f8;
        case 0x26b2fcu: goto label_26b2fc;
        case 0x26b300u: goto label_26b300;
        case 0x26b304u: goto label_26b304;
        case 0x26b308u: goto label_26b308;
        case 0x26b30cu: goto label_26b30c;
        case 0x26b310u: goto label_26b310;
        case 0x26b314u: goto label_26b314;
        case 0x26b318u: goto label_26b318;
        case 0x26b31cu: goto label_26b31c;
        case 0x26b320u: goto label_26b320;
        case 0x26b324u: goto label_26b324;
        case 0x26b328u: goto label_26b328;
        case 0x26b32cu: goto label_26b32c;
        case 0x26b330u: goto label_26b330;
        case 0x26b334u: goto label_26b334;
        case 0x26b338u: goto label_26b338;
        case 0x26b33cu: goto label_26b33c;
        case 0x26b340u: goto label_26b340;
        case 0x26b344u: goto label_26b344;
        case 0x26b348u: goto label_26b348;
        case 0x26b34cu: goto label_26b34c;
        case 0x26b350u: goto label_26b350;
        case 0x26b354u: goto label_26b354;
        case 0x26b358u: goto label_26b358;
        case 0x26b35cu: goto label_26b35c;
        case 0x26b360u: goto label_26b360;
        case 0x26b364u: goto label_26b364;
        case 0x26b368u: goto label_26b368;
        case 0x26b36cu: goto label_26b36c;
        case 0x26b370u: goto label_26b370;
        case 0x26b374u: goto label_26b374;
        case 0x26b378u: goto label_26b378;
        case 0x26b37cu: goto label_26b37c;
        case 0x26b380u: goto label_26b380;
        case 0x26b384u: goto label_26b384;
        case 0x26b388u: goto label_26b388;
        case 0x26b38cu: goto label_26b38c;
        case 0x26b390u: goto label_26b390;
        case 0x26b394u: goto label_26b394;
        case 0x26b398u: goto label_26b398;
        case 0x26b39cu: goto label_26b39c;
        case 0x26b3a0u: goto label_26b3a0;
        case 0x26b3a4u: goto label_26b3a4;
        case 0x26b3a8u: goto label_26b3a8;
        case 0x26b3acu: goto label_26b3ac;
        case 0x26b3b0u: goto label_26b3b0;
        case 0x26b3b4u: goto label_26b3b4;
        case 0x26b3b8u: goto label_26b3b8;
        case 0x26b3bcu: goto label_26b3bc;
        case 0x26b3c0u: goto label_26b3c0;
        case 0x26b3c4u: goto label_26b3c4;
        case 0x26b3c8u: goto label_26b3c8;
        case 0x26b3ccu: goto label_26b3cc;
        default: break;
    }

    ctx->pc = 0x26b2d0u;

label_26b2d0:
    // 0x26b2d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26b2d4:
    // 0x26b2d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_26b2d8:
    // 0x26b2d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_26b2dc:
    // 0x26b2dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26b2e0:
    // 0x26b2e0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26b2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_26b2e4:
    // 0x26b2e4: 0xc097e18  jal         func_25F860
label_26b2e8:
    if (ctx->pc == 0x26B2E8u) {
        ctx->pc = 0x26B2E8u;
            // 0x26b2e8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x26B2ECu;
        goto label_26b2ec;
    }
    ctx->pc = 0x26B2E4u;
    SET_GPR_U32(ctx, 31, 0x26B2ECu);
    ctx->pc = 0x26B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2E4u;
            // 0x26b2e8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2ECu; }
        if (ctx->pc != 0x26B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2ECu; }
        if (ctx->pc != 0x26B2ECu) { return; }
    }
    ctx->pc = 0x26B2ECu;
label_26b2ec:
    // 0x26b2ec: 0xc09ac74  jal         func_26B1D0
label_26b2f0:
    if (ctx->pc == 0x26B2F0u) {
        ctx->pc = 0x26B2F0u;
            // 0x26b2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B2F4u;
        goto label_26b2f4;
    }
    ctx->pc = 0x26B2ECu;
    SET_GPR_U32(ctx, 31, 0x26B2F4u);
    ctx->pc = 0x26B2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2ECu;
            // 0x26b2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2F4u; }
        if (ctx->pc != 0x26B2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2F4u; }
        if (ctx->pc != 0x26B2F4u) { return; }
    }
    ctx->pc = 0x26B2F4u;
label_26b2f4:
    // 0x26b2f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b2f8:
    // 0x26b2f8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_26b2fc:
    if (ctx->pc == 0x26B2FCu) {
        ctx->pc = 0x26B2FCu;
            // 0x26b2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B300u;
        goto label_26b300;
    }
    ctx->pc = 0x26B2F8u;
    {
        const bool branch_taken_0x26b2f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2F8u;
            // 0x26b2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2f8) {
            ctx->pc = 0x26B308u;
            goto label_26b308;
        }
    }
    ctx->pc = 0x26B300u;
label_26b300:
    // 0x26b300: 0x1000002d  b           . + 4 + (0x2D << 2)
label_26b304:
    if (ctx->pc == 0x26B304u) {
        ctx->pc = 0x26B304u;
            // 0x26b304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B308u;
        goto label_26b308;
    }
    ctx->pc = 0x26B300u;
    {
        const bool branch_taken_0x26b300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B300u;
            // 0x26b304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b300) {
            ctx->pc = 0x26B3B8u;
            goto label_26b3b8;
        }
    }
    ctx->pc = 0x26B308u;
label_26b308:
    // 0x26b308: 0xc097e28  jal         func_25F8A0
label_26b30c:
    if (ctx->pc == 0x26B30Cu) {
        ctx->pc = 0x26B30Cu;
            // 0x26b30c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B310u;
        goto label_26b310;
    }
    ctx->pc = 0x26B308u;
    SET_GPR_U32(ctx, 31, 0x26B310u);
    ctx->pc = 0x26B30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B308u;
            // 0x26b30c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B310u; }
        if (ctx->pc != 0x26B310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B310u; }
        if (ctx->pc != 0x26B310u) { return; }
    }
    ctx->pc = 0x26B310u;
label_26b310:
    // 0x26b310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b314:
    // 0x26b314: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26b314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26b318:
    // 0x26b318: 0xc097e28  jal         func_25F8A0
label_26b31c:
    if (ctx->pc == 0x26B31Cu) {
        ctx->pc = 0x26B31Cu;
            // 0x26b31c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B320u;
        goto label_26b320;
    }
    ctx->pc = 0x26B318u;
    SET_GPR_U32(ctx, 31, 0x26B320u);
    ctx->pc = 0x26B31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B318u;
            // 0x26b31c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B320u; }
        if (ctx->pc != 0x26B320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B320u; }
        if (ctx->pc != 0x26B320u) { return; }
    }
    ctx->pc = 0x26B320u;
label_26b320:
    // 0x26b320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b324:
    // 0x26b324: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26b324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b328:
    // 0x26b328: 0xc097e28  jal         func_25F8A0
label_26b32c:
    if (ctx->pc == 0x26B32Cu) {
        ctx->pc = 0x26B32Cu;
            // 0x26b32c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26B330u;
        goto label_26b330;
    }
    ctx->pc = 0x26B328u;
    SET_GPR_U32(ctx, 31, 0x26B330u);
    ctx->pc = 0x26B32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B328u;
            // 0x26b32c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B330u; }
        if (ctx->pc != 0x26B330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B330u; }
        if (ctx->pc != 0x26B330u) { return; }
    }
    ctx->pc = 0x26B330u;
label_26b330:
    // 0x26b330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26b334:
    // 0x26b334: 0xc097e28  jal         func_25F8A0
label_26b338:
    if (ctx->pc == 0x26B338u) {
        ctx->pc = 0x26B338u;
            // 0x26b338: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->pc = 0x26B33Cu;
        goto label_26b33c;
    }
    ctx->pc = 0x26B334u;
    SET_GPR_U32(ctx, 31, 0x26B33Cu);
    ctx->pc = 0x26B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B334u;
            // 0x26b338: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B33Cu; }
        if (ctx->pc != 0x26B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B33Cu; }
        if (ctx->pc != 0x26B33Cu) { return; }
    }
    ctx->pc = 0x26B33Cu;
label_26b33c:
    // 0x26b33c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b340:
    // 0x26b340: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26b340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26b344:
    // 0x26b344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b348:
    // 0x26b348: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x26b348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_26b34c:
    // 0x26b34c: 0x320f809  jalr        $t9
label_26b350:
    if (ctx->pc == 0x26B350u) {
        ctx->pc = 0x26B350u;
            // 0x26b350: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x26B354u;
        goto label_26b354;
    }
    ctx->pc = 0x26B34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B354u);
        ctx->pc = 0x26B350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B34Cu;
            // 0x26b350: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B354u; }
            if (ctx->pc != 0x26B354u) { return; }
        }
        }
    }
    ctx->pc = 0x26B354u;
label_26b354:
    // 0x26b354: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b358:
    // 0x26b358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b35c:
    // 0x26b35c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x26b35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_26b360:
    // 0x26b360: 0x320f809  jalr        $t9
label_26b364:
    if (ctx->pc == 0x26B364u) {
        ctx->pc = 0x26B364u;
            // 0x26b364: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x26B368u;
        goto label_26b368;
    }
    ctx->pc = 0x26B360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B368u);
        ctx->pc = 0x26B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B360u;
            // 0x26b364: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B368u; }
            if (ctx->pc != 0x26B368u) { return; }
        }
        }
    }
    ctx->pc = 0x26B368u;
label_26b368:
    // 0x26b368: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x26b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_26b36c:
    // 0x26b36c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x26b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26b370:
    // 0x26b370: 0xc041c3e  jal         func_1070F8
label_26b374:
    if (ctx->pc == 0x26B374u) {
        ctx->pc = 0x26B374u;
            // 0x26b374: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x26B378u;
        goto label_26b378;
    }
    ctx->pc = 0x26B370u;
    SET_GPR_U32(ctx, 31, 0x26B378u);
    ctx->pc = 0x26B374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B370u;
            // 0x26b374: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B378u; }
        if (ctx->pc != 0x26B378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B378u; }
        if (ctx->pc != 0x26B378u) { return; }
    }
    ctx->pc = 0x26B378u;
label_26b378:
    // 0x26b378: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x26b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_26b37c:
    // 0x26b37c: 0xc047c76  jal         func_11F1D8
label_26b380:
    if (ctx->pc == 0x26B380u) {
        ctx->pc = 0x26B380u;
            // 0x26b380: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x26B384u;
        goto label_26b384;
    }
    ctx->pc = 0x26B37Cu;
    SET_GPR_U32(ctx, 31, 0x26B384u);
    ctx->pc = 0x26B380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B37Cu;
            // 0x26b380: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B384u; }
        if (ctx->pc != 0x26B384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B384u; }
        if (ctx->pc != 0x26B384u) { return; }
    }
    ctx->pc = 0x26B384u;
label_26b384:
    // 0x26b384: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x26b384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_26b388:
    // 0x26b388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26b388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b38c:
    // 0x26b38c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x26b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26b390:
    // 0x26b390: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x26b390u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_26b394:
    // 0x26b394: 0xc04c2d8  jal         func_130B60
label_26b398:
    if (ctx->pc == 0x26B398u) {
        ctx->pc = 0x26B398u;
            // 0x26b398: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x26B39Cu;
        goto label_26b39c;
    }
    ctx->pc = 0x26B394u;
    SET_GPR_U32(ctx, 31, 0x26B39Cu);
    ctx->pc = 0x26B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B394u;
            // 0x26b398: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B39Cu; }
        if (ctx->pc != 0x26B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B39Cu; }
        if (ctx->pc != 0x26B39Cu) { return; }
    }
    ctx->pc = 0x26B39Cu;
label_26b39c:
    // 0x26b39c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x26b39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_26b3a0:
    // 0x26b3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b3a4:
    // 0x26b3a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x26b3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26b3a8:
    // 0x26b3a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x26b3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_26b3ac:
    // 0x26b3ac: 0x320f809  jalr        $t9
label_26b3b0:
    if (ctx->pc == 0x26B3B0u) {
        ctx->pc = 0x26B3B0u;
            // 0x26b3b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x26B3B4u;
        goto label_26b3b4;
    }
    ctx->pc = 0x26B3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26B3B4u);
        ctx->pc = 0x26B3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3ACu;
            // 0x26b3b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B3B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B3B4u; }
            if (ctx->pc != 0x26B3B4u) { return; }
        }
        }
    }
    ctx->pc = 0x26B3B4u;
label_26b3b4:
    // 0x26b3b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b3b8:
    // 0x26b3b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26b3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26b3bc:
    // 0x26b3bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26b3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26b3c0:
    // 0x26b3c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26b3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26b3c4:
    // 0x26b3c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26b3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26b3c8:
    // 0x26b3c8: 0x3e00008  jr          $ra
label_26b3cc:
    if (ctx->pc == 0x26B3CCu) {
        ctx->pc = 0x26B3CCu;
            // 0x26b3cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x26B3D0u;
        goto label_fallthrough_0x26b3c8;
    }
    ctx->pc = 0x26B3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3C8u;
            // 0x26b3cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26b3c8:
    ctx->pc = 0x26B3D0u;
}
